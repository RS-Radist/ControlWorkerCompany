#include "mainwindow.h"
#include <QApplication>




int main(int argc, char *argv[])
{
    QList<QString> namelist;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
//Доработать структуру сохранения значений.
//Доделать остальные окна.
//Добавить фон
