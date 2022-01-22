#ifndef SAVECHANGES_H
#define SAVECHANGES_H

#include <QDialog>

namespace Ui {
  class SaveChanges;
}

class SaveChanges : public QDialog
{
  Q_OBJECT

public:
  explicit SaveChanges(QWidget *parent = 0);
  ~SaveChanges();

signals:
  void saving();

private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

private:
  Ui::SaveChanges *ui;
};

#endif // SAVECHANGES_H
