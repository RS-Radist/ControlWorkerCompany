#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDate>
#include "Company_Manager/Director.h"
#include "Company_Manager/Under.h"


using namespace std;
class Employee:public Under
{
private:
    const Director* directorEmplyee;
public:
    Employee();// Конструктор по умолчанию
    Employee(const double _base_salary, const QString& _name, const QDate& rdate);// Базовое добавление
    double AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты
    ~Employee(); // диструктор



    //Get
    QString GetName() const;
    double GetSalary() const;
    QString GetDateString() const;
    QString GetPas() const;
    QString GetPosition();


    //Set
    void SetPosition(const QString& position);
    void SetName(const QString& _name);
    void SetSalary(const double _base_salary);
    void SetDirector(const Director* boss);
    void SetWorkDate(const QDate& rdate);
    void SetPas(const QString& pas);
};
#endif // EMPLOYEE_H

