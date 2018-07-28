#include "Company_Manager/manager.h"

Manager::Manager()// Конструктор по умолчанию
{}

Manager::Manager(const int _base_salary, const QString& _name, const QDate& rdate)
{}

Manager::~Manager()
{}

QString Manager::GetName() const
{
    return this->name;
}

int Manager::GetSalary() const
{
    return this->salary;
}

QString Manager::GetDateString() const
{
    return this->recruit_date.toString("dd/MM/yyyy");
}

void Manager::SetName(const QString& _name)
{
    this->name = _name;
}

void Manager::SetSalary(const int salary)
{
    this->salary = salary;
}

void Manager::SetDirector(const Director* boss)
{
    directorEmplyee = boss;
}

void Manager::SetWorkDate(const QDate& rdate)
{
    this->recruit_date=rdate;
}

int Manager::AddSalaryAllTime(const QDate* const& dateStartWork)
{
//        int procentYear=5;
//        QDate dateToday = QDate::currentDate();
//        int tempYear=dateToday.year()-dateStartWork->year();
//        int allProcent=tempYear*procentYear;
//        if(allProcent>40)
//            allProcent=40;
//       ///////////////////////
//        int salaryAllTime;
//        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}
