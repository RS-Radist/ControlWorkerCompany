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
    //Under* newWorker;
    const Director* directorEmplyee;
public:
    Manager();// Конструктор по умолчанию
    Manager(const double _base_salary, const QString& _name, const QDate& rdate);// Базовое добавление
    double AddSalaryAllTime(const QDate* const& dateStartWork);//Расчет итоговой зарплаты
    ~Manager(); // диструктор




    QString GetName() const;
    double GetSalary() const;
    QString GetDateString() const;
    QString GetPas() const;
    QString GetPosition();



    void SetPosition(const QString& position);
    void SetName(const QString& _name);
    void SetSalary(const double _base_salary);
    void SetDirector(const Director* boss);
    void SetWorkDate(const QDate& rdate);
    void SetPas(const QString& pas);
};
#endif // MANAGER_H
