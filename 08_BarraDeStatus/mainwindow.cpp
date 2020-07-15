#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Sua mensagem da barra de status aqui!!!");

    ui->statusbar->addPermanentWidget(ui->bt_statusBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_limpar_clicked()
{
    ui->tx_nome->clear();
    ui->tx_email->clear();
}

void MainWindow::on_tx_nome_textChanged()
{
    updateUI();
}

void MainWindow::on_tx_email_textChanged()
{
    updateUI();
}

void MainWindow::updateUI()
{
    QString nome = ui->tx_nome->text();
    QString email = ui->tx_email->text();
    ui->statusbar->showMessage("Nome: " + nome + " | Email: " + email);
}

void MainWindow::on_bt_statusBar_clicked()
{
    ui->statusbar->showMessage("Sua nova mensagem aqui!!!");
}

