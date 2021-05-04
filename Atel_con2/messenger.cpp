#include "messenger.h"
#include "ui_messenger.h"
#include "DuMessengerConnectionDialog.h"
#include <QTcpSocket>
#include <QTextStream>

namespace DuarteCorporation
{

Messenger::Messenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Messenger)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this);

    connect(mSocket, &QTcpSocket::readyRead, [&]() {
       QTextStream T(mSocket);
       auto text = T.readAll();
       ui->textEdit->append(text);
    });
}

Messenger::~Messenger()
{
    delete ui;
}

void Messenger::on_send_clicked()
{
    QTextStream T(mSocket);
    T << ui->nickname->text() << " : " << ui->message->text();
    mSocket->flush();
    ui->message->clear();
}

void Messenger::on_bind_clicked()
{
   DuMessengerConnectionDialog D(this);
   if (D.exec()== QDialog::Rejected){
       return;
   }
   mSocket->connectToHost(D.hostname(), D.port());

}
}
