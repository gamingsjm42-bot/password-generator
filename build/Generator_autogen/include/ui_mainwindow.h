/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn;
    QLabel *text;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(351, 247);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"    background-color:#222;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn = new QPushButton(centralwidget);
        btn->setObjectName("btn");
        btn->setGeometry(QRect(70, 80, 111, 31));
        btn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #111;\n"
"border 2pt grey fixed;\n"
"}"));
        text = new QLabel(centralwidget);
        text->setObjectName("text");
        text->setGeometry(QRect(57, 20, 141, 20));
        text->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:red;\n"
"border: blue 2pt fixed;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn->setText(QCoreApplication::translate("MainWindow", "generate", nullptr));
        text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
