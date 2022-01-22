/********************************************************************************
** Form generated from reading UI file 'newlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLIST_H
#define UI_NEWLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewList
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QFrame *frame_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *browseButton;
    QFrame *frame_3;
    QPushButton *creatButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *NewList)
    {
        if (NewList->objectName().isEmpty())
            NewList->setObjectName(QStringLiteral("NewList"));
        NewList->resize(400, 141);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewList->setWindowIcon(icon);
        frame = new QFrame(NewList);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 10, 301, 21));
        frame_2 = new QFrame(NewList);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 50, 381, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 16));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 10, 241, 21));
        browseButton = new QPushButton(frame_2);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setGeometry(QRect(320, 10, 51, 23));
        frame_3 = new QFrame(NewList);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(219, 90, 171, 41));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        creatButton = new QPushButton(frame_3);
        creatButton->setObjectName(QStringLiteral("creatButton"));
        creatButton->setGeometry(QRect(90, 10, 75, 23));
        cancelButton = new QPushButton(frame_3);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(10, 10, 75, 23));
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, browseButton);
        QWidget::setTabOrder(browseButton, cancelButton);
        QWidget::setTabOrder(cancelButton, creatButton);

        retranslateUi(NewList);

        QMetaObject::connectSlotsByName(NewList);
    } // setupUi

    void retranslateUi(QDialog *NewList)
    {
        NewList->setWindowTitle(QApplication::translate("NewList", "Dialog", 0));
        label->setText(QApplication::translate("NewList", "List Name:", 0));
        label_2->setText(QApplication::translate("NewList", "Path:", 0));
        browseButton->setText(QApplication::translate("NewList", "Browse", 0));
        creatButton->setText(QApplication::translate("NewList", "Cre&ate", 0));
        cancelButton->setText(QApplication::translate("NewList", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class NewList: public Ui_NewList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLIST_H
