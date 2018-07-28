#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include "formadmin.h"
#include "window.h"
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    FormAdmin  *forma2_admin;
public slots:


private slots:

void on_but_ok_clicked();
};

#endif // MAINWINDOW_H
