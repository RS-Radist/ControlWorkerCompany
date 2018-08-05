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
    Sales(const double _base_salary, const QString& _name, const QDate& rdate);// Базовое добавление
    double AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты
    ~Sales(); // диструктор




    QString GetDateString() const;
    QString GetName() const;
    double GetSalary() const;
    double GetDirectorSalary()const;
    QDate GetTime()const;
    QString GetPas() const;
    QString GetPosition();


    void SetPosition(const QString& position);
    void SetName(const QString& _name);
    void SetSalary(const double _base_salary);
    void SetDirector(const Director* boss);
    void SetNewWorker(const Under* uWorker);
    void SetWorkDate(const QDate& rdate);
    void SetPas(const QString& pas);






};

#endif // SALES_H

