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
    if(ui->lineEdit_Login->text()=="Admin"&& ui->lineEdit_pas->text()=="Pas")
        {
            forma2_admin=new FormAdmin;
            forma2_admin->setModal(true);
            forma2_admin->show();
        }
        else
        {
            QMessageBox::warning(this,"Ошибка","Попробуйте снова");
        }
}
