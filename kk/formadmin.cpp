#include "formadmin.h"
#include "ui_formadmin.h"
#include <QDebug>
#include <QPrinter>
#include <QTextCodec>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QApplication>
#include <algorithm>
#include <QErrorMessage>
#include <QPrintDialog>
#include <QPainter>
#include <QVector>


FormAdmin::FormAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);
    size=0;
    ui->textBrowser_salary->setAlignment(Qt::AlignCenter);
    ui->textBrowser_positionManager->setAlignment(Qt::AlignCenter);
    ui->textBrowser_date->setAlignment(Qt::AlignCenter);


}

FormAdmin::FormAdmin(QVector<Employee> emp, QVector<Manager> man, QVector<Sales> sal,QWidget *parent):
    QDialog(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);
    size=0;
    ui->textBrowser_salary->setAlignment(Qt::AlignCenter);
    ui->textBrowser_positionManager->setAlignment(Qt::AlignCenter);
    ui->textBrowser_date->setAlignment(Qt::AlignCenter);

    vecBoxEmployee.swap(emp);
    vecBoxManager.swap(man);
    vecBoxSales.swap(sal);


    if(!vecBoxEmployee.isEmpty())
    for(int i=0;i<vecBoxEmployee.size();++i)
    {
        ui->comboBox->addItem(vecBoxEmployee[i].GetName());
        ui->textBrowser_salary->setText(QVariant(vecBoxEmployee[i].GetSalary()).toString());
        ui->textBrowser_Pas->setText(vecBoxEmployee[i].GetPas());
        ui->textBrowser_positionManager->setText(vecBoxEmployee[i].GetPosition());
        ui->textBrowser_date->setText(vecBoxEmployee[i].GetDateString());
    }
    if(!vecBoxManager.isEmpty())
    for(int i=0;i<vecBoxManager.size();++i)
    {
        ui->comboBox->addItem(vecBoxManager[i].GetName());
        ui->textBrowser_salary->setText(QVariant(vecBoxManager[i].GetSalary()).toString());
        ui->textBrowser_Pas->setText(vecBoxManager[i].GetPas());
        ui->textBrowser_positionManager->setText(vecBoxManager[i].GetPosition());
        ui->textBrowser_date->setText(vecBoxManager[i].GetDateString());
    }
    if(!vecBoxSales.isEmpty())
    for(int i=0;i<vecBoxSales.size();++i)
    {
        ui->comboBox->addItem(vecBoxSales[i].GetName());
        ui->textBrowser_salary->setText(QVariant(vecBoxSales[i].GetSalary()).toString());
        ui->textBrowser_Pas->setText(vecBoxSales[i].GetPas());
        ui->textBrowser_positionManager->setText(vecBoxSales[i].GetPosition());
        ui->textBrowser_date->setText(vecBoxSales[i].GetDateString());
    }

}



FormAdmin::~FormAdmin()// Удаление
{
    delete ui;
}

void FormAdmin::on_but_addWorker_clicked()// Открыте окна добавления сотрудника
{
    ObjectAddWorker=new Window;
    QObject::connect(ObjectAddWorker->but_Add,SIGNAL(clicked()),ObjectAddWorker,SLOT(SlotEditName()));
    QObject::connect(ObjectAddWorker,SIGNAL(SignalTransferInfo(QString,QString,double,QDate,QString)),this,SLOT(SaveSlotInfo(QString,QString,double,QDate,QString)));
    QObject::connect(ObjectAddWorker->but_Add,SIGNAL(clicked()),ObjectAddWorker,SLOT(close()));
    ObjectAddWorker->setModal(true);
    ObjectAddWorker->exec();

}

void FormAdmin::SaveSlotInfo(QString strName,QString strPositionManager,double inSalary,QDate date,QString pas) // Слот для приема данных с окна добавления сотрудников
{
    if (strPositionManager=="Manager")
    {
        //Добавляем менеджера

            Manager* MANAGER_BOX;
            MANAGER_BOX=new Manager;
            MANAGER_BOX->SetName(strName);
            MANAGER_BOX->SetSalary(inSalary);
            MANAGER_BOX->SetWorkDate(date);
            MANAGER_BOX->SetPas(pas);
            MANAGER_BOX->SetPosition(strPositionManager);
            vecBoxManager.push_back(*MANAGER_BOX);


            ui->textBrowser_salary->setText(QVariant(inSalary).toString());
            ui->comboBox->addItem(strName);
            ui->textBrowser_Pas->setText(pas);

            ui->textBrowser_positionManager->setText(strPositionManager);
            ui->textBrowser_date->setText(date.toString("dd/MM/yyyy"));
            ++size;


    }
    if (strPositionManager=="Sales")
    {
        //Добавляем Sales

        Sales* SALES_BOX;
        SALES_BOX=new Sales;
        SALES_BOX->SetName(strName);
        SALES_BOX->SetSalary(inSalary);
        SALES_BOX->SetWorkDate(date);
        SALES_BOX->SetPas(pas);
        SALES_BOX->SetPosition(strPositionManager);
        vecBoxSales.push_back(*SALES_BOX);




        ui->comboBox->addItem(strName);
        ui->textBrowser_Pas->setText(pas);

        ui->textBrowser_salary->setText(QVariant(inSalary).toString());
        ui->textBrowser_positionManager->setText(strPositionManager);
        ui->textBrowser_date->setText(date.toString("dd/MM/yyyy"));



    }
    if (strPositionManager=="Employee")
    {
        //Добавляем Employee
        Employee* EMPLOYEE_BOX;
        EMPLOYEE_BOX=new Employee;
        EMPLOYEE_BOX->SetName(strName);
        EMPLOYEE_BOX->SetSalary(inSalary);
        EMPLOYEE_BOX->SetWorkDate(date);
        EMPLOYEE_BOX->SetPas(pas);
        EMPLOYEE_BOX->SetPosition(strPositionManager);
        vecBoxEmployee.push_back(*EMPLOYEE_BOX);


        ui->comboBox->addItem(strName);
        ui->textBrowser_Pas->setText(pas);
        ui->textBrowser_salary->setText(QVariant(inSalary).toString());
        ui->textBrowser_positionManager->setText(strPositionManager);
        ui->textBrowser_date->setText(date.toString("dd/MM/yyyy"));

    }
}


