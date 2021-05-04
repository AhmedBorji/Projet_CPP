#ifndef MESSENGER_H
#define MESSENGER_H

#include <QDialog>

namespace Ui {
class Messenger;
}

class QTcpSocket;

namespace DuarteCorporation
{

class Messenger : public QDialog
{
    Q_OBJECT

public:
    explicit Messenger(QWidget *parent = nullptr);
    ~Messenger();

private slots:
    void on_send_clicked();

    void on_bind_clicked();

private:
    Ui::Messenger *ui;
    QTcpSocket *mSocket;
};
}
#endif // MESSENGER_H
