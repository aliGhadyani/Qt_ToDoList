#include "prioritylist.h"
#include "ui_prioritylist.h"

PriorityList::PriorityList(QWidget *parent) :
  QDialog(parent, Qt::WindowCloseButtonHint),
  ui(new Ui::PriorityList)
{
  ui->setupUi(this);
}

PriorityList::~PriorityList()
{
  delete ui;
}

void PriorityList::on_pushButton_4_clicked()
{
    this->close();
}

/* now initialed yed but if customer want i can add it */
