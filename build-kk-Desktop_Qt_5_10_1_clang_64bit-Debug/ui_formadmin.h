/********************************************************************************
** Form generated from reading UI file 'formadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMADMIN_H
#define UI_FORMADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAdmin
{
public:
    QGroupBox *groupBox;
    QPushButton *but_addWorker;
    QPushButton *pushButton_close;
    QPushButton *pushButton_DelWorker;
    QPushButton *pushButton_SaveBase;
    QPushButton *pushButton_wievAllSalary;
    QPushButton *pushButton_LoadBase;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *FormAdmin)
    {
        if (FormAdmin->objectName().isEmpty())
            FormAdmin->setObjectName(QStringLiteral("FormAdmin"));
        FormAdmin->resize(837, 613);
        QFont font;
        font.setItalic(true);
        FormAdmin->setFont(font);
        groupBox = new QGroupBox(FormAdmin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 661, 301));
        QFont font1;
        font1.setFamily(QStringLiteral(".PingFang TC"));
        groupBox->setFont(font1);
        but_addWorker = new QPushButton(groupBox);
        but_addWorker->setObjectName(QStringLiteral("but_addWorker"));
        but_addWorker->setGeometry(QRect(0, 20, 208, 81));
        pushButton_close = new QPushButton(groupBox);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(0, 220, 411, 81));
        pushButton_DelWorker = new QPushButton(groupBox);
        pushButton_DelWorker->setObjectName(QStringLiteral("pushButton_DelWorker"));
        pushButton_DelWorker->setGeometry(QRect(200, 20, 211, 81));
        pushButton_SaveBase = new QPushButton(groupBox);
        pushButton_SaveBase->setObjectName(QStringLiteral("pushButton_SaveBase"));
        pushButton_SaveBase->setGeometry(QRect(0, 90, 208, 81));
        pushButton_wievAllSalary = new QPushButton(groupBox);
        pushButton_wievAllSalary->setObjectName(QStringLiteral("pushButton_wievAllSalary"));
        pushButton_wievAllSalary->setGeometry(QRect(0, 160, 411, 71));
        pushButton_LoadBase = new QPushButton(groupBox);
        pushButton_LoadBase->setObjectName(QStringLiteral("pushButton_LoadBase"));
        pushButton_LoadBase->setGeometry(QRect(200, 90, 211, 81));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(410, 250, 241, 26));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 30, 249, 200));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral(".Al Bayan PUA"));
        font2.setPointSize(25);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setFamily(QStringLiteral(".Al Bayan PUA"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QStringLiteral(".Al Bayan PUA"));
        font4.setPointSize(25);
        font4.setBold(false);
        font4.setWeight(50);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(FormAdmin);

        QMetaObject::connectSlotsByName(FormAdmin);
    } // setupUi

    void retranslateUi(QWidget *FormAdmin)
    {
        FormAdmin->setWindowTitle(QApplication::translate("FormAdmin", "Form", nullptr));
        groupBox->setTitle(QString());
        but_addWorker->setText(QApplication::translate("FormAdmin", "Add Worker", nullptr));
        pushButton_close->setText(QApplication::translate("FormAdmin", "Close", nullptr));
        pushButton_DelWorker->setText(QApplication::translate("FormAdmin", "Delete Worker", nullptr));
        pushButton_SaveBase->setText(QApplication::translate("FormAdmin", "Save Base", nullptr));
        pushButton_wievAllSalary->setText(QApplication::translate("FormAdmin", "View all Salary", nullptr));
        pushButton_LoadBase->setText(QApplication::translate("FormAdmin", "Load Base", nullptr));
        label_3->setText(QApplication::translate("FormAdmin", "DATE", nullptr));
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_2->setText(QApplication::translate("FormAdmin", "POSITION MANAGER", nullptr));
        label->setText(QApplication::translate("FormAdmin", "SALARY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAdmin: public Ui_FormAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADMIN_H
