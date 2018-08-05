#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_pas->setEchoMode(QLineEdit::Password);
    QObject::connect(ui->but_quit,SIGNAL(clicked()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_but_ok_clicked()
{
    for(int i=0;i<vecBoxE.size();++i)
    {

        if(ui->lineEdit_Login->text()==vecBoxE[i].GetName()&& ui->lineEdit_pas->text()==vecBoxE[i].GetPas())
            {

                clientForma=new DialogClien(vecBoxE[i].GetName(),vecBoxE[i].GetSalary(),vecBoxE[i].GetPosition(),vecBoxE[i].GetDateString(),this);
                clientForma->setModal(true);
                clientForma->windowTitleChanged("Client");
                clientForma->exec();

            }
    }

    for(int i=0;i<vecBoxS.size();++i)
    {
        if(ui->lineEdit_Login->text()==vecBoxS[i].GetName()&& ui->lineEdit_pas->text()==vecBoxS[i].GetPas())
            {
                clientForma=new DialogClien(vecBoxS[i].GetName(),vecBoxS[i].GetSalary(),vecBoxS[i].GetPosition(),vecBoxS[i].GetDateString(),this);
                clientForma->setModal(true);
                clientForma->windowTitleChanged("Client");
                clientForma->exec();

            }
    }

    for(int i=0;i<vecBoxM.size();++i)
    {

        if(ui->lineEdit_Login->text()==vecBoxM[i].GetName()&& ui->lineEdit_pas->text()==vecBoxM[i].GetPas())
            {
                clientForma=new DialogClien(vecBoxM[i].GetName(),vecBoxM[i].GetSalary(),vecBoxM[i].GetPosition(),vecBoxM[i].GetDateString(),this);
                clientForma->setModal(true);
                clientForma->windowTitleChanged("Client");
                clientForma->exec();

            }
    }





    if(ui->lineEdit_Login->text()=="1"&& ui->lineEdit_pas->text()=="1")
        {
            if(!vecBoxE.isEmpty()||!vecBoxM.isEmpty()||!vecBoxS.isEmpty())
            {
                qDebug()<<"OK";
                forma2_admin=new FormAdmin(vecBoxE,vecBoxM,vecBoxS,this);

            }
            else
            {
                forma2_admin=new FormAdmin(this);
            }

            forma2_admin->setModal(true);

            QObject::connect(forma2_admin,SIGNAL(Signal_4(QVector<Employee>,QVector<Manager>,QVector<Sales>)),
                             this,SLOT(SaveBaseCompany(QVector<Employee>,QVector<Manager>,QVector<Sales>)));
            forma2_admin->exec();

        }    
        else
        {
            QMessageBox::warning(this,"Ошибка","Попробуйте снова");
        }
}


void MainWindow::SaveBaseCompany(QVector<Employee> box1, QVector<Manager> box2, QVector<Sales> box3)
{
    vecBoxE.swap(box1);
    vecBoxM.swap(box2);
    vecBoxS.swap(box3);



}
