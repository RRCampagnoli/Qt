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


void MainWindow::on_bt_cfbCursos_clicked()
{
    if(ui->lb_caminhoWebCFBCursos->text().compare("mudou") == 0)
        ui->lb_caminhoWebCFBCursos->setText("mudou de novo");
    else
        ui->lb_caminhoWebCFBCursos->setText("mudou");

}
