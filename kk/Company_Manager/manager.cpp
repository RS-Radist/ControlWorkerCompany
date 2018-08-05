#include "Company_Manager/manager.h"

Manager::Manager()// Конструктор по умолчанию
{}

Manager::Manager(const double _base_salary, const QString& _name, const QDate& rdate)
{}

Manager::~Manager()
{}

QString Manager::GetName() const
{
    return this->name;
}

double Manager::GetSalary() const
{
    return this->base_salary;
}

QString Manager::GetDateString() const
{
    return this->recruit_date.toString("dd/MM/yyyy");
}

QString Manager::GetPas() const
{
    return this->pas;
}

QString Manager::GetPosition()
{
    return this->position;
}

void Manager::SetPosition(const QString &position)
{
    this->position=position;
}

void Manager::SetName(const QString& _name)
{
    this->name = _name;
}

void Manager::SetSalary(const double salary)
{
    this->base_salary = salary;
}

void Manager::SetDirector(const Director* boss)
{
    directorEmplyee = boss;
}

void Manager::SetWorkDate(const QDate& rdate)
{
    this->recruit_date=rdate;
}

void Manager::SetPas(const QString &pas)
{
    this->pas=pas;
}

double Manager::AddSalaryAllTime(const QDate* const& dateStartWork)
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
