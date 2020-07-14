#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap img_endGame("/home/rodrigo/Imagens/20190424avengers-endgame-001a.jpg");
    ui->lb_endGame->setPixmap(img_endGame.scaled(405,393, Qt::KeepAspectRatio));
    //ui->lb_endGame->setPixmap(img_endGame.scaled(810,786, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap img_posterBrasileiroUltimato("/home/rodrigo/Imagens/poster-brasileiro-de-vingadores-ultimato-1556045801213_v2_1225x1800.jpg");
    ui->lb_endGame->setPixmap(img_posterBrasileiroUltimato.scaled(405,393, Qt::KeepAspectRatio));
}
