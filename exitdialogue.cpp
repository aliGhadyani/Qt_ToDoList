#include "exitdialogue.h"
#include "ui_exitdialogue.h"

ExitDialogue::ExitDialogue(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ExitDialogue)
{
  ui->setupUi(this);
}

ExitDialogue::~ExitDialogue()
{
  delete ui;
}


void ExitDialogue::on_cancelButton_clicked()
{
  this->close();
}

void ExitDialogue::on_saveExit_clicked()
{
  emit saving();
  emit exitButton();
  this->close();
}


void ExitDialogue::on_wsSaving_clicked()
{
  emit exitButton();
  this->close();
}
