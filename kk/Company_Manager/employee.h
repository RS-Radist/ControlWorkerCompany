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
    Employee(const int _base_salary, const QString& _name, const QDate& rdate);// Базовое добавление
    int AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты
    ~Employee(); // диструктор
    QString GetName() const;
    int GetSalary() const;
    void SetName(const QString& _name);
    void SetSalary(const int _base_salary);
    void SetDirector(const Director* boss);
    void SetWorkDate(const QDate& rdate);
};
#endif // EMPLOYEE_H

