#include "dialogclien.h"
#include "ui_dialogclien.h"

DialogClien::DialogClien(QString strName,double salary,QString position,QString date,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogClien)
{

    ui->setupUi(this);
    ui->textBrowser->setText(strName);
    ui->textBrowser_2->setText(QVariant(salary).toString());
    ui->textBrowser_4->setText(position);
    ui->textBrowser_3->setText(date);

    QObject::connect(ui->pushButton,SIGNAL(clicked()),SLOT(close()));
}

DialogClien::~DialogClien()
{
    delete ui;
}
