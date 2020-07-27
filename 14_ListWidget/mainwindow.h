#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_btn_adicionar_clicked();

    void on_btn_adicionarTodos_clicked();

    void on_btn_transferirSelecionado_clicked();


    void on_btn_transferirTodos_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
