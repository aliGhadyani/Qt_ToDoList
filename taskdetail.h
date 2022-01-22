#ifndef TASKDETAIL_H
#define TASKDETAIL_H

#include <QDialog>
#include "QJsonArray"

namespace Ui {
  class TaskDetail;
}

class TaskDetail : public QDialog
{
  Q_OBJECT

public:
  explicit TaskDetail(QWidget *parent = 0);
  ~TaskDetail();
  void setTask(QJsonObject *task, QJsonArray p, bool *done);

private slots:
  void on_cancelButton_clicked();

  void on_applyButton_clicked();

private:
  Ui::TaskDetail *ui;
  QJsonObject *t;
  bool *apply;
};

#endif // TASKDETAIL_H
