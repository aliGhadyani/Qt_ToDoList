/********************************************************************************
** Form generated from reading UI file 'taskdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDETAIL_H
#define UI_TASKDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TaskDetail
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *title;
    QFrame *frame_2;
    QLabel *label_2;
    QComboBox *priority;
    QFrame *frame_3;
    QLabel *label_4;
    QTextEdit *desc;
    QFrame *frame_4;
    QPushButton *applyButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *TaskDetail)
    {
        if (TaskDetail->objectName().isEmpty())
            TaskDetail->setObjectName(QStringLiteral("TaskDetail"));
        TaskDetail->resize(400, 340);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TaskDetail->setWindowIcon(icon);
        frame = new QFrame(TaskDetail);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 31, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        title = new QLineEdit(frame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(30, 5, 351, 21));
        frame_2 = new QFrame(TaskDetail);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 40, 381, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 47, 41));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        priority = new QComboBox(frame_2);
        priority->setObjectName(QStringLiteral("priority"));
        priority->setGeometry(QRect(50, 10, 141, 22));
        frame_3 = new QFrame(TaskDetail);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 80, 381, 211));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 71, 21));
        label_4->setFont(font1);
        desc = new QTextEdit(frame_3);
        desc->setObjectName(QStringLiteral("desc"));
        desc->setGeometry(QRect(10, 20, 361, 181));
        frame_4 = new QFrame(TaskDetail);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(219, 290, 171, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        applyButton = new QPushButton(frame_4);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(90, 10, 75, 23));
        cancelButton = new QPushButton(frame_4);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(10, 10, 75, 23));
        QWidget::setTabOrder(title, priority);
        QWidget::setTabOrder(priority, desc);
        QWidget::setTabOrder(desc, cancelButton);
        QWidget::setTabOrder(cancelButton, applyButton);

        retranslateUi(TaskDetail);

        QMetaObject::connectSlotsByName(TaskDetail);
    } // setupUi

    void retranslateUi(QDialog *TaskDetail)
    {
        TaskDetail->setWindowTitle(QApplication::translate("TaskDetail", "Dialog", 0));
        label->setText(QApplication::translate("TaskDetail", "Title:", 0));
        label_2->setText(QApplication::translate("TaskDetail", "Priority:", 0));
        label_4->setText(QApplication::translate("TaskDetail", "Description:", 0));
        applyButton->setText(QApplication::translate("TaskDetail", "Apply", 0));
        cancelButton->setText(QApplication::translate("TaskDetail", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskDetail: public Ui_TaskDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDETAIL_H
