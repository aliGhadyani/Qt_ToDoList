#include "savechanges.h"
#include "ui_savechanges.h"

SaveChanges::SaveChanges(QWidget *parent) :
  QDialog(parent, Qt::WindowCloseButtonHint),
  ui(new Ui::SaveChanges)
{
  ui->setupUi(this);
}

SaveChanges::~SaveChanges()
{
  delete ui;
}

// doesn't save the changes
void SaveChanges::on_pushButton_clicked()
{
  this->close();
}

// saves the changes
void SaveChanges::on_pushButton_2_clicked()
{
  emit saving();
  this->close();
}
