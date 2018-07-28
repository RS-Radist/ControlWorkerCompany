#include "Company.a/Boss.h"

#include <Company.a/Director.h>
Boss::Boss(const QString& _name):Director(name)
{
}
QString Boss:: GetName()
{
    return name;
}
void Boss::SetName(QString _name)
{
    name=_name;
}

