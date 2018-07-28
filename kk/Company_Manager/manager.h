#ifndef MANAGER_H
#define MANAGER_H

#include <QDate>
#include "Company_Manager/Under.h"
#include "Company_Manager/Director.h"
#include <QString>
using namespace std;

class Manager:public Under
{

private:
    QString name;
    int salary;
    //Under* newWorker;
    const Director* directorEmplyee;
public:
    Manager();// Конструктор по умолчанию
    Manager(const int _base_salary, const QString& _name, const QDate& rdate);// Базовое добавление
    int AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты
    ~Manager(); // диструктор




    QString GetName() const;
    int GetSalary() const;
    QString GetDateString() const;






    void SetName(const QString& _name);
    void SetSalary(const int _base_salary);
    void SetDirector(const Director* boss);
    void SetWorkDate(const QDate& rdate);

};
#endif // MANAGER_H
