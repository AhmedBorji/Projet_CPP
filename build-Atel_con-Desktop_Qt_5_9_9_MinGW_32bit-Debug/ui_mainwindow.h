/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_mainToolBar
{
public:

    void setupUi(QToolBar *mainToolBar)
    {
        if (mainToolBar->objectName().isEmpty())
            mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->resize(823, 436);

        retranslateUi(mainToolBar);

        QMetaObject::connectSlotsByName(mainToolBar);
    } // setupUi

    void retranslateUi(QToolBar *mainToolBar)
    {
        Q_UNUSED(mainToolBar);
    } // retranslateUi

};

namespace Ui {
    class mainToolBar: public Ui_mainToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
