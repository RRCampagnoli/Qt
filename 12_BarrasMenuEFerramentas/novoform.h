#ifndef NOVOFORM_H
#define NOVOFORM_H

#include <QDialog>

namespace Ui {
class NovoForm;
}

class NovoForm : public QDialog
{
    Q_OBJECT

public:
    explicit NovoForm(QWidget *parent = nullptr);
    ~NovoForm();

private:
    Ui::NovoForm *ui;
};

#endif // NOVOFORM_H
