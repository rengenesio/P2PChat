#ifndef JANELACONECTAR_H
#define JANELACONECTAR_H

#include <QDebug>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QString>
#include <QWidget>

#include "definicoes.h"

class JanelaConectar : public QDialog
{
    Q_OBJECT

public:
    JanelaConectar(QWidget *parent = 0);

    QString nick;
    QString ip;

private:
    QLineEdit *le_nick;
    QLineEdit *le_ip;
    QPushButton *bt_ok;
    QPushButton *bt_cancelar;

    void conectaSlots();
    void criaBotoes();
    void criaLineEdits();
    void escreve();

public slots:
    void ok();
signals:
    void fim(QString ip, QString nick);
};


#endif // JANELACONECTAR_H
