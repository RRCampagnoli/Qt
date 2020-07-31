#include "dialogmudarnomeaba.h"
#include "ui_dialogmudarnomeaba.h"

DialogMudarNomeAba::DialogMudarNomeAba(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMudarNomeAba)
{
    ui->setupUi(this);
    ui->lbl_titulo->setText("Digite o novo nome!");
}

DialogMudarNomeAba::~DialogMudarNomeAba()
{
    delete ui;
}

QString DialogMudarNomeAba::obterNomeEscolhido()
{
    return ui->txt_novoNome->text();
}
