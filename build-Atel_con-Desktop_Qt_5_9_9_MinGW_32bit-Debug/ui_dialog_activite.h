/********************************************************************************
** Form generated from reading UI file 'dialog_activite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ACTIVITE_H
#define UI_DIALOG_ACTIVITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_activite
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_ajouter;
    QLineEdit *lineEdit_Code_act;
    QLineEdit *lineEdit_Type_act;
    QLineEdit *lineEdit_Libelle_act;
    QLineEdit *lineEdit_DateH_act;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_ajouter;
    QWidget *tab_supprimer;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_ide_4;
    QWidget *tab_modifier;
    QPushButton *pushButton_modifier;
    QLineEdit *lineEdit_code_mod;
    QLineEdit *lineEdit_type_mod;
    QLineEdit *lineEdit_libelle_mod;
    QLineEdit *lineEdit_dateH_mod;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tab_consulter;
    QTableView *tableactivite;
    QLabel *label_10;
    QPushButton *pushButton_Trier;
    QWidget *tab_chercher;
    QPushButton *pushButton_chercher;
    QTableView *tableactivite_chercher;
    QLineEdit *lineEdit_identifiant;
    QLabel *label_11;
    QWidget *tab;
    QComboBox *comboBox_activite;
    QLineEdit *lineEdit_code_2;
    QLineEdit *lineEdit_type_2;
    QLineEdit *lineEdit_libelle_2;
    QLineEdit *lineEdit_dateH_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QDialog *Dialog_activite)
    {
        if (Dialog_activite->objectName().isEmpty())
            Dialog_activite->setObjectName(QStringLiteral("Dialog_activite"));
        Dialog_activite->resize(784, 459);
        tabWidget = new QTabWidget(Dialog_activite);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 691, 381));
        tab_ajouter = new QWidget();
        tab_ajouter->setObjectName(QStringLiteral("tab_ajouter"));
        lineEdit_Code_act = new QLineEdit(tab_ajouter);
        lineEdit_Code_act->setObjectName(QStringLiteral("lineEdit_Code_act"));
        lineEdit_Code_act->setGeometry(QRect(230, 60, 113, 22));
        lineEdit_Type_act = new QLineEdit(tab_ajouter);
        lineEdit_Type_act->setObjectName(QStringLiteral("lineEdit_Type_act"));
        lineEdit_Type_act->setGeometry(QRect(230, 110, 113, 22));
        lineEdit_Libelle_act = new QLineEdit(tab_ajouter);
        lineEdit_Libelle_act->setObjectName(QStringLiteral("lineEdit_Libelle_act"));
        lineEdit_Libelle_act->setGeometry(QRect(230, 160, 113, 22));
        lineEdit_DateH_act = new QLineEdit(tab_ajouter);
        lineEdit_DateH_act->setObjectName(QStringLiteral("lineEdit_DateH_act"));
        lineEdit_DateH_act->setGeometry(QRect(230, 210, 111, 22));
        label = new QLabel(tab_ajouter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 60, 111, 16));
        label_2 = new QLabel(tab_ajouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 110, 111, 16));
        label_3 = new QLabel(tab_ajouter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 160, 111, 16));
        label_4 = new QLabel(tab_ajouter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 210, 111, 16));
        pushButton_ajouter = new QPushButton(tab_ajouter);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(450, 270, 93, 28));
        tabWidget->addTab(tab_ajouter, QString());
        tab_supprimer = new QWidget();
        tab_supprimer->setObjectName(QStringLiteral("tab_supprimer"));
        label_5 = new QLabel(tab_supprimer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 361, 41));
        pushButton = new QPushButton(tab_supprimer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 260, 93, 28));
        lineEdit_ide_4 = new QLineEdit(tab_supprimer);
        lineEdit_ide_4->setObjectName(QStringLiteral("lineEdit_ide_4"));
        lineEdit_ide_4->setGeometry(QRect(370, 100, 113, 31));
        tabWidget->addTab(tab_supprimer, QString());
        tab_modifier = new QWidget();
        tab_modifier->setObjectName(QStringLiteral("tab_modifier"));
        pushButton_modifier = new QPushButton(tab_modifier);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(430, 260, 93, 28));
        lineEdit_code_mod = new QLineEdit(tab_modifier);
        lineEdit_code_mod->setObjectName(QStringLiteral("lineEdit_code_mod"));
        lineEdit_code_mod->setGeometry(QRect(340, 40, 113, 22));
        lineEdit_type_mod = new QLineEdit(tab_modifier);
        lineEdit_type_mod->setObjectName(QStringLiteral("lineEdit_type_mod"));
        lineEdit_type_mod->setGeometry(QRect(210, 100, 113, 22));
        lineEdit_libelle_mod = new QLineEdit(tab_modifier);
        lineEdit_libelle_mod->setObjectName(QStringLiteral("lineEdit_libelle_mod"));
        lineEdit_libelle_mod->setGeometry(QRect(210, 140, 113, 22));
        lineEdit_dateH_mod = new QLineEdit(tab_modifier);
        lineEdit_dateH_mod->setObjectName(QStringLiteral("lineEdit_dateH_mod"));
        lineEdit_dateH_mod->setGeometry(QRect(210, 180, 113, 22));
        label_6 = new QLabel(tab_modifier);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(55, 40, 271, 20));
        label_7 = new QLabel(tab_modifier);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 100, 101, 16));
        label_8 = new QLabel(tab_modifier);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 140, 101, 16));
        label_9 = new QLabel(tab_modifier);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 180, 56, 16));
        tabWidget->addTab(tab_modifier, QString());
        tab_consulter = new QWidget();
        tab_consulter->setObjectName(QStringLiteral("tab_consulter"));
        tableactivite = new QTableView(tab_consulter);
        tableactivite->setObjectName(QStringLiteral("tableactivite"));
        tableactivite->setGeometry(QRect(60, 30, 441, 211));
        label_10 = new QLabel(tab_consulter);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 260, 191, 16));
        pushButton_Trier = new QPushButton(tab_consulter);
        pushButton_Trier->setObjectName(QStringLiteral("pushButton_Trier"));
        pushButton_Trier->setGeometry(QRect(470, 290, 93, 28));
        tabWidget->addTab(tab_consulter, QString());
        tab_chercher = new QWidget();
        tab_chercher->setObjectName(QStringLiteral("tab_chercher"));
        pushButton_chercher = new QPushButton(tab_chercher);
        pushButton_chercher->setObjectName(QStringLiteral("pushButton_chercher"));
        pushButton_chercher->setGeometry(QRect(560, 290, 93, 28));
        tableactivite_chercher = new QTableView(tab_chercher);
        tableactivite_chercher->setObjectName(QStringLiteral("tableactivite_chercher"));
        tableactivite_chercher->setGeometry(QRect(50, 20, 541, 251));
        lineEdit_identifiant = new QLineEdit(tab_chercher);
        lineEdit_identifiant->setObjectName(QStringLiteral("lineEdit_identifiant"));
        lineEdit_identifiant->setGeometry(QRect(350, 290, 113, 22));
        label_11 = new QLabel(tab_chercher);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 290, 261, 20));
        tabWidget->addTab(tab_chercher, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        comboBox_activite = new QComboBox(tab);
        comboBox_activite->setObjectName(QStringLiteral("comboBox_activite"));
        comboBox_activite->setGeometry(QRect(110, 30, 231, 22));
        lineEdit_code_2 = new QLineEdit(tab);
        lineEdit_code_2->setObjectName(QStringLiteral("lineEdit_code_2"));
        lineEdit_code_2->setGeometry(QRect(240, 100, 113, 22));
        lineEdit_type_2 = new QLineEdit(tab);
        lineEdit_type_2->setObjectName(QStringLiteral("lineEdit_type_2"));
        lineEdit_type_2->setGeometry(QRect(240, 140, 113, 22));
        lineEdit_libelle_2 = new QLineEdit(tab);
        lineEdit_libelle_2->setObjectName(QStringLiteral("lineEdit_libelle_2"));
        lineEdit_libelle_2->setGeometry(QRect(240, 180, 113, 22));
        lineEdit_dateH_2 = new QLineEdit(tab);
        lineEdit_dateH_2->setObjectName(QStringLiteral("lineEdit_dateH_2"));
        lineEdit_dateH_2->setGeometry(QRect(240, 220, 113, 22));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 100, 111, 16));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 140, 111, 16));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 180, 111, 16));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 220, 56, 16));
        tabWidget->addTab(tab, QString());

        retranslateUi(Dialog_activite);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(Dialog_activite);
    } // setupUi

    void retranslateUi(QDialog *Dialog_activite)
    {
        Dialog_activite->setWindowTitle(QApplication::translate("Dialog_activite", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_activite", "CODE_ACTIVITE", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_activite", "TYPE_ACTIVITE", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_activite", "LIBELLE_ACTIVITE", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_activite", "DATE_H", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("Dialog_activite", "Valider", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_ajouter), QApplication::translate("Dialog_activite", "Ajouter", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_activite", "Tapez le code de la activite que vous souhaite modifier", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog_activite", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_supprimer), QApplication::translate("Dialog_activite", "Supprimer", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("Dialog_activite", "Modifier", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_activite", "Tapez le code que vous souhaite le modifier", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_activite", "Type Activite", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog_activite", "Libelle Activite", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog_activite", "Date_H", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_modifier), QApplication::translate("Dialog_activite", "Modifier", Q_NULLPTR));
        label_10->setText(QString());
        pushButton_Trier->setText(QApplication::translate("Dialog_activite", "Trier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_consulter), QApplication::translate("Dialog_activite", "Consulter", Q_NULLPTR));
        pushButton_chercher->setText(QApplication::translate("Dialog_activite", "Chercher", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog_activite", "Vous devez entrer le code de l'activite", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_chercher), QApplication::translate("Dialog_activite", "Chercher", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog_activite", "Code Activite", Q_NULLPTR));
        label_13->setText(QApplication::translate("Dialog_activite", "Type Activite", Q_NULLPTR));
        label_14->setText(QApplication::translate("Dialog_activite", "Libelle Activite", Q_NULLPTR));
        label_15->setText(QApplication::translate("Dialog_activite", "Date_H", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog_activite", "Chercher par date", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_activite: public Ui_Dialog_activite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ACTIVITE_H
