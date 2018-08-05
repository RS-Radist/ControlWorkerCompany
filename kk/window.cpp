#include "window.h"

Window::Window(QWidget *parent) : QDialog(parent)
{
    this->setWindowTitle("Window");
    but_Add=new QPushButton("OK",this);
    nameEdit=new QLineEdit("Name");
    salaryEdit=new QLineEdit("Salary");
    pasEdit=new QLineEdit("Pas");
    salaryEdit->setValidator(new QDoubleValidator(0, 10000000, 2, this));
    label_start_date_of_work=new QLabel("START DATE OF WORK",this);
    label_start_date_of_work->setAlignment(Qt::AlignCenter);
    calendar=new QCalendarWidget(this);
    positionManagerBox=new QComboBox;
    layout=new QVBoxLayout(this);
    layout->addWidget(positionManagerBox);
    layout->addWidget(nameEdit);
    layout->addWidget(salaryEdit);
    layout->addWidget(pasEdit);
    layout->addWidget(but_Add);
    layout->addWidget(label_start_date_of_work);
    layout->addWidget(calendar);
    this->setLayout(layout);





    positionManagerBox->addItem("Manager");
    positionManagerBox->addItem("Sales");
    positionManagerBox->addItem("Employee");


}

void Window::SlotEditName()
{
    QString temp=nameEdit->text();
    QString temp1=salaryEdit->text();
    QString temp2=positionManagerBox->currentText();
    QString temp3=pasEdit->text();
    QDate date_temp=calendar->selectedDate();


    emit SignalTransferInfo(temp,temp2,temp1.toDouble(),date_temp,temp3);
    salaryEdit->clear();
    nameEdit->clear();
    positionManagerBox->clear();
    pasEdit->clear();

}



