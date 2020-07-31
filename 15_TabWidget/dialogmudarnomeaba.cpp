#include "dialogmudarnomeaba.h"
#include "ui_dialogmudarnomeaba.h"

DialogMudarNomeAba::DialogMudarNomeAba(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMudarNomeAba)
{
    ui->setupUi(this);
}

DialogMudarNomeAba::~DialogMudarNomeAba()
{
    delete ui;
}
