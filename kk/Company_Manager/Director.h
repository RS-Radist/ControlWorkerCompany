#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <QDate>

using namespace std;
class Director
{
protected:
    QString name;
public:
    Director(){}
    Director(const QString n) : name(n)
    {}
    virtual QString GetName()const=0;
    virtual void SetName(QString _name)=0;
};
#endif // DIRECTOR_H
