/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_List;
    QAction *actionOpen_List;
    QAction *actionExit;
    QAction *actionSave_List;
    QAction *actionSave_List_as;
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *ListName;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *NewTask;
    QPushButton *editTask;
    QPushButton *deleteTask;
    QPushButton *refreshButton;
    QWidget *horizontalLayoutWidget;
    QGridLayout *gridLayout;
    QListWidget *taskList;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(430, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_List = new QAction(MainWindow);
        actionNew_List->setObjectName(QStringLiteral("actionNew_List"));
        actionOpen_List = new QAction(MainWindow);
        actionOpen_List->setObjectName(QStringLiteral("actionOpen_List"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSave_List = new QAction(MainWindow);
        actionSave_List->setObjectName(QStringLiteral("actionSave_List"));
        actionSave_List_as = new QAction(MainWindow);
        actionSave_List_as->setObjectName(QStringLiteral("actionSave_List_as"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 0, 411, 41));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        ListName = new QLabel(frame);
        ListName->setObjectName(QStringLiteral("ListName"));
        ListName->setGeometry(QRect(70, 10, 331, 21));
        QFont font;
        font.setPointSize(12);
        ListName->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 21));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 40, 411, 41));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        NewTask = new QPushButton(frame_2);
        NewTask->setObjectName(QStringLiteral("NewTask"));
        NewTask->setGeometry(QRect(10, 10, 81, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rsc/icons8-task-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewTask->setIcon(icon1);
        editTask = new QPushButton(frame_2);
        editTask->setObjectName(QStringLiteral("editTask"));
        editTask->setGeometry(QRect(100, 10, 81, 21));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rsc/icons8-edit-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        editTask->setIcon(icon2);
        deleteTask = new QPushButton(frame_2);
        deleteTask->setObjectName(QStringLiteral("deleteTask"));
        deleteTask->setGeometry(QRect(190, 10, 91, 21));
        sizePolicy.setHeightForWidth(deleteTask->sizePolicy().hasHeightForWidth());
        deleteTask->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rsc/icons8-delete-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteTask->setIcon(icon3);
        refreshButton = new QPushButton(frame_2);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(290, 10, 75, 23));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rsc/icons8-refresh-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon4);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 80, 411, 391));
        gridLayout = new QGridLayout(horizontalLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        taskList = new QListWidget(horizontalLayoutWidget);
        taskList->setObjectName(QStringLiteral("taskList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(taskList->sizePolicy().hasHeightForWidth());
        taskList->setSizePolicy(sizePolicy1);
        taskList->setStyleSheet(QStringLiteral("p"));
        taskList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(taskList, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setColumnStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);
        frame_2->raise();
        frame->raise();
        horizontalLayoutWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 430, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(NewTask, editTask);
        QWidget::setTabOrder(editTask, deleteTask);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_List);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_List);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_List);
        menuFile->addAction(actionSave_List_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "To Do List", 0));
        actionNew_List->setText(QApplication::translate("MainWindow", "&New List", 0));
        actionNew_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen_List->setText(QApplication::translate("MainWindow", "&Open List", 0));
        actionOpen_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        actionSave_List->setText(QApplication::translate("MainWindow", "&Save List", 0));
        actionSave_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_List_as->setText(QApplication::translate("MainWindow", "Save List &as ..", 0));
        actionSave_List_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        ListName->setText(QApplication::translate("MainWindow", "-", 0));
        label->setText(QApplication::translate("MainWindow", "List Name:", 0));
        NewTask->setText(QApplication::translate("MainWindow", "New Task", 0));
        editTask->setText(QApplication::translate("MainWindow", "Edit Task", 0));
        deleteTask->setText(QApplication::translate("MainWindow", "Delete Task", 0));
        refreshButton->setText(QApplication::translate("MainWindow", "Refresh", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
