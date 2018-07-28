#ifndef SALES_H
#define SALES_H
#include "Company_Manager/Under.h"
#include <QDate>
#include "Company_Manager/Director.h"

using namespace std;

class Sales:public Under
{

private:
    const Under* newWorker;
    const Director* directorEmplyee;
public:
    Sales();// Конструктор по умолчанию
    Sales(const int _base_salary, const QString& _name, const QDate& rdate);// Базовое добавление
    int AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты

    ~Sales(); // диструктор







    void SetName(const QString& _name);
    void SetSalary(const int _base_salary);
    void SetDirector(const Director* boss);
    void SetNewWorker(const Under* uWorker);
    void SetWorkDate(const QDate& rdate);







    QString GetDateString() const;
    QString GetName() const;
    int GetSalary() const;
    int GetDirectorSalary()const;
    QDate GetTime()const;
};

#endif // SALES_H

