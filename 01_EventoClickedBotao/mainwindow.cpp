#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_bt_alterarTexto_clicked()
{
    if(ui->lb_texto->text().compare("Não alterado") == 0)
        ui->lb_texto->setText("Alterado");
    else
        ui->lb_texto->setText("Não alterado");

}
