/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_Port;
    QPushButton *Btn_Connect;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_IP;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(578, 732);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-myClient-Desktop_Qt_5_9_4_MSVC2017_64bit-Debug/heart.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_Port = new QLineEdit(centralWidget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(85, 50, 391, 30));
        lineEdit_Port->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));
        Btn_Connect = new QPushButton(centralWidget);
        Btn_Connect->setObjectName(QStringLiteral("Btn_Connect"));
        Btn_Connect->setGeometry(QRect(500, 10, 60, 70));
        Btn_Connect->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 53, 50, 25));
        label->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 13, 50, 25));
        label_2->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_IP = new QLineEdit(centralWidget);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(85, 10, 391, 30));
        lineEdit_IP->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 90, 551, 631));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257-\345\256\242\345\216\205", 0));
        lineEdit_Port->setText(QApplication::translate("MainWindow", "6666", 0));
        Btn_Connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", 0));
        lineEdit_IP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
