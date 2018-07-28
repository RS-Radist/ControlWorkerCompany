#include "Company_Manager/employee.h"

#include <QDate>
#include <Qstring>

using namespace std;

Employee::Employee()
: Under()
{}

Employee::Employee(const int _base_salary, const QString& _name, const QDate& rdate)
: Under(_base_salary, _name, rdate)
{

}

Employee::~Employee()
{}


QString Employee::GetName() const
{
    return this->name;
}

int Employee::GetSalary() const
{
    return this->base_salary;
}

void Employee::SetName(const QString& _name)
{
    this->name = _name;
}

void Employee::SetSalary(const int _base_salary)
{
    this->base_salary = _base_salary;
}

void Employee::SetDirector(const Director* boss)
{
    directorEmplyee = boss;
}

void Employee::SetWorkDate(const QDate& rdate)
{
    recruit_date = rdate;
}

int Employee::AddSalaryAllTime(const QDate* const& dateStartWork)//Расчет итоговой зарплаты
{
        int procentYear=3;
        QDate dateToday = QDate::currentDate();
        int tempYear=dateToday.year()-dateStartWork->year();
        int allProcent=tempYear*procentYear;
        if(allProcent>30)
            allProcent=30;
        int salaryAllTime;
        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}

