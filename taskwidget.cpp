#include "taskwidget.h"
#include "ui_taskwidget.h"
#include "QJsonValue"
#include "QJsonObject"
#include <QString>
#include <QDebug>

TaskWidget::TaskWidget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::TaskWidget)
{
  ui->setupUi(this);
}

TaskWidget::~TaskWidget()
{
  delete ui;
}

// it setups widget with given task
void TaskWidget::setWidget(QJsonObject *task){
  QJsonObject temp = *task;
  if(temp["Status"].toString() == "Checked"){
      ui->taskTitle->setCheckState(Qt::CheckState::Checked);
    }
  ui->taskTitle->setText(temp["Title"].toString());
  ui->priority->setText(temp["Priority"].toString());
  ui->crDate->setText(temp["CrDate"].toString());
  ui->desc->insertPlainText(temp["Desc"].toString());
}

// returns title text
QString TaskWidget::getText(){
  return ui->taskTitle->text();
}

// it sets given color as background color
void TaskWidget::setBackground(QColor color){
  ui->bg->setStyleSheet(QString("QFrame{background-color: rgb(%1, %2, %3);}").arg(color.red()).arg(color.green()).arg(color.blue()));
  ui->taskTitle->setStyleSheet(QString("QFrame{background-color: rgb(%1, %2, %3);}").arg(color.red()).arg(color.green()).arg(color.blue()));
}

// its not working for now
void TaskWidget::select(){
  //
}

// when checkbox state toggles its will emit signal
void TaskWidget::on_taskTitle_toggled(bool checked)
{
  emit checkedSignal(this, checked);
}
