#ifndef TASKWIDGET_H
#define TASKWIDGET_H

#include <QWidget>

namespace Ui {
  class TaskWidget;
}

class TaskWidget : public QWidget
{
  Q_OBJECT
public:
  explicit TaskWidget(QWidget *parent = 0);
  ~TaskWidget();
  void setWidget(QJsonObject *task);
  QString getText();
  void setBackground(QColor color);

public slots:
  void select();
signals:
  void checkedSignal(QWidget* t, bool checked);

private slots:
  void on_taskTitle_toggled(bool checked);

private:
  Ui::TaskWidget *ui;
};

#endif // TASKWIDGET_H
