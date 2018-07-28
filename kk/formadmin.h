#ifndef FORMADMIN_H
#define FORMADMIN_H

#include <QWidget>
#include <QTextEdit>
#include <QPdfWriter>
#include "window.h"
#include "Company_Manager/manager.h"
#include "Company_Manager/sales.h"
#include "Company_Manager/employee.h"
namespace Ui {
class FormAdmin;
}

class FormAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit FormAdmin(QWidget *parent = 0);
    ~FormAdmin();
signals:
    void Signal_1(int);
    void Signal_2(QString);
    void Signal_3(QString);
private slots:
    void on_but_addWorker_clicked();
    void SaveSlotInfo(QString strName,QString strPositionManager,int inSalary,QDate date);
    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_SaveBase_clicked();

private:
    QVector<Manager> vecBoxManager;
    QVector<Sales> vecBoxSales;
    QVector<Employee> vecBoxEmployee;


    QVector<QString> vec_position_Manager;
    QVector<QString> vec_position_Sales;
    QVector<QString> vec_position_Employee;
    Ui::FormAdmin *ui;
    int size;
    Window *ObjectAddWorker;
};

#endif // FORMADMIN_H
