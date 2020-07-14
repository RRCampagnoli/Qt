#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "formulario.h" //será visto em todo o programa

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bt_abrirFormulario_clicked();

private:
    Ui::MainWindow *ui;
    Formulario *form;//Assim essa instancia será conhecida em todo projeto
};
#endif // MAINWINDOW_H
