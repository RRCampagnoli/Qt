#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(showNormal()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString css = "background-color:#f00;color:#000";
    ui->label->setStyleSheet(css);
}

void MainWindow::on_pushButton_4_clicked()
{
    this->setStyleSheet("background-color:#f00");
}

