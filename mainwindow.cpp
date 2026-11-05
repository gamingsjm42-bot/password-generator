//includes
#include "mainwindow.h"
#include "ui_mainwindow.h"
//constractor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
//desctractor
MainWindow::~MainWindow()
{
    delete ui;
}
//generate
void MainWindow::on_btn_clicked()
{
    ui->text->setText(generate());
}
