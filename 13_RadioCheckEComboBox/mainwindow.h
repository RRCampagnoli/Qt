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
    void on_btn_Confirmar_clicked();

    void on_cbo_endereco_currentIndexChanged(const QString &arg1);

    void on_chk_item1_stateChanged(int arg1);

    void on_chk_item2_stateChanged(int arg1);

    void on_chk_item3_stateChanged(int arg1);

    void on_rad_debito_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
