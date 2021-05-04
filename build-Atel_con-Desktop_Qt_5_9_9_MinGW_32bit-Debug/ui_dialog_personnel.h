/********************************************************************************
** Form generated from reading UI file 'dialog_personnel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PERSONNEL_H
#define UI_DIALOG_PERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_personnel
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_ajouter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_Cin;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Prenom;
    QLineEdit *lineEdit_Role;
    QLineEdit *lineEdit_Pseudo;
    QLineEdit *lineEdit_Mdp;
    QLineEdit *lineEdit_Adresse;
    QLineEdit *lineEdit_Cp;
    QLineEdit *lineEdit_Cdp;
    QLineEdit *lineEdit_Num_Tel;
    QPushButton *pushButton_ajouter;
    QWidget *tab_supprimer;
    QPushButton *pushButton;
    QLabel *label_11;
    QLineEdit *lineEdit_ide_4;
    QWidget *tab_modifier;
    QLineEdit *lineEdit_ide_3;
    QLineEdit *lineEdit_Nom_4;
    QLineEdit *lineEdit_Prenom_4;
    QLineEdit *lineEdit_Role_4;
    QLineEdit *lineEdit_Pseudo_4;
    QLineEdit *lineEdit_Mdp_4;
    QLineEdit *lineEdit_Adresse_4;
    QLineEdit *lineEdit_Cp_4;
    QLineEdit *lineEdit_Cdp_4;
    QLineEdit *lineEdit_Num_Tel_4;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QPushButton *pushButton_modifier;
    QWidget *tab_consulter;
    QTableView *tablePersonnel;
    QPushButton *pushButton_2;
    QWidget *tab_chercher;
    QPushButton *pushButton_3;
    QTableView *tablePersonnel_2;
    QLabel *label_22;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Dialog_personnel)
    {
        if (Dialog_personnel->objectName().isEmpty())
            Dialog_personnel->setObjectName(QStringLiteral("Dialog_personnel"));
        Dialog_personnel->resize(790, 462);
        tabWidget = new QTabWidget(Dialog_personnel);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 651, 411));
        tab_ajouter = new QWidget();
        tab_ajouter->setObjectName(QStringLiteral("tab_ajouter"));
        label = new QLabel(tab_ajouter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 56, 16));
        label_2 = new QLabel(tab_ajouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 56, 16));
        label_3 = new QLabel(tab_ajouter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 56, 16));
        label_4 = new QLabel(tab_ajouter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 56, 16));
        label_5 = new QLabel(tab_ajouter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 56, 16));
        label_6 = new QLabel(tab_ajouter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 170, 56, 16));
        label_7 = new QLabel(tab_ajouter);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 200, 56, 16));
        label_8 = new QLabel(tab_ajouter);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 230, 56, 16));
        label_9 = new QLabel(tab_ajouter);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 260, 56, 16));
        label_10 = new QLabel(tab_ajouter);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 290, 56, 16));
        lineEdit_Cin = new QLineEdit(tab_ajouter);
        lineEdit_Cin->setObjectName(QStringLiteral("lineEdit_Cin"));
        lineEdit_Cin->setGeometry(QRect(110, 20, 113, 22));
        lineEdit_Nom = new QLineEdit(tab_ajouter);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(110, 50, 113, 22));
        lineEdit_Prenom = new QLineEdit(tab_ajouter);
        lineEdit_Prenom->setObjectName(QStringLiteral("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(110, 80, 113, 22));
        lineEdit_Role = new QLineEdit(tab_ajouter);
        lineEdit_Role->setObjectName(QStringLiteral("lineEdit_Role"));
        lineEdit_Role->setGeometry(QRect(110, 110, 113, 22));
        lineEdit_Pseudo = new QLineEdit(tab_ajouter);
        lineEdit_Pseudo->setObjectName(QStringLiteral("lineEdit_Pseudo"));
        lineEdit_Pseudo->setGeometry(QRect(110, 140, 113, 22));
        lineEdit_Mdp = new QLineEdit(tab_ajouter);
        lineEdit_Mdp->setObjectName(QStringLiteral("lineEdit_Mdp"));
        lineEdit_Mdp->setGeometry(QRect(110, 170, 113, 22));
        lineEdit_Adresse = new QLineEdit(tab_ajouter);
        lineEdit_Adresse->setObjectName(QStringLiteral("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(110, 200, 113, 22));
        lineEdit_Cp = new QLineEdit(tab_ajouter);
        lineEdit_Cp->setObjectName(QStringLiteral("lineEdit_Cp"));
        lineEdit_Cp->setGeometry(QRect(110, 230, 113, 22));
        lineEdit_Cdp = new QLineEdit(tab_ajouter);
        lineEdit_Cdp->setObjectName(QStringLiteral("lineEdit_Cdp"));
        lineEdit_Cdp->setGeometry(QRect(110, 260, 113, 22));
        lineEdit_Num_Tel = new QLineEdit(tab_ajouter);
        lineEdit_Num_Tel->setObjectName(QStringLiteral("lineEdit_Num_Tel"));
        lineEdit_Num_Tel->setGeometry(QRect(110, 290, 113, 22));
        pushButton_ajouter = new QPushButton(tab_ajouter);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(390, 290, 93, 28));
        tabWidget->addTab(tab_ajouter, QString());
        tab_supprimer = new QWidget();
        tab_supprimer->setObjectName(QStringLiteral("tab_supprimer"));
        pushButton = new QPushButton(tab_supprimer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 290, 93, 28));
        label_11 = new QLabel(tab_supprimer);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 70, 251, 41));
        lineEdit_ide_4 = new QLineEdit(tab_supprimer);
        lineEdit_ide_4->setObjectName(QStringLiteral("lineEdit_ide_4"));
        lineEdit_ide_4->setGeometry(QRect(320, 80, 113, 22));
        tabWidget->addTab(tab_supprimer, QString());
        tab_modifier = new QWidget();
        tab_modifier->setObjectName(QStringLiteral("tab_modifier"));
        lineEdit_ide_3 = new QLineEdit(tab_modifier);
        lineEdit_ide_3->setObjectName(QStringLiteral("lineEdit_ide_3"));
        lineEdit_ide_3->setGeometry(QRect(490, 40, 113, 22));
        lineEdit_Nom_4 = new QLineEdit(tab_modifier);
        lineEdit_Nom_4->setObjectName(QStringLiteral("lineEdit_Nom_4"));
        lineEdit_Nom_4->setGeometry(QRect(260, 80, 113, 22));
        lineEdit_Prenom_4 = new QLineEdit(tab_modifier);
        lineEdit_Prenom_4->setObjectName(QStringLiteral("lineEdit_Prenom_4"));
        lineEdit_Prenom_4->setGeometry(QRect(260, 110, 113, 22));
        lineEdit_Role_4 = new QLineEdit(tab_modifier);
        lineEdit_Role_4->setObjectName(QStringLiteral("lineEdit_Role_4"));
        lineEdit_Role_4->setGeometry(QRect(260, 140, 113, 22));
        lineEdit_Pseudo_4 = new QLineEdit(tab_modifier);
        lineEdit_Pseudo_4->setObjectName(QStringLiteral("lineEdit_Pseudo_4"));
        lineEdit_Pseudo_4->setGeometry(QRect(260, 170, 113, 22));
        lineEdit_Mdp_4 = new QLineEdit(tab_modifier);
        lineEdit_Mdp_4->setObjectName(QStringLiteral("lineEdit_Mdp_4"));
        lineEdit_Mdp_4->setGeometry(QRect(260, 200, 113, 22));
        lineEdit_Adresse_4 = new QLineEdit(tab_modifier);
        lineEdit_Adresse_4->setObjectName(QStringLiteral("lineEdit_Adresse_4"));
        lineEdit_Adresse_4->setGeometry(QRect(260, 230, 113, 22));
        lineEdit_Cp_4 = new QLineEdit(tab_modifier);
        lineEdit_Cp_4->setObjectName(QStringLiteral("lineEdit_Cp_4"));
        lineEdit_Cp_4->setGeometry(QRect(260, 260, 113, 22));
        lineEdit_Cdp_4 = new QLineEdit(tab_modifier);
        lineEdit_Cdp_4->setObjectName(QStringLiteral("lineEdit_Cdp_4"));
        lineEdit_Cdp_4->setGeometry(QRect(260, 290, 113, 22));
        lineEdit_Num_Tel_4 = new QLineEdit(tab_modifier);
        lineEdit_Num_Tel_4->setObjectName(QStringLiteral("lineEdit_Num_Tel_4"));
        lineEdit_Num_Tel_4->setGeometry(QRect(260, 320, 113, 22));
        label_12 = new QLabel(tab_modifier);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(220, 40, 261, 20));
        label_13 = new QLabel(tab_modifier);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 80, 56, 16));
        label_14 = new QLabel(tab_modifier);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 110, 56, 16));
        label_15 = new QLabel(tab_modifier);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 140, 56, 16));
        label_16 = new QLabel(tab_modifier);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(120, 170, 56, 16));
        label_17 = new QLabel(tab_modifier);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(120, 200, 56, 16));
        label_18 = new QLabel(tab_modifier);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(120, 230, 56, 16));
        label_19 = new QLabel(tab_modifier);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(120, 260, 56, 16));
        label_20 = new QLabel(tab_modifier);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(120, 290, 56, 16));
        label_21 = new QLabel(tab_modifier);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(120, 320, 56, 16));
        pushButton_modifier = new QPushButton(tab_modifier);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(520, 330, 93, 28));
        tabWidget->addTab(tab_modifier, QString());
        tab_consulter = new QWidget();
        tab_consulter->setObjectName(QStringLiteral("tab_consulter"));
        tablePersonnel = new QTableView(tab_consulter);
        tablePersonnel->setObjectName(QStringLiteral("tablePersonnel"));
        tablePersonnel->setGeometry(QRect(60, 40, 451, 251));
        pushButton_2 = new QPushButton(tab_consulter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 330, 93, 28));
        tabWidget->addTab(tab_consulter, QString());
        tab_chercher = new QWidget();
        tab_chercher->setObjectName(QStringLiteral("tab_chercher"));
        pushButton_3 = new QPushButton(tab_chercher);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 330, 93, 28));
        tablePersonnel_2 = new QTableView(tab_chercher);
        tablePersonnel_2->setObjectName(QStringLiteral("tablePersonnel_2"));
        tablePersonnel_2->setGeometry(QRect(70, 20, 461, 241));
        label_22 = new QLabel(tab_chercher);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 280, 201, 16));
        lineEdit = new QLineEdit(tab_chercher);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 300, 113, 22));
        tabWidget->addTab(tab_chercher, QString());

        retranslateUi(Dialog_personnel);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog_personnel);
    } // setupUi

    void retranslateUi(QDialog *Dialog_personnel)
    {
        Dialog_personnel->setWindowTitle(QApplication::translate("Dialog_personnel", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_personnel", "Cin", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_personnel", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_personnel", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_personnel", "Role", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_personnel", "Pseudo", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_personnel", "Mot de passe", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_personnel", "Adresse", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog_personnel", "Code Postale", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog_personnel", "Code Salle", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog_personnel", "Num Tel", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("Dialog_personnel", "Valider", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_ajouter), QApplication::translate("Dialog_personnel", "Ajouter", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog_personnel", "Supprimer", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog_personnel", "Tapez le CIN qui veut le supprimer ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_supprimer), QApplication::translate("Dialog_personnel", "Supprimer", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog_personnel", "Tappez le Cin qui veut le Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("Dialog_personnel", "Nom", Q_NULLPTR));
        label_14->setText(QApplication::translate("Dialog_personnel", "Prenom", Q_NULLPTR));
        label_15->setText(QApplication::translate("Dialog_personnel", "Role", Q_NULLPTR));
        label_16->setText(QApplication::translate("Dialog_personnel", "Pseudo", Q_NULLPTR));
        label_17->setText(QApplication::translate("Dialog_personnel", "Mot de passe", Q_NULLPTR));
        label_18->setText(QApplication::translate("Dialog_personnel", "Adresse", Q_NULLPTR));
        label_19->setText(QApplication::translate("Dialog_personnel", "Code Postale", Q_NULLPTR));
        label_20->setText(QApplication::translate("Dialog_personnel", "Code Salle", Q_NULLPTR));
        label_21->setText(QApplication::translate("Dialog_personnel", "Num Tel", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("Dialog_personnel", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_modifier), QApplication::translate("Dialog_personnel", "Modifier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog_personnel", "Trier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_consulter), QApplication::translate("Dialog_personnel", "Consulter", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog_personnel", "Chercher", Q_NULLPTR));
        label_22->setText(QApplication::translate("Dialog_personnel", "Donnez le CIN de personnel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_chercher), QApplication::translate("Dialog_personnel", "Chercher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_personnel: public Ui_Dialog_personnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PERSONNEL_H
