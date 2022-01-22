/********************************************************************************
** Form generated from reading UI file 'taskwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKWIDGET_H
#define UI_TASKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskWidget
{
public:
    QFrame *bg;
    QLabel *priority;
    QLabel *label;
    QLabel *label_4;
    QPlainTextEdit *desc;
    QCheckBox *taskTitle;
    QLabel *label_3;
    QLabel *crDate;

    void setupUi(QWidget *TaskWidget)
    {
        if (TaskWidget->objectName().isEmpty())
            TaskWidget->setObjectName(QStringLiteral("TaskWidget"));
        TaskWidget->resize(370, 125);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TaskWidget->setWindowIcon(icon);
        TaskWidget->setStyleSheet(QStringLiteral("border: 10 black"));
        bg = new QFrame(TaskWidget);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 370, 121));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bg->sizePolicy().hasHeightForWidth());
        bg->setSizePolicy(sizePolicy);
        bg->setStyleSheet(QStringLiteral(""));
        bg->setFrameShape(QFrame::StyledPanel);
        bg->setFrameShadow(QFrame::Raised);
        priority = new QLabel(bg);
        priority->setObjectName(QStringLiteral("priority"));
        priority->setGeometry(QRect(220, 10, 141, 20));
        QFont font;
        font.setPointSize(8);
        priority->setFont(font);
        label = new QLabel(bg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 50, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_4 = new QLabel(bg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 70, 20));
        label_4->setFont(font1);
        desc = new QPlainTextEdit(bg);
        desc->setObjectName(QStringLiteral("desc"));
        desc->setEnabled(true);
        desc->setGeometry(QRect(80, 50, 271, 61));
        desc->setAutoFillBackground(true);
        desc->setStyleSheet(QStringLiteral("border:1"));
        desc->setReadOnly(true);
        desc->setBackgroundVisible(true);
        taskTitle = new QCheckBox(bg);
        taskTitle->setObjectName(QStringLiteral("taskTitle"));
        taskTitle->setGeometry(QRect(10, 10, 151, 20));
        sizePolicy.setHeightForWidth(taskTitle->sizePolicy().hasHeightForWidth());
        taskTitle->setSizePolicy(sizePolicy);
        taskTitle->setAutoFillBackground(false);
        taskTitle->setStyleSheet(QStringLiteral("background-color: rgb(160, 255, 120)"));
        label_3 = new QLabel(bg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 30, 50, 20));
        label_3->setFont(font1);
        crDate = new QLabel(bg);
        crDate->setObjectName(QStringLiteral("crDate"));
        crDate->setGeometry(QRect(60, 30, 130, 20));
        QWidget::setTabOrder(taskTitle, desc);

        retranslateUi(TaskWidget);

        QMetaObject::connectSlotsByName(TaskWidget);
    } // setupUi

    void retranslateUi(QWidget *TaskWidget)
    {
        TaskWidget->setWindowTitle(QApplication::translate("TaskWidget", "Form", 0));
        priority->setText(QApplication::translate("TaskWidget", "TextLabel", 0));
        label->setText(QApplication::translate("TaskWidget", "Priority:", 0));
        label_4->setText(QApplication::translate("TaskWidget", "Description:", 0));
        taskTitle->setText(QApplication::translate("TaskWidget", "taskTitle", 0));
        label_3->setText(QApplication::translate("TaskWidget", "CrDate:", 0));
        crDate->setText(QApplication::translate("TaskWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskWidget: public Ui_TaskWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWIDGET_H
