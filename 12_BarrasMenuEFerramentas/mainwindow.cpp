#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "novoform.h"
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


void MainWindow::on_actionNovo_triggered()
{
    hide();//this->hide();
    NovoForm novoForm;
    novoForm.exec();
    show();//this->show();
}

void MainWindow::on_actionAbrir_triggered()
{
    QMessageBox::information(this, "Abrir", "Clicou em abrir!");
}

void MainWindow::on_actionSair_triggered()
{
    close();
}
