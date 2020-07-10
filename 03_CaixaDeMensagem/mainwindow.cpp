#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QStandardItem>

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


void MainWindow::on_bt_cxMsgAbout_clicked()
{
    QMessageBox::about(this, "Sobre", "Caixa de Mensagem QMessageBox::about!!!");
}

void MainWindow::on_bt_cxMsgAboutQt_clicked()
{
    QMessageBox::aboutQt(this, "Sobre Qt");
}

void MainWindow::on_bt_cxMsgCritical_clicked()
{
    QMessageBox::critical(this, "Crítico", "Caixa de Mensagem QMessageBox::critical!!!");
}

void MainWindow::on_bt_cxMsgInformation_clicked()
{
    QMessageBox::information(this, "Informação", "Caixa de Mensagem QMessageBox::information!!!");
}

void MainWindow::on_bt_cxMsgQUestion_clicked()
{
    QMessageBox::question(this, "Pergunta", "Caixa de Mensagem QMessageBox::question!!!");
}

void MainWindow::on_bt_cxMsgWarning_clicked()
{
    QMessageBox::warning(this, "Alerta", "Caixa de Mensagem QMessageBox::warning!!!");
}
