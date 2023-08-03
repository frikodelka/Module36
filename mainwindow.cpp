#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startscreen.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow *MainWindow::createClient()
{
    StartScreen s();
    s.exec();
}

void MainWindow::on_pushButton_clicked()
{
    on_SendMessageButton_clicked();
}


void MainWindow::on_MessageLineEdit_returnPressed()
{

}


void MainWindow::on_SendMessageButton_clicked()
{

}


void MainWindow::on_PrivateMessageButton_clicked()
{

}


void MainWindow::on_actionOpen_another_client_triggered()
{
    createClient();
}


void MainWindow::on_actionClose_this_client_triggered()
{

}

