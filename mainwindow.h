#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJsonArray>
#include <QJsonObject>
#include <QMap>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
                                    // mainWindow constructor
  ~MainWindow();                    // mainWindow deconstructor

private slots:
  void closeEvent(QCloseEvent *event);
                                    // override of window close event
  // -----------------------------------------------------------------------------------
  // menu bar options
  void on_actionOpen_List_triggered();
                                    // event handler of open option triger
  void on_actionSave_List_triggered();
                                    // event handler of save option triger
  void on_actionSave_List_as_triggered();
                                    // event handler of save as option triger
  void on_actionExit_triggered();   // event handler of exit option triger
  void on_actionNew_List_triggered();
                                    // event handler of new list option triger

  //------------------------------------------------------------------------------------
  // form buttons
  void on_NewTask_clicked();        // new task button push event hadler
  void on_editTask_clicked();       // edit button push handler
  void on_taskList_currentRowChanged(int currentRow);
                                    // task selection event handler
  void on_deleteTask_clicked();     // delete button push event handler

  // signal handlers
  void savingHandler();             // handler of save signal emited by other windows
  void exitHandler();               // handler of exit signal emited by other windows
  void checkedHandler(QWidget* t, bool checked);
                                    // if a task checks it will handel event

  void on_refreshButton_clicked();

private:
  // ----------------------------------------------------------------------------------
  // internal functions
  void sort1();                     // sort tasks by status, priority, creation date
  void makeTaskList();              // adds all item of tasks(it doesn't replace them)
  void cleanTaskList();             // deletes all items of list(only task list view will clear
                                    // tasks ans other values will not change
  void addTaskToList(QJsonObject *task);
                                    // adds a task to list view in its own place and add it to tasks
  void deleteTask(int row);         // deletes a row from listwidget and task from task list

private:
  Ui::MainWindow *ui;               // UI
  bool changed = false;                     // List changed statement
  QJsonArray tasks;                 // task list array
  QJsonObject obj;                  // read file object
  QMap<QString, int> priorities;    // map of priorities to level(lower value, higher priority)
  QString Adr;                      // current list file address(empty if new list created)
  int selectedRow = -1;             // index of selected task(1 based)
  bool closeFlag = false;           // this flag used to break showing ExitDialogue loop
  bool openList = false;            // it will set true when a list is open
  int sepLine = 0;                  // it will be in used just in makelist ot addlist
};

#endif // MAINWINDOW_H
