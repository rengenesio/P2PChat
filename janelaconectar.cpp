#include "janelaconectar.h"

JanelaConectar::JanelaConectar(QWidget *parent) : QDialog(parent)
{
    criaBotoes();
    criaLineEdits();
    escreve();
    conectaSlots();
}

void JanelaConectar::criaBotoes() {
    bt_ok = new QPushButton("&Ok", this);
    bt_ok->setGeometry(20, 120, 0, 0); bt_ok->adjustSize();

    bt_cancelar = new QPushButton("&Cancela", this);
    bt_cancelar->setGeometry(130, 120, 0, 0); bt_cancelar->adjustSize();
}

void JanelaConectar::criaLineEdits() {
    le_nick = new QLineEdit(this);
    le_ip = new QLineEdit(this);

    le_nick->setGeometry(100, 20, 0, 0); le_nick->adjustSize();
    le_ip->setGeometry(100, 60, 0, 0); le_ip->adjustSize();
}

void JanelaConectar::escreve() {
    QLabel *lbl;

    lbl = new QLabel("Nickname:", this);
    lbl->setGeometry(10, 25, 0, 0); lbl->adjustSize();
    lbl->show();

    lbl = new QLabel("Servidor:", this);
    lbl->setGeometry(10, 65, 0, 0); lbl->adjustSize();
}

void JanelaConectar::conectaSlots() {
    connect(bt_ok, SIGNAL(clicked()), this, SLOT(ok()));
    connect(bt_cancelar, SIGNAL(clicked()), this, SLOT(close()));
}

void JanelaConectar::ok() {
    emit(fim(le_ip->text(), le_nick->text()));
    this->close();
}
