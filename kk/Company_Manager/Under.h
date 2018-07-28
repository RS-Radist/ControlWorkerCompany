#ifndef WORKING_H
#define WORKING_H

#include "Company_Manager/Director.h"
#include <QDate>

class Under
{

protected:
  int base_salary;
  QString name;
  Director* boss;
  QDate recruit_date;
public:
  Under()
  {}
  Under(int _base_salary, const QString& _name, const QDate& rdate)
  : base_salary(_base_salary),name(_name), recruit_date(rdate)
  {}
  virtual ~Under(){}
  virtual QString GetName() const =0;
  virtual int GetSalary() const =0;
  virtual void SetName(const QString& _name)=0;
  virtual void SetSalary(const int _base_salary)=0;
  virtual void SetDirector(const Director* boss)=0;
  virtual void SetWorkDate(const QDate& rdate)=0;

};
#endif // WORKING_H
