#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bt_mostrar_clicked()
{
    QString nome = ui->tx_nome->text();
    QString telefone = ui->tx_telefone->text();
    QString email = ui->tx_email->text();

    QString texto = "Nome: " + nome + "\nTelefone: " + telefone + "\nEmail: " + email;

    QMessageBox::information(this, "Informações digitadas", texto);

    ui->tx_nome->setFocus();
}

void MainWindow::on_bt_limpar_clicked()
{
    ui->tx_nome->clear();
    ui->tx_telefone->clear();
    ui->tx_email->clear();

    ui->tx_nome->setFocus();
}
