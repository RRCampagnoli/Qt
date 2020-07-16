#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap avenger(":/imgs/imagens/unnamed.png");
    ui->lb_avenger->setPixmap(avenger);
    ui->lb_avenger->adjustSize();
}

MainWindow::~MainWindow()
{
    delete ui;
}

