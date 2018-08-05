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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAdmin
{
public:
    QComboBox *comboBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser_date;
    QTextBrowser *textBrowser_salary;
    QTextBrowser *textBrowser_positionManager;
    QTextBrowser *textBrowser_Pas;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *but_addWorker;
    QPushButton *pushButton_DelWorker;
    QPushButton *pushButton_SaveBase;
    QPushButton *pushButton_LoadBase;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_wievAllSalary;
    QPushButton *pushButton_close;

    void setupUi(QWidget *FormAdmin)
    {
        if (FormAdmin->objectName().isEmpty())
            FormAdmin->setObjectName(QStringLiteral("FormAdmin"));
        FormAdmin->resize(621, 420);
        QFont font;
        font.setItalic(true);
        FormAdmin->setFont(font);
        comboBox = new QComboBox(FormAdmin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 50, 461, 26));
        horizontalLayoutWidget = new QWidget(FormAdmin);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 100, 461, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral(".Al Bayan PUA"));
        font1.setPointSize(13);
        font1.setItalic(true);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral(".Al Bayan PUA"));
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        label->setFont(font2);
        label->setInputMethodHints(Qt::ImhNone);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setFont(font2);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setFont(font2);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        horizontalLayoutWidget_2 = new QWidget(FormAdmin);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(90, 180, 461, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser_date = new QTextBrowser(horizontalLayoutWidget_2);
        textBrowser_date->setObjectName(QStringLiteral("textBrowser_date"));

        horizontalLayout_2->addWidget(textBrowser_date);

        textBrowser_salary = new QTextBrowser(horizontalLayoutWidget_2);
        textBrowser_salary->setObjectName(QStringLiteral("textBrowser_salary"));

        horizontalLayout_2->addWidget(textBrowser_salary);

        textBrowser_positionManager = new QTextBrowser(horizontalLayoutWidget_2);
        textBrowser_positionManager->setObjectName(QStringLiteral("textBrowser_positionManager"));

        horizontalLayout_2->addWidget(textBrowser_positionManager);

        textBrowser_Pas = new QTextBrowser(horizontalLayoutWidget_2);
        textBrowser_Pas->setObjectName(QStringLiteral("textBrowser_Pas"));

        horizontalLayout_2->addWidget(textBrowser_Pas);

        horizontalLayoutWidget_3 = new QWidget(FormAdmin);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(90, 219, 461, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        but_addWorker = new QPushButton(horizontalLayoutWidget_3);
        but_addWorker->setObjectName(QStringLiteral("but_addWorker"));

        horizontalLayout_3->addWidget(but_addWorker);

        pushButton_DelWorker = new QPushButton(horizontalLayoutWidget_3);
        pushButton_DelWorker->setObjectName(QStringLiteral("pushButton_DelWorker"));

        horizontalLayout_3->addWidget(pushButton_DelWorker);

        pushButton_SaveBase = new QPushButton(horizontalLayoutWidget_3);
        pushButton_SaveBase->setObjectName(QStringLiteral("pushButton_SaveBase"));

        horizontalLayout_3->addWidget(pushButton_SaveBase);

        pushButton_LoadBase = new QPushButton(horizontalLayoutWidget_3);
        pushButton_LoadBase->setObjectName(QStringLiteral("pushButton_LoadBase"));

        horizontalLayout_3->addWidget(pushButton_LoadBase);

        verticalLayoutWidget = new QWidget(FormAdmin);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 260, 461, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_wievAllSalary = new QPushButton(verticalLayoutWidget);
        pushButton_wievAllSalary->setObjectName(QStringLiteral("pushButton_wievAllSalary"));

        verticalLayout->addWidget(pushButton_wievAllSalary);

        pushButton_close = new QPushButton(verticalLayoutWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        verticalLayout->addWidget(pushButton_close);


        retranslateUi(FormAdmin);

        QMetaObject::connectSlotsByName(FormAdmin);
    } // setupUi

    void retranslateUi(QWidget *FormAdmin)
    {
        FormAdmin->setWindowTitle(QApplication::translate("FormAdmin", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("FormAdmin", "List Worker", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("FormAdmin", "Date", nullptr));
        label->setText(QApplication::translate("FormAdmin", "Salary", nullptr));
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_2->setText(QApplication::translate("FormAdmin", "Position Manager", nullptr));
#ifndef QT_NO_STATUSTIP
        label_4->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_4->setText(QApplication::translate("FormAdmin", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        but_addWorker->setToolTip(QApplication::translate("FormAdmin", "Add", nullptr));
#endif // QT_NO_TOOLTIP
        but_addWorker->setText(QApplication::translate("FormAdmin", "Add Worker", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_DelWorker->setToolTip(QApplication::translate("FormAdmin", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_DelWorker->setText(QApplication::translate("FormAdmin", "Delete Worker", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_SaveBase->setToolTip(QApplication::translate("FormAdmin", "Save Base", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_SaveBase->setText(QApplication::translate("FormAdmin", "Save Base", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_LoadBase->setToolTip(QApplication::translate("FormAdmin", "Load Base", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_LoadBase->setText(QApplication::translate("FormAdmin", "Load Base", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_wievAllSalary->setToolTip(QApplication::translate("FormAdmin", "Wiew All Salary", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_wievAllSalary->setText(QApplication::translate("FormAdmin", "View all Salary", nullptr));
        pushButton_close->setText(QApplication::translate("FormAdmin", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAdmin: public Ui_FormAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADMIN_H
