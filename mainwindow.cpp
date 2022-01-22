#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "exitdialogue.h"
#include "taskwidget.h"
#include "taskdetail.h"
#include "definitions.h"
#include "savechanges.h"
#include "newlist.h"

#include <QFileDialog>
#include <QDateTime>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <vector>
#include <QDebug>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <qobject.h>
#include <QCheckBox>
#include <QCloseEvent>

// mainWindow constructor
MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent, Qt::WindowCloseButtonHint | Qt::WindowMinimizeButtonHint),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
  this->setMinimumHeight(500);          // fixes window height to 400px
  this->setMaximumHeight(500);          // fixes window height to 400px
  this->setMinimumWidth(430);          // fixes window height to 450px
  this->setMaximumWidth(430);          // fixes window height to 450px
}

// mainWindow deconstructor
MainWindow::~MainWindow()
{
  delete ui;
}

// -------------------------------------------------------------------------------------------
// Menu bar options triger handler
// exit option of menubar
void MainWindow::on_actionExit_triggered()
{
  if(!openList){
      this->close();
      return;
    }
  if(!changed){
      this->close();
      return;
    }
  ExitDialogue *ed = new ExitDialogue(this);
  // creat a Exit dialogue to ask for save and quit
  // connection of saving and exit signals to their handlers
  connect(ed, SIGNAL(saving()), this, SLOT(savingHandler()));
  connect(ed, SIGNAL(exitButton()), this, SLOT(exitHandler()));
  // show dialogue
  ed->exec();
}

// save option of menu bar; its will check if list has been changed,
// save it in set Adr, if Adr was not set it will triger save as
void MainWindow::on_actionSave_List_triggered(){
  if(!changed){
      return;
    }
  if(Adr == ""){
      on_actionSave_List_as_triggered();
    }
  if(Adr == ""){
      return;
    }
  // replace changed list to list obj
  obj["Rows"] = tasks;
  // conveet priority map to QJsonArray
  QJsonArray p;
  QVector<QString> a(priorities.size());
  for(QMap<QString, int>::iterator it=priorities.begin(); it!=priorities.end(); it++){
      a[it.value()] = it.key();
    }
  for(int i=0; i<a.size(); i++){
      p.append(a[i]);
    }
  // replace changed priority list
  obj["Priorities"] = p;
  // convert obj to doc and write it on the file
  QJsonDocument doc;
  doc.setObject(obj);
  QFile output(Adr);
  if(output.open(QIODevice::WriteOnly | QIODevice::Text)){
      if(output.write(doc.toJson(QJsonDocument::Indented))<=0){
          QMessageBox *error = new QMessageBox();
          error->setText("Error in saving file!");
          error->show();
          output.close();
          return;
        }
      output.close();
    } else {
      QMessageBox *error = new QMessageBox();
      error->setText("Error in saving file!");
      error->show();
      output.close();
      return;
    }
  changed = false;
}

// save as option triger; it will take an address and after that trigers save
void MainWindow::on_actionSave_List_as_triggered(){
  QString format = "JSON (*.json)";
  QString adr = QFileDialog::getSaveFileName(this, "Save as..", "/", format, &format);
  if(adr == ""){
      QMessageBox *error = new QMessageBox();
      error->setText("Error in saving file!");
      error->show();
    }
  Adr = adr;
  changed = true;
  on_actionSave_List_triggered();
}

// open option triger; it will take an address and opens file
// if FileType row of file doesn't match it will make an error and keeps
// current open list, if not it will show new list
void MainWindow::on_actionOpen_List_triggered(){
  if(openList && changed){
      //SaveChanges *sc = new SaveChanges(this);
      //connect(sc, SIGNAL(saving()), this, SLOT(savingHandler()));
      //sc->exec();
    }
  QString format = "JSON (*.json)";
  QString adr = QFileDialog::getOpenFileName(this, "Open", "/", format, &format);
  if(adr == ""){
      QMessageBox *error = new QMessageBox();
      error->setText("Error in openning file!");
      error->show();
      return;
    }
  if(adr == Adr){
      QMessageBox *error = new QMessageBox();
      error->setText("this file is already open!");
      error->show();
      return;
    }
  QFile input(adr);
  if(input.open(QIODevice::ReadOnly | QIODevice::Text)){
      QByteArray file = input.readAll();
      QJsonDocument doc = QJsonDocument::fromJson(file);
      QJsonObject tt = doc.object();
      if(tt["FileType"].toString() != fileType){
          QMessageBox *error = new QMessageBox();
          error->setText("invalid data file!");
          error->show();
          return;
        }
      obj = tt;
      tasks = obj["Rows"].toArray();
      QJsonArray t = obj["Priorities"].toArray();
      for(int i=0; i<t.size(); i++){
          priorities[t[i].toString()] = i;
        }
      cleanTaskList();
      sort1();
      makeTaskList();
      ui->ListName->setText(obj["ListName"].toString());
    } else {
      QMessageBox *error = new QMessageBox();
      error->setText("Error in openning file!");
      error->exec();
      return;
    }
  Adr = adr;
  openList = true;
}

