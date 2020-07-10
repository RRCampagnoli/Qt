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
    void on_bt_cxMsgAbout_clicked();

    void on_bt_cxMsgAboutQt_clicked();

    void on_bt_cxMsgCritical_clicked();

    void on_bt_cxMsgInformation_clicked();

    void on_bt_cxMsgQUestion_clicked();

    void on_bt_cxMsgWarning_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
