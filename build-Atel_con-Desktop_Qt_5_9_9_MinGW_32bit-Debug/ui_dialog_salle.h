/********************************************************************************
** Form generated from reading UI file 'dialog_salle.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SALLE_H
#define UI_DIALOG_SALLE_H

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

class Ui_Dialog_salle
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_ajouter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Code;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Num_Tel_1;
    QLineEdit *lineEdit_Adresse;
    QLineEdit *lineEdit_Libelle;
    QPushButton *pushButton_ajouter;
    QWidget *tab_supprimer;
    QPushButton *pushButton_supprimer;
    QLineEdit *lineEdit_ide_supp;
    QLabel *label_6;
    QWidget *tab_modifier;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_Code_modifier2;
    QLineEdit *lineEdit_nomSalle_modifier;
    QLineEdit *lineEdit_numTel_modifier;
    QLineEdit *lineEdit_adresse_modifier;
    QLineEdit *lineEdit_Libelle_modifier;
    QPushButton *pushButton_modifier;
    QWidget *tab_consulter;
    QTableView *tablesalle;
    QPushButton *pushButton_Trier;
    QWidget *tab_chercher;
    QTableView *tablesalle_chercher;
    QLabel *label_12;
    QLineEdit *lineEdit_identifiant;
    QPushButton *pushButton_chercher_2;

    void setupUi(QDialog *Dialog_salle)
    {
        if (Dialog_salle->objectName().isEmpty())
            Dialog_salle->setObjectName(QStringLiteral("Dialog_salle"));
        Dialog_salle->resize(757, 468);
        tabWidget = new QTabWidget(Dialog_salle);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 711, 401));
        tab_ajouter = new QWidget();
        tab_ajouter->setObjectName(QStringLiteral("tab_ajouter"));
        label = new QLabel(tab_ajouter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 111, 16));
        label_2 = new QLabel(tab_ajouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 121, 16));
        label_3 = new QLabel(tab_ajouter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 121, 16));
        label_4 = new QLabel(tab_ajouter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 170, 121, 16));
        label_5 = new QLabel(tab_ajouter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 210, 151, 16));
        lineEdit_Code = new QLineEdit(tab_ajouter);
        lineEdit_Code->setObjectName(QStringLiteral("lineEdit_Code"));
        lineEdit_Code->setGeometry(QRect(220, 50, 113, 22));
        lineEdit_Nom = new QLineEdit(tab_ajouter);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(220, 90, 113, 22));
        lineEdit_Num_Tel_1 = new QLineEdit(tab_ajouter);
        lineEdit_Num_Tel_1->setObjectName(QStringLiteral("lineEdit_Num_Tel_1"));
        lineEdit_Num_Tel_1->setGeometry(QRect(220, 130, 113, 22));
        lineEdit_Adresse = new QLineEdit(tab_ajouter);
        lineEdit_Adresse->setObjectName(QStringLiteral("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(220, 170, 113, 22));
        lineEdit_Libelle = new QLineEdit(tab_ajouter);
        lineEdit_Libelle->setObjectName(QStringLiteral("lineEdit_Libelle"));
        lineEdit_Libelle->setGeometry(QRect(220, 210, 113, 22));
        pushButton_ajouter = new QPushButton(tab_ajouter);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(470, 270, 93, 28));
        tabWidget->addTab(tab_ajouter, QString());
        tab_supprimer = new QWidget();
        tab_supprimer->setObjectName(QStringLiteral("tab_supprimer"));
        pushButton_supprimer = new QPushButton(tab_supprimer);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(440, 230, 93, 28));
        lineEdit_ide_supp = new QLineEdit(tab_supprimer);
        lineEdit_ide_supp->setObjectName(QStringLiteral("lineEdit_ide_supp"));
        lineEdit_ide_supp->setGeometry(QRect(370, 130, 113, 22));
        label_6 = new QLabel(tab_supprimer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 120, 341, 41));
        tabWidget->addTab(tab_supprimer, QString());
        tab_modifier = new QWidget();
        tab_modifier->setObjectName(QStringLiteral("tab_modifier"));
        label_7 = new QLabel(tab_modifier);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(35, 50, 331, 20));
        label_8 = new QLabel(tab_modifier);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 100, 56, 16));
        label_9 = new QLabel(tab_modifier);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 130, 56, 16));
        label_10 = new QLabel(tab_modifier);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 160, 56, 16));
        label_11 = new QLabel(tab_modifier);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 190, 56, 16));
        lineEdit_Code_modifier2 = new QLineEdit(tab_modifier);
        lineEdit_Code_modifier2->setObjectName(QStringLiteral("lineEdit_Code_modifier2"));
        lineEdit_Code_modifier2->setGeometry(QRect(400, 50, 113, 22));
        lineEdit_nomSalle_modifier = new QLineEdit(tab_modifier);
        lineEdit_nomSalle_modifier->setObjectName(QStringLiteral("lineEdit_nomSalle_modifier"));
        lineEdit_nomSalle_modifier->setGeometry(QRect(180, 100, 113, 22));
        lineEdit_numTel_modifier = new QLineEdit(tab_modifier);
        lineEdit_numTel_modifier->setObjectName(QStringLiteral("lineEdit_numTel_modifier"));
        lineEdit_numTel_modifier->setGeometry(QRect(180, 130, 113, 22));
        lineEdit_adresse_modifier = new QLineEdit(tab_modifier);
        lineEdit_adresse_modifier->setObjectName(QStringLiteral("lineEdit_adresse_modifier"));
        lineEdit_adresse_modifier->setGeometry(QRect(180, 160, 113, 22));
        lineEdit_Libelle_modifier = new QLineEdit(tab_modifier);
        lineEdit_Libelle_modifier->setObjectName(QStringLiteral("lineEdit_Libelle_modifier"));
        lineEdit_Libelle_modifier->setGeometry(QRect(180, 190, 113, 22));
        pushButton_modifier = new QPushButton(tab_modifier);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(430, 250, 93, 28));
        tabWidget->addTab(tab_modifier, QString());
        tab_consulter = new QWidget();
        tab_consulter->setObjectName(QStringLiteral("tab_consulter"));
        tablesalle = new QTableView(tab_consulter);
        tablesalle->setObjectName(QStringLiteral("tablesalle"));
        tablesalle->setGeometry(QRect(40, 20, 471, 241));
        pushButton_Trier = new QPushButton(tab_consulter);
        pushButton_Trier->setObjectName(QStringLiteral("pushButton_Trier"));
        pushButton_Trier->setGeometry(QRect(530, 320, 93, 28));
        tabWidget->addTab(tab_consulter, QString());
        tab_chercher = new QWidget();
        tab_chercher->setObjectName(QStringLiteral("tab_chercher"));
        tablesalle_chercher = new QTableView(tab_chercher);
        tablesalle_chercher->setObjectName(QStringLiteral("tablesalle_chercher"));
        tablesalle_chercher->setGeometry(QRect(60, 20, 451, 241));
        label_12 = new QLabel(tab_chercher);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 280, 211, 20));
        lineEdit_identifiant = new QLineEdit(tab_chercher);
        lineEdit_identifiant->setObjectName(QStringLiteral("lineEdit_identifiant"));
        lineEdit_identifiant->setGeometry(QRect(320, 280, 113, 22));
        pushButton_chercher_2 = new QPushButton(tab_chercher);
        pushButton_chercher_2->setObjectName(QStringLiteral("pushButton_chercher_2"));
        pushButton_chercher_2->setGeometry(QRect(570, 320, 93, 28));
        tabWidget->addTab(tab_chercher, QString());

        retranslateUi(Dialog_salle);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dialog_salle);
    } // setupUi

    void retranslateUi(QDialog *Dialog_salle)
    {
        Dialog_salle->setWindowTitle(QApplication::translate("Dialog_salle", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_salle", "Code Salle", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_salle", "Nom Salle", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_salle", "Num Tel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_salle", "Adresse", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_salle", "Libelle Salle", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("Dialog_salle", "Valider", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_ajouter), QApplication::translate("Dialog_salle", "Ajouter", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("Dialog_salle", "Supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_salle", "Tapez le Code du salle que voussouhaite le supprimer ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_supprimer), QApplication::translate("Dialog_salle", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_salle", "Tapez le code de salle que vous souhaite le modifier", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog_salle", "Nom Salle", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog_salle", "Num TEl", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog_salle", "Adresse", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog_salle", "Libelle", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("Dialog_salle", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_modifier), QApplication::translate("Dialog_salle", "Modifier", Q_NULLPTR));
        pushButton_Trier->setText(QApplication::translate("Dialog_salle", "Trier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_consulter), QApplication::translate("Dialog_salle", "Consulter", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog_salle", "Vous devez tapez le code du salle", Q_NULLPTR));
        pushButton_chercher_2->setText(QApplication::translate("Dialog_salle", "Chercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_chercher), QApplication::translate("Dialog_salle", "Chercher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_salle: public Ui_Dialog_salle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SALLE_H
