#ifndef DIALOGCLIEN_H
#define DIALOGCLIEN_H

#include <QDialog>
#include <QVector>
#include "Company_Manager/manager.h"
#include "Company_Manager/sales.h"
#include "Company_Manager/employee.h"
namespace Ui {
class DialogClien;
}

class DialogClien : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClien(QString str,double salary,QString position,QString date,QWidget *parent = 0);
    ~DialogClien();

private:
    Ui::DialogClien *ui;
};

#endif // DIALOGCLIEN_H
