#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "formulario.h"//só será visto dentro do mainWindow

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


//void MainWindow::on_bt_abrirFormulario_clicked()
//{
//    this->hide();

//    Formulario form;
//    form.exec();

//    this->show();
//}

void MainWindow::on_bt_abrirFormulario_clicked()
{
    form = new Formulario(this);
    form->show();
}
