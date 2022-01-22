/********************************************************************************
** Form generated from reading UI file 'exitdialogue.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITDIALOGUE_H
#define UI_EXITDIALOGUE_H

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

class Ui_ExitDialogue
{
public:
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *wsSaving;
    QPushButton *saveExit;
    QPushButton *cancelButton;

    void setupUi(QDialog *ExitDialogue)
    {
        if (ExitDialogue->objectName().isEmpty())
            ExitDialogue->setObjectName(QStringLiteral("ExitDialogue"));
        ExitDialogue->resize(400, 110);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExitDialogue->setWindowIcon(icon);
        frame = new QFrame(ExitDialogue);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 361, 31));
        frame_2 = new QFrame(ExitDialogue);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(90, 60, 301, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        wsSaving = new QPushButton(frame_2);
        wsSaving->setObjectName(QStringLiteral("wsSaving"));
        wsSaving->setGeometry(QRect(100, 10, 111, 23));
        saveExit = new QPushButton(frame_2);
        saveExit->setObjectName(QStringLiteral("saveExit"));
        saveExit->setGeometry(QRect(10, 10, 81, 23));
        cancelButton = new QPushButton(frame_2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(220, 10, 71, 23));
        QWidget::setTabOrder(saveExit, wsSaving);
        QWidget::setTabOrder(wsSaving, cancelButton);

        retranslateUi(ExitDialogue);

        QMetaObject::connectSlotsByName(ExitDialogue);
    } // setupUi

    void retranslateUi(QDialog *ExitDialogue)
    {
        ExitDialogue->setWindowTitle(QApplication::translate("ExitDialogue", "Dialog", 0));
        label->setText(QApplication::translate("ExitDialogue", "Current List has been changed, What you want to Do?", 0));
        wsSaving->setText(QApplication::translate("ExitDialogue", "Without Saving Exit", 0));
        saveExit->setText(QApplication::translate("ExitDialogue", "Save and Exit", 0));
        cancelButton->setText(QApplication::translate("ExitDialogue", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ExitDialogue: public Ui_ExitDialogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITDIALOGUE_H
