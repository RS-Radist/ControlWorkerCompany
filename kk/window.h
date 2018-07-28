#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QString>
#include <QComboBox>
#include <QDialog>
#include <QCalendarWidget>
#include <QLabel>
class Window : public QDialog
{
    Q_OBJECT
public:
    QPushButton* but_Add;
    QLineEdit* nameEdit;
    QLineEdit* salaryEdit;
    QVBoxLayout* layout;
    QComboBox* positionManagerBox;
    QLabel* label_start_date_of_work;
    QCalendarWidget* calendar;


public:
    explicit Window(QWidget *parent = nullptr);

signals:
    QString SignalTransferInfo(QString str,QString str1,int number,QDate date);
public slots:
    void SlotEditName();
//    void SlotEditSalary();
//    void SlotEditPositionManager();
};

#endif // WINDOW_H
