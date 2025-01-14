#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"./common/common.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void MainWindow::box_move(common m_step);

    void MainWindow::move_step();
    void MainWindow::human_move(common m_step);
    void MainWindow::init_box();
    void MainWindow::init_mainwindow();

    ~MainWindow();


private slots:


    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_19_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
