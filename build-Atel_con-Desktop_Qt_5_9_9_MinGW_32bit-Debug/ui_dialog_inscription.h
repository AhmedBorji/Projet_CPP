/********************************************************************************
** Form generated from reading UI file 'dialog_inscription.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_INSCRIPTION_H
#define UI_DIALOG_INSCRIPTION_H

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

class Ui_Dialog_inscription
{
public:
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
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

    void setupUi(QDialog *Dialog_inscription)
    {
        if (Dialog_inscription->objectName().isEmpty())
            Dialog_inscription->setObjectName(QStringLiteral("Dialog_inscription"));
        Dialog_inscription->resize(589, 460);
        frame = new QFrame(Dialog_inscription);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 591, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 15, 171, 31));
        frame_2 = new QFrame(Dialog_inscription);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 70, 591, 381));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 20, 56, 16));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 50, 56, 16));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 80, 56, 16));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 110, 56, 16));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 140, 56, 16));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 170, 56, 16));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 200, 56, 16));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 230, 56, 16));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 260, 56, 16));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 290, 56, 16));
        lineEdit_Cin = new QLineEdit(frame_2);
        lineEdit_Cin->setObjectName(QStringLiteral("lineEdit_Cin"));
        lineEdit_Cin->setGeometry(QRect(180, 20, 113, 22));
        lineEdit_Nom = new QLineEdit(frame_2);
        lineEdit_Nom->setObjectName(QStringLiteral("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(180, 50, 113, 22));
        lineEdit_Prenom = new QLineEdit(frame_2);
        lineEdit_Prenom->setObjectName(QStringLiteral("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(180, 80, 113, 22));
        lineEdit_Role = new QLineEdit(frame_2);
        lineEdit_Role->setObjectName(QStringLiteral("lineEdit_Role"));
        lineEdit_Role->setGeometry(QRect(180, 110, 113, 22));
        lineEdit_Pseudo = new QLineEdit(frame_2);
        lineEdit_Pseudo->setObjectName(QStringLiteral("lineEdit_Pseudo"));
        lineEdit_Pseudo->setGeometry(QRect(180, 140, 113, 22));
        lineEdit_Mdp = new QLineEdit(frame_2);
        lineEdit_Mdp->setObjectName(QStringLiteral("lineEdit_Mdp"));
        lineEdit_Mdp->setGeometry(QRect(180, 170, 113, 22));
        lineEdit_Adresse = new QLineEdit(frame_2);
        lineEdit_Adresse->setObjectName(QStringLiteral("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(180, 200, 113, 22));
        lineEdit_Cp = new QLineEdit(frame_2);
        lineEdit_Cp->setObjectName(QStringLiteral("lineEdit_Cp"));
        lineEdit_Cp->setGeometry(QRect(180, 230, 113, 22));
        lineEdit_Cdp = new QLineEdit(frame_2);
        lineEdit_Cdp->setObjectName(QStringLiteral("lineEdit_Cdp"));
        lineEdit_Cdp->setGeometry(QRect(180, 260, 113, 22));
        lineEdit_Num_Tel = new QLineEdit(frame_2);
        lineEdit_Num_Tel->setObjectName(QStringLiteral("lineEdit_Num_Tel"));
        lineEdit_Num_Tel->setGeometry(QRect(180, 290, 113, 22));
        pushButton_ajouter = new QPushButton(frame_2);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(450, 320, 93, 28));

        retranslateUi(Dialog_inscription);

        QMetaObject::connectSlotsByName(Dialog_inscription);
    } // setupUi

    void retranslateUi(QDialog *Dialog_inscription)
    {
        Dialog_inscription->setWindowTitle(QApplication::translate("Dialog_inscription", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_inscription", "Inscription ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_inscription", "Cin", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_inscription", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_inscription", "Prenom", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_inscription", "Role", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_inscription", "Pseudo", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_inscription", "Mot de passe", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog_inscription", "Adresse", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog_inscription", "Code Postale", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog_inscription", "Code salle", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog_inscription", "Num Tel", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("Dialog_inscription", "Valider", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_inscription: public Ui_Dialog_inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_INSCRIPTION_H
