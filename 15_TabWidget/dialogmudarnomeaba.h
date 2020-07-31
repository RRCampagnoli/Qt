#ifndef DIALOGMUDARNOMEABA_H
#define DIALOGMUDARNOMEABA_H

#include <QDialog>

namespace Ui {
class DialogMudarNomeAba;
}

class DialogMudarNomeAba : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMudarNomeAba(QWidget *parent = nullptr);
    ~DialogMudarNomeAba();

private:
    Ui::DialogMudarNomeAba *ui;
};

#endif // DIALOGMUDARNOMEABA_H
