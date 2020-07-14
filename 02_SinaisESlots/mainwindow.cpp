#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->bt_showNormal, SIGNAL(clicked()), this, SLOT(showNormal()));
    connect(ui->bt_changeTextLabel, SIGNAL(clicked()), this, SLOT(mudarTextoLabel()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_styleSheetMainWindow_clicked()
{
    this->setStyleSheet("background-color:#f00");
}

void MainWindow::on_bt_styleSheetSlotButton_clicked()
{
    QString css = "background-color:#f00;color:#000";
    ui->label->setStyleSheet(css);
}

void MainWindow::mudarTextoLabel()
{
    if(ui->label_2->text().compare("Texto inicial") == 0)
        ui->label_2->setText("Texto alterado");
    else
        ui->label_2->setText("Texto inicial");
}
