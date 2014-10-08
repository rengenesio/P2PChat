#ifndef JANELAPRINCIPAL_H
#define JANELAPRINCIPAL_H

#include <QtGui/QMainWindow>
#include <QDialog>
#include <QMenuBar>
#include <QPushButton>
#include <QTextBrowser>
#include <QTextEdit>
#include <QTcpSocket>

#include "janelaconectar.h"
#include "definicoes.h"

#define W_JANELA       800
#define H_JANELA       600


#define MSG_SIZE        140


#define TITULO_PRINCIPAL    "Chat"


class JanelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    JanelaPrincipal(QWidget *parent = 0);
    ~JanelaPrincipal();

private:
    bool conectado;
    JanelaConectar *j_conectar;
    QMenu *menu_arquivo;
    QAction *act_conectar, *act_salvar, *act_fechar;
    QPushButton *bt_enviar, *bt_limpar;
    QTextBrowser *chat;
    QTextEdit *msg;
    QTcpSocket *socket;


    void conectaSlots();
    void criaActions();
    void criaAreaTexto();
    void criaBotoes();
    void criaMenu();
    void desenha(int i);
    void desenha();
    void criaSocket();

    Definicoes def;

private slots:
    void conectar();
    void enviar();
    void limpar();
    void salvar();
    void setDefinicoes(QString,QString);
};


#endif // JANELAPRINCIPAL_H
