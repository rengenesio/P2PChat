#include "janelaprincipal.h"

JanelaPrincipal::JanelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
{
    conectado = false;
    setWindowTitle(TITULO_PRINCIPAL);
    setGeometry(10, 10, W_JANELA, H_JANELA);
    setFixedSize(W_JANELA, H_JANELA);
    criaMenu();
    criaBotoes();
    criaAreaTexto();
    conectaSlots();
    j_conectar = new JanelaConectar(this);
    desenha(0);
    desenha(1);
    qDebug() << "aaa";
}

JanelaPrincipal::~JanelaPrincipal() {
}

void JanelaPrincipal::conectaSlots() {
    connect(act_conectar, SIGNAL(triggered()), this, SLOT(conectar()));
    connect(act_salvar, SIGNAL(triggered()), this, SLOT(salvar()));
    connect(act_fechar, SIGNAL(triggered()), this, SLOT(close()));

    connect(bt_enviar, SIGNAL(clicked()), this, SLOT(enviar()));
    connect(bt_limpar, SIGNAL(clicked()), this, SLOT(limpar()));
}

void JanelaPrincipal::criaActions() {
    act_conectar = new QAction("&Conectar", this);
    act_salvar = new QAction("&Salvar", this);
    act_fechar = new QAction("&Fechar", this);
    menu_arquivo->addAction(act_conectar);
    menu_arquivo->addAction(act_salvar);
    menu_arquivo->addSeparator();
    menu_arquivo->addAction(act_fechar);
}

void JanelaPrincipal::criaAreaTexto() {
    chat = new QTextBrowser(this);
    msg = new QTextEdit(this);
}

void JanelaPrincipal::criaBotoes() {
    bt_enviar = new QPushButton("Enviar", this);
    bt_limpar = new QPushButton("Limpar", this);
    bt_enviar->setEnabled(false);
}

void JanelaPrincipal::criaMenu() {
    menu_arquivo = menuBar()->addMenu("&Arquivo");
    criaActions();
    menu_arquivo->adjustSize();
}

void JanelaPrincipal::desenha(int i) {
    switch(i) {
    case 0:
        chat->setGeometry(5, 32, width() - 10, height() - 170);
        msg->setGeometry(5, 470, width() - 100, height() - 480);
        break;

    case 1:
        bt_enviar->setGeometry(width() - 85, 470, 80, height() - 520);
        bt_limpar->setGeometry(width() - 85, 550, 80, height() - 560);
        break;
    }
}

void JanelaPrincipal::criaSocket() {
    socket = new QTcpSocket(this);
    socket->connectToHost(def.ip, 7400);
}

/* SLOTS */

void JanelaPrincipal::conectar() {
    if(!conectado) {
        connect(j_conectar, SIGNAL(fim(QString,QString)), this, SLOT(setDefinicoes(QString,QString)));
        j_conectar->show();
    } else {
        act_conectar->setText("&Conectar");
        conectado = false;
        bt_enviar->setEnabled(false);
    }
}

void JanelaPrincipal::setDefinicoes(QString ip,QString nick){

    def.nick = nick;
    def.ip = ip;

    disconnect(j_conectar, SIGNAL(fim(QString,QString)), this, SLOT(setDefinicoes(QString,QString)));

    act_conectar->setText("&Desconectar");
    conectado = true;
    bt_enviar->setEnabled(true);

    criaSocket();
}

void JanelaPrincipal::enviar() {
    if(msg->toPlainText().size() > 0) {
        QString mensagem;
        mensagem.append("M");
        mensagem.append(def.nick);
        mensagem.append(msg->toPlainText());
        qDebug() << mensagem;
        socket->write(mensagem.toAscii());
        msg->setText("");
    }
    socket->write(def.nick.toAscii());

}

void JanelaPrincipal::limpar() {
    msg->setText("");
}

void JanelaPrincipal::salvar() {
    //qDebug() << "Salvar";
}

/* FIM SLOTS */