void FormAdmin::on_comboBox_activated(const QString &arg1)// Привязка от COMBOBOX
{
    QString formDouble;
    if(!vecBoxManager.isEmpty())
       {
         for(int i=0;i<vecBoxManager.size();++i)
         {
               if(ui->comboBox->currentText()==vecBoxManager[i].GetName())
               {

                   formDouble=QString::number(vecBoxManager[i].GetSalary());

                   emit Signal_1(formDouble);
                   emit Signal_2(vecBoxManager[i].GetPosition());
                   emit Signal_3(vecBoxManager[i].GetDateString());
                   emit Signal_5(vecBoxManager[i].GetPas());
               }
         }
       }
    if(!vecBoxSales.isEmpty())
       {
         for(int i=0;i<vecBoxSales.size();++i)
         {
               if(ui->comboBox->currentText()==vecBoxSales[i].GetName())
               {

                   formDouble=QString::number(vecBoxSales[i].GetSalary());

                   emit Signal_1(formDouble);
                   emit Signal_2(vecBoxSales[i].GetPosition());
                   emit Signal_3(vecBoxSales[i].GetDateString());
                   emit Signal_5(vecBoxSales[i].GetPas());
               }
         }
       }
    if(!vecBoxEmployee.isEmpty())
       {
         for(int i=0;i<vecBoxEmployee.size();++i)
         {
               if(ui->comboBox->currentText()==vecBoxEmployee[i].GetName())
               {

                   formDouble=QString::number(vecBoxEmployee[i].GetSalary());

                   emit Signal_1(formDouble);
                   emit Signal_2(vecBoxEmployee[i].GetPosition());
                   emit Signal_3(vecBoxEmployee[i].GetDateString());
                   emit Signal_5(vecBoxEmployee[i].GetPas());
               }
         }
       }
    QObject::connect(this,SIGNAL(Signal_1(QString)),ui->textBrowser_salary,SLOT(setText(QString)));
    QObject::connect(this,SIGNAL(Signal_2(QString)),ui->textBrowser_positionManager,SLOT(setText(QString)));
    QObject::connect(this,SIGNAL(Signal_3(QString)),ui->textBrowser_date,SLOT(setText(QString)));
    QObject::connect(this,SIGNAL(Signal_5(QString)),ui->textBrowser_Pas,SLOT(setText(QString)));
}

void FormAdmin::on_pushButton_SaveBase_clicked()// Сохранение в файл
{


}


void FormAdmin::on_pushButton_close_clicked()// Передача данных векторов
{
    emit Signal_4(vecBoxEmployee,vecBoxManager,vecBoxSales);
    this->close();

}

void FormAdmin::on_pushButton_DelWorker_clicked() // Удаление сотрудника
{
    if(!vecBoxEmployee.isEmpty())
    {
        for(int i=0;i<vecBoxEmployee.size();++i)
        {
                if(ui->comboBox->currentText()==vecBoxEmployee[i].GetName())
                {
                    vecBoxEmployee.erase(vecBoxEmployee.begin() + i);
                    ui->comboBox->removeItem(ui->comboBox->currentIndex());
                }
        }
    }
    else if (!vecBoxManager.isEmpty())
    {
        for(int i=0;i<vecBoxManager.size();++i)
        {
                if(ui->comboBox->currentText()==vecBoxManager[i].GetName())
                {
                    vecBoxManager.erase(vecBoxManager.begin() + i);
                    ui->comboBox->removeItem(ui->comboBox->currentIndex());
                }
        }
    }
    else if (!vecBoxSales.isEmpty())
    {
        for(int i=0;i<vecBoxSales.size();++i)
        {
                if(ui->comboBox->currentText()==vecBoxSales[i].GetName())
                {
                    vecBoxSales.erase(vecBoxSales.begin() + i);
                    ui->comboBox->removeItem(ui->comboBox->currentIndex());
                }
        }
    }
    else
    {
         QMessageBox::warning(this,"Ошибка","Удалить нельзя");
    }

    ui->textBrowser_date->clear();
    ui->textBrowser_Pas->clear();
    ui->textBrowser_positionManager->clear();
    ui->textBrowser_salary->clear();

}
