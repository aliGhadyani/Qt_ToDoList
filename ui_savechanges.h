/********************************************************************************
** Form generated from reading UI file 'savechanges.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECHANGES_H
#define UI_SAVECHANGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SaveChanges
{
public:
    QFrame *frame_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
    QLabel *label;

    void setupUi(QDialog *SaveChanges)
    {
        if (SaveChanges->objectName().isEmpty())
            SaveChanges->setObjectName(QStringLiteral("SaveChanges"));
        SaveChanges->resize(400, 102);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SaveChanges->setWindowIcon(icon);
        frame_2 = new QFrame(SaveChanges);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(220, 50, 171, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 10, 75, 23));
        frame = new QFrame(SaveChanges);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 301, 21));

        retranslateUi(SaveChanges);

        QMetaObject::connectSlotsByName(SaveChanges);
    } // setupUi

    void retranslateUi(QDialog *SaveChanges)
    {
        SaveChanges->setWindowTitle(QApplication::translate("SaveChanges", "Dialog", 0));
        pushButton->setText(QApplication::translate("SaveChanges", "No", 0));
        pushButton_2->setText(QApplication::translate("SaveChanges", "Yes", 0));
        label->setText(QApplication::translate("SaveChanges", "The list has been changed, do you want to save changes?", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveChanges: public Ui_SaveChanges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECHANGES_H
