#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void updateUI();

private slots:
    void on_bt_limpar_clicked();
    void on_bt_statusBar_clicked();

    void on_tx_nome_textChanged();

    void on_tx_email_textChanged();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
