/********************************************************************************
** Form generated from reading UI file 'dialog_home.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HOME_H
#define UI_DIALOG_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_home
{
public:
    QPushButton *pushButton_Personnel;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog_home)
    {
        if (Dialog_home->objectName().isEmpty())
            Dialog_home->setObjectName(QStringLiteral("Dialog_home"));
        Dialog_home->resize(400, 300);
        pushButton_Personnel = new QPushButton(Dialog_home);
        pushButton_Personnel->setObjectName(QStringLiteral("pushButton_Personnel"));
        pushButton_Personnel->setGeometry(QRect(140, 40, 93, 28));
        pushButton_2 = new QPushButton(Dialog_home);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 100, 93, 28));
        pushButton_3 = new QPushButton(Dialog_home);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 170, 93, 28));

        retranslateUi(Dialog_home);

        QMetaObject::connectSlotsByName(Dialog_home);
    } // setupUi

    void retranslateUi(QDialog *Dialog_home)
    {
        Dialog_home->setWindowTitle(QApplication::translate("Dialog_home", "Dialog", Q_NULLPTR));
        pushButton_Personnel->setText(QApplication::translate("Dialog_home", "Personnel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog_home", "Salle", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog_home", "Activite", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_home: public Ui_Dialog_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HOME_H
