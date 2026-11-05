#pragma once

#include <QMainWindow>
#include <random>
#include <iostream>
QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
//set functions
private slots:
    void on_btn_clicked();
//add generate f

    QString generate()
    {
        //set returning var
        QString returning ;
        //add to returning rand
        for (size_t i = 0; i < rand()%9; i++) returning +=char('a' + (rand()%26));
        //returning
        return returning;
    }
};
