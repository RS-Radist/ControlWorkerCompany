#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H
#include <Company.a/Director.h>

using namespace std;
class Boss:public Director
{  
public:
    Boss(const QString& _name);
    QString GetName();
    void SetName(QString _name);
};


#endif // ABSTRACTCLASS_H
