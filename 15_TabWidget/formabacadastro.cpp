#include "formabacadastro.h"
#include "ui_formabacadastro.h"

FormAbaCadastro::FormAbaCadastro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAbaCadastro)
{
    ui->setupUi(this);
}

FormAbaCadastro::~FormAbaCadastro()
{
    delete ui;
}
