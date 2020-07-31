#ifndef FORMABACADASTRO_H
#define FORMABACADASTRO_H

#include <QWidget>

namespace Ui {
class FormAbaCadastro;
}

class FormAbaCadastro : public QWidget
{
    Q_OBJECT

public:
    explicit FormAbaCadastro(QWidget *parent = nullptr);
    ~FormAbaCadastro();

private:
    Ui::FormAbaCadastro *ui;
};

#endif // FORMABACADASTRO_H
