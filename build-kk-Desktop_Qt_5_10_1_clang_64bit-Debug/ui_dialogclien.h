/********************************************************************************
** Form generated from reading UI file 'dialogclien.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCLIEN_H
#define UI_DIALOGCLIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogClien
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_4;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *DialogClien)
    {
        if (DialogClien->objectName().isEmpty())
            DialogClien->setObjectName(QStringLiteral("DialogClien"));
        DialogClien->resize(556, 467);
        pushButton = new QPushButton(DialogClien);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 180, 211, 41));
        layoutWidget = new QWidget(DialogClien);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 20, 151, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser_3 = new QTextBrowser(layoutWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        gridLayout->addWidget(textBrowser_3, 4, 0, 1, 1);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(layoutWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        gridLayout->addWidget(textBrowser_2, 3, 0, 1, 1);

        textBrowser_4 = new QTextBrowser(layoutWidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        gridLayout->addWidget(textBrowser_4, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(DialogClien);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 20, 61, 141));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);


        retranslateUi(DialogClien);

        QMetaObject::connectSlotsByName(DialogClien);
    } // setupUi

    void retranslateUi(QDialog *DialogClien)
    {
        DialogClien->setWindowTitle(QApplication::translate("DialogClien", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("DialogClien", "OK", nullptr));
        label_3->setText(QApplication::translate("DialogClien", "Date", nullptr));
        label->setText(QApplication::translate("DialogClien", "Position", nullptr));
        label_2->setText(QApplication::translate("DialogClien", "Salary", nullptr));
        label_4->setText(QApplication::translate("DialogClien", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogClien: public Ui_DialogClien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCLIEN_H
