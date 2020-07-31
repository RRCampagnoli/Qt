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
    void on_tbc_telaPrincipal_tabCloseRequested(int index);

    void on_tbc_telaPrincipal_tabBarDoubleClicked(int index);

    void on_actionNova_aba_triggered();

    void on_actionNova_aba_cadastro_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
