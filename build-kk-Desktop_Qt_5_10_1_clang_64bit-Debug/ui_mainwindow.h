/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionClose_2;
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_pas;
    QPushButton *but_quit;
    QLabel *label_Login;
    QLineEdit *lineEdit_Login;
    QPushButton *but_ok;
    QLabel *label_Pas;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(420, 262);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionClose_2 = new QAction(MainWindow);
        actionClose_2->setObjectName(QStringLiteral("actionClose_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 30, 220, 141));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_pas = new QLineEdit(widget);
        lineEdit_pas->setObjectName(QStringLiteral("lineEdit_pas"));

        gridLayout->addWidget(lineEdit_pas, 1, 1, 1, 1);

        but_quit = new QPushButton(widget);
        but_quit->setObjectName(QStringLiteral("but_quit"));

        gridLayout->addWidget(but_quit, 2, 1, 1, 1);

        label_Login = new QLabel(widget);
        label_Login->setObjectName(QStringLiteral("label_Login"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_Login->setFont(font);

        gridLayout->addWidget(label_Login, 0, 0, 1, 1);

        lineEdit_Login = new QLineEdit(widget);
        lineEdit_Login->setObjectName(QStringLiteral("lineEdit_Login"));

        gridLayout->addWidget(lineEdit_Login, 0, 1, 1, 1);

        but_ok = new QPushButton(widget);
        but_ok->setObjectName(QStringLiteral("but_ok"));

        gridLayout->addWidget(but_ok, 2, 0, 1, 1);

        label_Pas = new QLabel(widget);
        label_Pas->setObjectName(QStringLiteral("label_Pas"));
        label_Pas->setFont(font);

        gridLayout->addWidget(label_Pas, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 420, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClose);
        menuFile->addAction(actionClose_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Help", nullptr));
        actionClose_2->setText(QApplication::translate("MainWindow", "Close", nullptr));
        but_quit->setText(QApplication::translate("MainWindow", "QUIT", nullptr));
        label_Login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_Login->setText(QString());
        but_ok->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_Pas->setText(QApplication::translate("MainWindow", "Password", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
