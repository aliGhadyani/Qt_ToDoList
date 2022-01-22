#include "newlist.h"
#include "ui_newlist.h"

#include <QJsonObject>
#include <QMessageBox>
#include <QFileDialog>

NewList::NewList(QWidget *parent) :
  QDialog(parent, Qt::WindowCloseButtonHint),
  ui(new Ui::NewList)
{
  ui->setupUi(this);
  ui->lineEdit_2->setText("C:/Lists/untitled.json");
}

NewList::~NewList()
{
  delete ui;
}

// setup widget with given task
void NewList::setTask(QJsonObject *t, QString *a){
  task = t;
  adr = a;
}

// create button push event
void NewList::on_creatButton_clicked()
{
  if(ui->lineEdit->text()==""){
      QMessageBox a;
      a.setText("You must enter list name");
      a.show();
      return;
    }
  if(ui->lineEdit_2->text()==""){
      QMessageBox a;
      a.setText("You must set a path");
      a.show();
      return;
    }
  QFile check(ui->lineEdit_2->text());
  if(check.open(QIODevice::ReadOnly)){
      QMessageBox::StandardButton response;
        response = QMessageBox::question(this, "File exist", "Do you want to replace?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (response == QMessageBox::No) {
            check.close();
          return;
        }
    }
  check.close();
  task->insert("ListName", ui->lineEdit->text());
  *adr = ui->lineEdit_2->text();
  this->close();
}

// cancel button push event
void NewList::on_cancelButton_clicked()
{
  *adr = "";
  this->close();
}

// browse button
void NewList::on_browseButton_clicked()
{
  QString format = "JSON (*.json)";
  QString adr = QFileDialog::getSaveFileName(this, "Path", "/", format, &format);

      if(adr != ""){
      ui->lineEdit_2->setText(adr);
}
}
