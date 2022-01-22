#include "taskdetail.h"
#include "ui_taskdetail.h"
#include "QColorDialog"
#include "QDebug"
#include "QJsonObject"
#include <QDateTime>
#include "definitions.h"

TaskDetail::TaskDetail(QWidget *parent) :
  QDialog(parent, Qt::WindowCloseButtonHint),
  ui(new Ui::TaskDetail)
{
  ui->setupUi(this);
}

TaskDetail::~TaskDetail()
{
  delete ui;
}

// setups widget with given task
void TaskDetail::setTask(QJsonObject *task, QJsonArray p, bool *done){
  t = task;
  apply = done;
  for(int i=0; i<p.size(); i++){
      ui->priority->addItem(QIcon(), p[i].toString(), QVariant());
    }
  ui->title->setText(task->value("Title").toString());
  ui->desc->setText(task->value("Desc").toString());
  ui->priority->setCurrentText(task->value("Priority").toString());
}

// cancel button push event
void TaskDetail::on_cancelButton_clicked()
{
  *apply = false;
  this->close();
}

// apply button push event
void TaskDetail::on_applyButton_clicked()
{
  *apply = true;
  t->insert("Title", ui->title->text());
  t->insert("Desc", ui->desc->toPlainText());
  t->insert("Priority", ui->priority->currentText());
  t->insert("MdDate", QDateTime::currentDateTime().toString(dtFormat));
  if(t->value("CrDate").toString() == ""){
      t->insert("CrDate", t->value("MdDate"));
    }
  this->close();
}
