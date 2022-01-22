#ifndef NEWLIST_H
#define NEWLIST_H

#include <QDialog>
#include <QJsonObject>

namespace Ui {
  class NewList;
}

class NewList : public QDialog
{
  Q_OBJECT

public:
  explicit NewList(QWidget *parent = 0);
  ~NewList();
  void setTask(QJsonObject * t, QString *a);

private slots:
  void on_creatButton_clicked();

  void on_cancelButton_clicked();

  void on_browseButton_clicked();

private:
  Ui::NewList *ui;
  QJsonObject *task;
  QString *adr;
};

#endif // NEWLIST_H
