/********************************************************************************
** Form generated from reading UI file 'prioritylist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIORITYLIST_H
#define UI_PRIORITYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PriorityList
{
public:
    QFrame *frame;
    QListWidget *listWidget;
    QFrame *frame_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *PriorityList)
    {
        if (PriorityList->objectName().isEmpty())
            PriorityList->setObjectName(QStringLiteral("PriorityList"));
        PriorityList->resize(271, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        PriorityList->setWindowIcon(icon);
        frame = new QFrame(PriorityList);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 161, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 161, 281));
        frame_2 = new QFrame(PriorityList);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(170, 10, 91, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 75, 23));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 30, 75, 23));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 60, 75, 23));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 90, 75, 23));

        retranslateUi(PriorityList);

        QMetaObject::connectSlotsByName(PriorityList);
    } // setupUi

    void retranslateUi(QDialog *PriorityList)
    {
        PriorityList->setWindowTitle(QApplication::translate("PriorityList", "Dialog", 0));
        pushButton->setText(QApplication::translate("PriorityList", "Edit", 0));
        pushButton_2->setText(QApplication::translate("PriorityList", "New", 0));
        pushButton_3->setText(QApplication::translate("PriorityList", "Delete", 0));
        pushButton_4->setText(QApplication::translate("PriorityList", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class PriorityList: public Ui_PriorityList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITYLIST_H
