#ifndef EXITDIALOGUE_H
#define EXITDIALOGUE_H

#include <QDialog>

namespace Ui {
  class ExitDialogue;
}

class ExitDialogue : public QDialog
{
  Q_OBJECT

public:
  explicit ExitDialogue(QWidget *parent = 0);
  ~ExitDialogue();

private slots:
  void on_cancelButton_clicked();
  void on_saveExit_clicked();

  void on_wsSaving_clicked();

signals:
  void saving();
  void exitButton();

private:
  Ui::ExitDialogue *ui;
};

#endif // EXITDIALOGUE_H
