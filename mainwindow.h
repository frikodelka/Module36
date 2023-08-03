#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* createClient();

private slots:

    void on_pushButton_clicked();
    void on_MessageLineEdit_returnPressed();
    void on_SendMessageButton_clicked();
    void on_PrivateMessageButton_clicked();
    void on_actionOpen_another_client_triggered();
    void on_actionClose_this_client_triggered();

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
