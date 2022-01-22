#ifndef PRIORITYLIST_H
#define PRIORITYLIST_H

#include <QDialog>

namespace Ui {
  class PriorityList;
}

class PriorityList : public QDialog
{
  Q_OBJECT

public:
  explicit PriorityList(QWidget *parent = 0);
  ~PriorityList();

private slots:
  void on_pushButton_4_clicked();

private:
  Ui::PriorityList *ui;
};

#endif // PRIORITYLIST_H
