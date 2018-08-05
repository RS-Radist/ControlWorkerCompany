#include "Company_Manager/employee.h"

#include <QDate>
#include <Qstring>

using namespace std;

Employee::Employee()
: Under()
{}

Employee::Employee(const double _base_salary, const QString& _name, const QDate& rdate)
: Under(_base_salary, _name, rdate)
{

}

Employee::~Employee()
{}


QString Employee::GetName() const
{
    return this->name;
}

QString Employee::GetDateString() const
{
    return this->recruit_date.toString("dd/MM/yyyy");
}

QString Employee::GetPas() const
{
    return this->pas;
}

QString Employee::GetPosition()
{
    return this->position;
}

void Employee::SetPosition(const QString &position)
{
    this->position=position;
}

double Employee::GetSalary() const
{
    return this->base_salary;
}

void Employee::SetName(const QString& _name)
{
    this->name = _name;
}

void Employee::SetSalary(const double _base_salary)
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

void Employee::SetPas(const QString &pas)
{
    this->pas=pas;
}

double Employee::AddSalaryAllTime(const QDate* const& dateStartWork)//Расчет итоговой зарплаты
{
        int procentYear=3;
        QDate dateToday = QDate::currentDate();
        int tempYear=dateToday.year()-dateStartWork->year();
        int allProcent=tempYear*procentYear;
        if(allProcent>30)
            allProcent=30;
        double salaryAllTime;
        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}

