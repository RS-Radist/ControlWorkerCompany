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
FormAdmin::FormAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);
    size=0;
    QObject::connect(ui->pushButton_close,SIGNAL(clicked()),this,SLOT(close()));
}

FormAdmin::~FormAdmin()
{
    delete ui;
}

void FormAdmin::on_but_addWorker_clicked()
{
    ObjectAddWorker=new Window;
    QObject::connect(ObjectAddWorker->but_Add,SIGNAL(clicked()),ObjectAddWorker,SLOT(SlotEditName()));
    QObject::connect(ObjectAddWorker,SIGNAL(SignalTransferInfo(QString,QString,int,QDate)),this,SLOT(SaveSlotInfo(QString,QString,int,QDate)));
    QObject::connect(ObjectAddWorker->but_Add,SIGNAL(clicked()),ObjectAddWorker,SLOT(close()));
    ObjectAddWorker->setModal(true);
    ObjectAddWorker->exec();

}

void FormAdmin::SaveSlotInfo(QString strName,QString strPositionManager,int inSalary,QDate date)
{
    if (strPositionManager=="Manager")
    {
        //Добавляем менеджера

            Manager* MANAGER_BOX;
            MANAGER_BOX=new Manager;
            MANAGER_BOX->SetName(strName);
            MANAGER_BOX->SetSalary(inSalary);
            MANAGER_BOX->SetWorkDate(date);
            vecBoxManager.push_back(*MANAGER_BOX);
            ui->label->setNum(inSalary);
            ui->comboBox->addItem(strName);
            vec_position_Manager.push_back(strPositionManager);
            ui->label_2->setText(strPositionManager);
            ui->label_3->setText(date.toString("dd/MM/yyyy"));
            ++size;
//            for (int i=0;i<vecBox.size();++i)
//            {
//                qDebug()<<vecBox[i].GetName();
//            }




//        vec_name.push_back(strName);
//        ui->comboBox->addItem(strName);

//        vec_salary.push_back(inSalary);
//        ui->label->setNum(inSalary);

//        vec_position_manager.push_back(strPositionManager);
//        ui->label_2->setText(strPositionManager);

    }
    if (strPositionManager=="Sales")
    {
        //Добавляем Sales

        Sales* SALES_BOX;
        SALES_BOX=new Sales;
        SALES_BOX->SetName(strName);
        SALES_BOX->SetSalary(inSalary);
        vecBoxSales.push_back(*SALES_BOX);
        ui->label->setNum(inSalary);
        ui->comboBox->addItem(strName);
        vec_position_Sales.push_back(strPositionManager);
        ui->label_2->setText(strPositionManager);

//        vec_name.push_back(strName);
//        ui->comboBox->addItem(strName);
//        vec_salary.push_back(inSalary);
//        ui->label->setNum(inSalary);
//        vec_position_manager.push_back(strPositionManager);
//        ui->label_2->setText(strPositionManager);

    }
    if (strPositionManager=="Employee")
    {
        //Добавляем Employee
        Employee* EMPLOYEE_BOX;
        EMPLOYEE_BOX=new Employee;
        EMPLOYEE_BOX->SetName(strName);
        EMPLOYEE_BOX->SetSalary(inSalary);
        vecBoxEmployee.push_back(*EMPLOYEE_BOX);
        ui->label->setNum(inSalary);
        ui->comboBox->addItem(strName);
        vec_position_Employee.push_back(strPositionManager);
        ui->label_2->setText(strPositionManager);

//        vec_name.push_back(strName);
//        ui->comboBox->addItem(strName);
//        vec_salary.push_back(inSalary);
//        ui->label->setNum(inSalary);
//        vec_position_manager.push_back(strPositionManager);
//        ui->label_2->setText(strPositionManager);

    }
}


void FormAdmin::on_comboBox_activated(const QString &arg1)
{
    if(!vecBoxManager.isEmpty())
       {
         for(int i=0;i<vecBoxManager.size();++i)
         {
               if(ui->comboBox->currentText()==vecBoxManager[i].GetName())
               {
                   emit Signal_1(vecBoxManager[i].GetSalary());
                   emit Signal_2(vec_position_Manager[i]);
                   emit Signal_3(vecBoxManager[i].GetDateString());
               }
         }
       }
    if(!vecBoxSales.isEmpty())
       {
         for(int i=0;i<vecBoxSales.size();++i)
         {
               if(ui->comboBox->currentText()==vecBoxSales[i].GetName())
               {
                   emit Signal_1(vecBoxSales[i].GetSalary());
                   emit Signal_2(vec_position_Sales[i]);
                   emit Signal_3(vecBoxSales[i].GetDateString());
               }
         }
       }
    if(!vecBoxEmployee.isEmpty())
       {
         for(int i=0;i<vecBoxEmployee.size();++i)
         {
               if(ui->comboBox->currentText()==vecBoxEmployee[i].GetName())
               {
                   emit Signal_1(vecBoxEmployee[i].GetSalary());
                   emit Signal_2(vec_position_Employee[i]);

               }
         }
       }
    QObject::connect(this,SIGNAL(Signal_1(int)),ui->label,SLOT(setNum(int)));
    QObject::connect(this,SIGNAL(Signal_2(QString)),ui->label_2,SLOT(setText(QString)));
    QObject::connect(this,SIGNAL(Signal_3(QString)),ui->label_3,SLOT(setText(QString)));
}

void FormAdmin::on_pushButton_SaveBase_clicked()
{
    QString nametext;
    QString filename = QFileDialog::getSaveFileName(
                       this,
                       tr("Save Document"),
                       QDir::currentPath(),
                       tr("Documents (*.doc)") );
           if( !filename.isNull() )
           {
                nametext=QDir::currentPath();
                QTextEdit* savetext=new QTextEdit("erererer");
                QPrinter printer(QPrinter::HighResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setOutputFileName(nametext);
                savetext->document()->print(&printer);
           }

//

    QMessageBox msgBox;
    msgBox.setText("Saving complete");
    msgBox.exec();

}
