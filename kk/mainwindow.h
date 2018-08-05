#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include "formadmin.h"
#include "window.h"
#include <QString>
#include "dialogclien.h"
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
    DialogClien* clientForma;
    FormAdmin *forma2_admin;
    QVector<Manager> vecBoxM;
    QVector<Sales> vecBoxS;
    QVector<Employee> vecBoxE;

signals:
    void SignalBaseAddForma(QVector<Employee>,QVector<Manager>,QVector<Sales>);

public slots:


private slots:

void on_but_ok_clicked();
void SaveBaseCompany(QVector<Employee> box1,QVector<Manager> box2,QVector<Sales> box3);

};

#endif // MAINWINDOW_H
