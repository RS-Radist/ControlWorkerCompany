#include "Company_Manager/sales.h"


Sales::Sales()
: Under() // Конструктор по умолчанию
{

}

Sales::Sales(const double _base_salary, const QString& _name, const QDate& rdate)
: Under(_base_salary, _name, rdate)
{}

Sales::~Sales()
{}
QString Sales::GetName() const
{
    return this->name;
}
double Sales::GetSalary() const
{
    return this->base_salary;
}
QString Sales::GetPas() const
{
    return this->pas;
}
QString Sales::GetPosition()
{
    return this->position;
}
QString Sales::GetDateString() const
{
    return this->recruit_date.toString("dd/MM/yyyy");
}



void Sales::SetPosition(const QString &position)
{
    this->position=position;
}
void Sales::SetName(const QString& _name)
{
    this->name = _name;
}
void Sales::SetSalary(const double _base_salary)
{
    this->base_salary = _base_salary;
}
void Sales::SetDirector(const Director* boss)
{
    directorEmplyee = boss;
}
void Sales::SetWorkDate(const QDate& rdate)
{
    this->recruit_date = rdate;
}
void Sales::SetPas(const QString &pas)
{
    this->pas=pas;
}
double Sales::AddSalaryAllTime(const QDate* const& dateStartWork)
{
        int procentYear=5;
        QDate dateToday = QDate::currentDate();
        int tempYear=dateToday.year()-dateStartWork->year();
        int allProcent=tempYear*procentYear;
        if(allProcent>35)
            allProcent=35;
       ///////////////////////
        double salaryAllTime;
        return salaryAllTime=base_salary+(base_salary/100*allProcent);
}
