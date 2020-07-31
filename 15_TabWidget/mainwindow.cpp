#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "dialogmudarnomeaba.h"
#include "formabacadastro.h"

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


void MainWindow::on_tbc_telaPrincipal_tabCloseRequested(int index)
{
    QString text = ui->tbc_telaPrincipal->tabText(index);

    QMessageBox::StandardButton resp;
    resp = QMessageBox::warning(this, "Fechar Aba " + text + "?",
                         "Deseja realmente fecha a aba " + text + "!",
                         QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);

    if(resp == QMessageBox::StandardButton::No)
        return;

    ui->tbc_telaPrincipal->removeTab(index);
}

void MainWindow::on_tbc_telaPrincipal_tabBarDoubleClicked(int index)
{
    DialogMudarNomeAba dialog;
    dialog.setModal(true);
    if(dialog.exec() == QDialog::Accepted)
    {
        QString novoNme = dialog.obterNomeEscolhido();
        ui->tbc_telaPrincipal->setTabText(index, novoNme);
    }




//    QDialog dlg;
//    QVBoxLayout la(&dlg);
//    QLineEdit ed;
//    la.addWidget(&ed);
//    QDialogButtonBox bb(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
//    la.addWidget(&bb);
//    dlg.setLayout(&la);
//    int resp = dlg.exec();
//    if(resp == QDialog::Accepted)
//    {
//        ui->tbc_graficos->setTabText(index, ed.text());
//    }
}

void MainWindow::on_actionNova_aba_triggered()
{
    DialogMudarNomeAba dialog;
    dialog.setModal(true);
    if(dialog.exec() == QDialog::Accepted)
    {
        QString novoNome = dialog.obterNomeEscolhido();
        ui->tbc_telaPrincipal->addTab(new QWidget(), novoNome);
    }

}

void MainWindow::on_actionNova_aba_cadastro_triggered()
{
    ui->tbc_telaPrincipal->addTab(new FormAbaCadastro(), "Cadastro");
}
