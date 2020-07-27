#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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


void MainWindow::on_btn_adicionar_clicked()
{
    //Primeira forma - cria o objeto de classe para adicionar ao list widget
    QListWidgetItem *item1 = new QListWidgetItem(ui->cbo_itens->currentText());
    ui->lsw_listaItem->addItem(item1);


    //Segunda forma - cria o objeto ao adicionar. O objeto fica inserido ao list widget
//    ui->lsw_listaItem->addItem(ui->cbo_itens->currentText());

    ui->cbo_itens->setFocus();
}

void MainWindow::on_btn_adicionarTodos_clicked()
{
    ui->lsw_listaItem->clear();

    int quantItens = ui->cbo_itens->count();

    for (int i = 0; i < quantItens; ++i)
    {
        ui->lsw_listaItem->addItem(ui->cbo_itens->itemText(i));
    }
}

void MainWindow::on_btn_transferirSelecionado_clicked()
{
    int currentRow = ui->lsw_listaItem->currentRow();
    QListWidgetItem *currentItem = ui->lsw_listaItem->takeItem(currentRow);
    ui->lsw_listaFinal->insertItem(currentRow, currentItem);//adicionar abaixo
    //ui->lsw_listaFinal->insertItem(currentRow - 1, currentItem);//adicionar acima
}

void MainWindow::on_btn_transferirTodos_clicked()
{
    int quantItens = ui->lsw_listaItem->count();
    int count = 0;
    while (count < quantItens)
    {
        QListWidgetItem *currentItem = ui->lsw_listaItem->takeItem(0);
        ui->lsw_listaFinal->insertItem(count, currentItem);

        ++count;
    }
}