// new list option trigger; it will make new list from template
// it will check if a list is open, save changes
void MainWindow::on_actionNew_List_triggered()
{
  if(openList && changed){
      SaveChanges *sc = new SaveChanges(this);
      connect(sc, SIGNAL(saving()), this, SLOT(savingHandler()));
      sc->exec();
    }
  QJsonObject nl;
  QString adr;
  QString t = tempFile;
  nl = QJsonDocument::fromJson(t.toUtf8()).object();
  NewList *NL = new NewList();
  NL->setTask(&nl, &adr);
  NL->exec();
  if(adr == ""){
      return;
    }
  obj = nl;
  Adr = adr;
  qDebug() << Adr;
  tasks = obj["Rows"].toArray();
  QJsonArray tt = obj["Priorities"].toArray();
  ui->ListName->setText(obj["ListName"].toString());
  for(int i=0; i<tt.size(); i++){
      priorities[tt[i].toString()] = i;
    }
  cleanTaskList();
  makeTaskList();
  openList = true;
  changed = true;
}


// -------------------------------------------------------------------------------------------
// Signal handlers
// exit signal handler; its will close mainWindow
void MainWindow::exitHandler(){
  closeFlag = true;
  this->close();
}

// saving signal handler; it will check list changes and directory(Adr)
// if Adr be empty it will opens save as dialogue else save and replace
// to existing file(actually its will triger save and save as options
// of menu bar
void MainWindow::savingHandler(){
  if(!changed){
      return;
    }
  if(Adr == ""){
      on_actionSave_List_as_triggered();
      return;
    }
  on_actionSave_List_triggered();
}

// checkedHandler; it will change status of selected row witch textbox is toggled
// it will toggles status and put it under sepline
void MainWindow::checkedHandler(QWidget* t, bool checked){
  int row = -1;
  for(int i=0; i<ui->taskList->count(); i++){
      if(ui->taskList->itemWidget(ui->taskList->item(i)) == t){
          row = i;
          break;
        }
    }
  if(row<0){
      return;
    }
  if(row>sepLine && sepLine>=0){
      row--;
    }
  QJsonObject task = tasks[row].toObject();
  if(checked){
      task.insert("Status", "Checked");
    } else {
      task.insert("Status", "Unchecked");
    }
  deleteTask(row);
  addTaskToList(&task);
  on_refreshButton_clicked();
  qDebug() << row;
}

// -------------------------------------------------------------------------------------------
// MainWindow x(close) button clicked
// it will triger exit option of menu bar
void MainWindow::closeEvent(QCloseEvent *event)
{
  if(closeFlag){
      event->accept();
    } else {
      on_actionExit_triggered();
    }
}


// -------------------------------------------------------------------------------------------
// Form buttons
// add new task; it will add new task to list and insert it in list view
void MainWindow::on_NewTask_clicked(){
  if(!openList){
      return;
    }
  QJsonObject *task = new QJsonObject();
  bool add = false;
  QString tf = tempTask;
  *task = QJsonDocument::fromJson(tf.toUtf8()).object();
  TaskDetail *td = new TaskDetail();
  td->setTask(task, obj["Priorities"].toArray(), &add);
  td->exec();
  if(add){
      addTaskToList(task);
    }
  on_refreshButton_clicked();
  selectedRow = -1;
  ui->taskList->setCurrentRow(-1);
}

// opens task detail window and applys changes in selected task
void MainWindow::on_editTask_clicked()
{
  if(!openList){
      return;
    }
  if(selectedRow<0){
      return;
    }
  int row = selectedRow;
  if(row>sepLine && sepLine>=0){
      row--;
    }
  QJsonObject *task = new QJsonObject();
  *task = tasks[row].toObject();
  bool done = false;
  TaskDetail *td = new TaskDetail();
  td->setTask(task, obj["Priorities"].toArray(),&done);
  td->exec();
  if(!done){
      return;
    }
  deleteTask(row);
  addTaskToList(task);
  on_refreshButton_clicked();
  selectedRow = -1;
  ui->taskList->setCurrentRow(-1);
}

// deletes selected task
void MainWindow::on_deleteTask_clicked()
{
  if(!openList){
      return;
    }
  deleteTask(selectedRow);
  selectedRow = -1;
  ui->taskList->setCurrentRow(-1);
  on_refreshButton_clicked();
}

