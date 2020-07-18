#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tx_usuario->setText("Samuel");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bt_login_clicked()
{
    QString usr = ui->tx_usuario->text();
    QString pwd = ui->tx_senha->text();
    qDebug() << "Usuário: " + usr + " "<< "Senha: " + pwd;

    if(usr.compare("adm") ==0 && pwd.compare("adm") == 0)
        QMessageBox::information(this, "Login", "Sucesso!");
    else
        QMessageBox::critical(this, "Login", "Login e/ou senha errado(s)!");

}

void MainWindow::on_bt_cancel_clicked()
{
    ui->tx_usuario->clear();
    ui->tx_senha->clear();
}
