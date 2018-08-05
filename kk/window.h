#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QString>
#include <QComboBox>
#include <QDialog>
#include <QCalendarWidget>
#include <QLabel>
#include "Company_Manager/manager.h"
#include "Company_Manager/sales.h"
#include "Company_Manager/employee.h"
class Window : public QDialog
{
    Q_OBJECT
public:
    QPushButton* but_Add;
    QLineEdit* nameEdit;
    QLineEdit* salaryEdit;
    QLineEdit* pasEdit;
    QVBoxLayout* layout;
    QComboBox* positionManagerBox;
    QLabel* label_start_date_of_work;
    QCalendarWidget* calendar;

public:
    explicit Window(QWidget *parent = nullptr);

signals:
    QString SignalTransferInfo(QString str,QString str1,double number,QDate date,QString pas);
public slots:
    void SlotEditName();

};

#endif // WINDOW_H