//
void MainWindow::on_taskList_currentRowChanged(int currentRow)
{
  if(currentRow == sepLine){
      selectedRow = -1;
      ui->taskList->setCurrentRow(-1);
    }
  selectedRow = currentRow;
}

// -------------------------------------------------------------------------------------------
// internal functions
// internal function for swap 2 QJsonValue
void swap(QJsonValueRef a, QJsonValueRef b)
{
  QJsonValue temp(a);
  a = QJsonValue(b);
  b = temp;
}

// sorts tasks by status, priority, creation date
void MainWindow::sort1(){
  for(int i=0; i<tasks.size(); i++){
      for(int j=0; j<tasks.size()-i-1; j++){
          QJsonObject a = tasks[j].toObject();
          QJsonObject b = tasks[j+1].toObject();
          if(a["Status"] != b["Status"]){
              if(a["Status"].toString() == "Checked"){
                  swap(tasks[j], tasks[j+1]);
                }
            } else {
              if(a["Priority"] != b["Priority"]){
                  if(priorities[a["Priority"].toString()] > priorities[b["Priority"].toString()]){
                      swap(tasks[j], tasks[j+1]);
                    }
                } else {
                  if(a["CrDate"] != b["CrDate"]){
                      if(QDateTime::fromString(a["CrDate"].toString(), dtFormat) < QDateTime::fromString(b["CrDate"].toString(), dtFormat)){
                          swap(tasks[j], tasks[j+1]);
                        }
                    }
                }
            }
        }
    }
}

// color range
QColor makeColor(int p, int n){
  QColor c(160, 255, 120);
  int k = 180*p/n;
  c.setGreen(160+((k>95)?95:k));
  c.setRed(255-((k<95)?0:k%95));
  return c;
}

// makelist; adds all objects of tasks to listwidget
// !! it will now replace
void MainWindow::makeTaskList(){
  sepLine = -1;
  for(int i=0; i<tasks.size(); i++){
      QJsonObject *t = new QJsonObject();
      *t = tasks[i].toObject();
      if(t->value("Status").toString() == "Checked"){
          if(sepLine<0){
              QFrame *hl = new QFrame(this);
              hl->setFrameShape(QFrame::HLine);
              QListWidgetItem *sp = new QListWidgetItem(ui->taskList);
              sp->setSizeHint(QSize(ui->taskList->width()-20, 10));
              ui->taskList->setItemWidget(sp, hl);
              ui->taskList->addItem(sp);
              sepLine = i;
            }
        }
      TaskWidget *tw = new TaskWidget(this);
      tw->setWidget(t);
      tw->setBackground(makeColor(priorities[t->value("Priority").toString()], priorities.size()));
      connect(tw, SIGNAL(checkedSignal(QWidget*, bool)), this, SLOT(checkedHandler(QWidget*, bool)));
      QListWidgetItem *ts = new QListWidgetItem(ui->taskList);
      ts->setSizeHint(tw->size());
      ui->taskList->setItemWidget(ts, tw);
      ui->taskList->addItem(ts);
    }
}

// clean list; deletes all of list's items
void MainWindow::cleanTaskList(){
  if(ui->taskList->count() <= 0){
      return;
    }
  while(ui->taskList->count()>0){
      ui->taskList->takeItem(0);
    }
}

// adds given task with insertion algorithm
void MainWindow::addTaskToList(QJsonObject *task){
  changed = true;
  QJsonObject b = (*task);
  qDebug() << b["Title"].toString();
  qDebug() << b["CrDate"].toString();
  int row = 0;
  for(int i=0; i<tasks.size(); i++){
      QJsonObject a = tasks[i].toObject();
      if(a["Status"] != b["Status"]){
          if(a["Status"].toString() == "Unchecked"){
              row++;
              continue;
            }
        }else{
          if(a["Priority"] != b["Priority"]){
              if(priorities[a["Priority"].toString()] < priorities[b["Priority"].toString()]){
                  row++;
                  continue;
                }
            } else {
              if(a["CrDate"] != b["CrDate"]){
                  if(QDateTime::fromString(a["CrDate"].toString(), dtFormat) > QDateTime::fromString(b["CrDate"].toString(), dtFormat)){
                      row++;
                      continue;
                    }
                }
            }
        }
      break;
    }
  obj["RowCount"] = obj["RowCount"].toInt() + 1;
  tasks.insert(row, b);
}

// deletes given row
void MainWindow::deleteTask(int row){
  if(row<0){
      return;
    }
  tasks.removeAt(row);
  obj["RowCount"] = obj["RowCount"].toInt() - 1;
  changed = true;
}

// reloads tasklist
void MainWindow::on_refreshButton_clicked()
{
  if(!openList){
      return;
    }
  cleanTaskList();
  makeTaskList();
}
