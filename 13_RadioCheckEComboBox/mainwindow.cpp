#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>
#include <QDebug>
#include <QMessageBox>

int quantItens = 3;
QVector<QString> itens(quantItens, "");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString enderecos[3] = {"Endereço 1", "Endereço 2", "Endereço 3"};
    QString icos[3] = {":/ico/ico/endereco1.png", ":/ico/ico/endereco2.png", ":/ico/ico/endereco3.png"};
    for(int i=0; i < 3; ++i)
    {
        ui->cbo_endCodigo->addItem(QIcon(icos[i]), enderecos[i]);
    }

    ui->cbo_endCodigo->insertItem(2, "End. Add Depois");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cbo_endereco_currentIndexChanged(const QString &arg1)
{
    //Apesar de poder usar a mudança de estado, o ideal é identificar
    //quem está marcado ao finalizar o processo, ou seja, clicar no botão

    QString endereco = arg1; //deixei apenas para o caso de desejar ver a mudança no debug
    qDebug() << endereco;
}

void MainWindow::on_chk_item1_stateChanged(int arg1)
{
    if(arg1)
        itens[0] = "Item 1";
    else
        itens[0] = "";
}

void MainWindow::on_chk_item2_stateChanged(int arg1)
{
    if(arg1)
        itens[1] = "Item 2";
    else
        itens[1] = "";
}

void MainWindow::on_chk_item3_stateChanged(int arg1)
{
    if(arg1)
        itens[2] = "Item 3";
    else
        itens[2] = "";
}

void MainWindow::on_rad_debito_clicked()
{
    //Apesar de poder usar o click, o ideal é identificar quem está marcado
    //ao finalizar o processo, ou seja, clicar no botão
    qDebug() << "forma de pagamento = débito!";
}

void MainWindow::on_btn_Confirmar_clicked()
{
    bool nenhumMarcado = true;
    for (int i=0; i < quantItens; ++i)
    {
        if(itens[i] != "")
        {
            nenhumMarcado = false;
            continue;
        }
    }

    if(nenhumMarcado)
    {
        QMessageBox::warning(this, "Nenhum item selecionado!", "Selecione um item!");
        return;
    }

    QString endereco = "";
    endereco = ui->cbo_endereco->currentText();

    //pegando valor do comboBox por indice.
    int index = ui->cbo_endereco->currentIndex();
    endereco = ui->cbo_endereco->itemText(index);

    QString formaPagamento = "";
    if(ui->rad_credito->isChecked())
        formaPagamento = ui->rad_credito->text();
    else if(ui->rad_debito->isChecked())
        formaPagamento = ui->rad_debito->text();
    else
        formaPagamento = ui->rad_boleto->text();

    QString texto = endereco + "\n";

    int quant = 0;
    for (int i=0; i < quantItens; ++i)
    {
        if(itens[i] != "")
        {
            if(i != 0 && quant > 0)
                texto += ", ";

            texto += itens[i];

            ++quant;
        }
    }

    texto += "\n";

    texto += formaPagamento;

    QMessageBox::information(this, "Escolhas", texto);

}
