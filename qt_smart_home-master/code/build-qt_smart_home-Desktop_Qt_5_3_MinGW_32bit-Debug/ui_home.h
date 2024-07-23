/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QFrame *frame_left;
    QLabel *label_headpic;
    QLabel *label_status;
    QLabel *label_time_1;
    QLabel *label_time_2;
    QLabel *label_fenge;
    QLabel *label_keting;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QStringLiteral("home"));
        home->resize(1440, 844);
        frame_left = new QFrame(home);
        frame_left->setObjectName(QStringLiteral("frame_left"));
        frame_left->setGeometry(QRect(0, 0, 265, 840));
        frame_left->setFrameShape(QFrame::StyledPanel);
        frame_left->setFrameShadow(QFrame::Raised);
        label_headpic = new QLabel(frame_left);
        label_headpic->setObjectName(QStringLiteral("label_headpic"));
        label_headpic->setGeometry(QRect(70, 20, 100, 100));
        label_headpic->setStyleSheet(QStringLiteral(""));
        label_status = new QLabel(frame_left);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(0, 130, 261, 51));
        QFont font;
        font.setPointSize(15);
        label_status->setFont(font);
        label_status->setAlignment(Qt::AlignCenter);
        label_time_1 = new QLabel(home);
        label_time_1->setObjectName(QStringLiteral("label_time_1"));
        label_time_1->setGeometry(QRect(1140, 30, 271, 81));
        QFont font1;
        font1.setPointSize(55);
        label_time_1->setFont(font1);
        label_time_1->setAlignment(Qt::AlignCenter);
        label_time_2 = new QLabel(home);
        label_time_2->setObjectName(QStringLiteral("label_time_2"));
        label_time_2->setGeometry(QRect(1140, 120, 271, 51));
        QFont font2;
        font2.setPointSize(16);
        label_time_2->setFont(font2);
        label_time_2->setAlignment(Qt::AlignCenter);
        label_fenge = new QLabel(home);
        label_fenge->setObjectName(QStringLiteral("label_fenge"));
        label_fenge->setGeometry(QRect(1110, 30, 21, 131));
        label_keting = new QLabel(home);
        label_keting->setObjectName(QStringLiteral("label_keting"));
        label_keting->setGeometry(QRect(860, 30, 211, 131));
        QFont font3;
        font3.setPointSize(50);
        label_keting->setFont(font3);
        label_keting->setAlignment(Qt::AlignCenter);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QApplication::translate("home", "\350\215\211\350\216\223\350\216\223\350\216\223\347\232\204\347\206\212", 0));
        label_headpic->setText(QApplication::translate("home", "\345\244\264\345\203\217\345\233\276\347\211\207", 0));
        label_status->setText(QApplication::translate("home", "\347\212\266\346\200\201\357\274\232\347\246\273\347\272\277", 0));
        label_time_1->setText(QApplication::translate("home", "01:01", 0));
        label_time_2->setText(QApplication::translate("home", "2023-01-01 \346\230\237\346\234\237\344\270\200", 0));
        label_fenge->setText(QApplication::translate("home", "TextLabel", 0));
        label_keting->setText(QApplication::translate("home", "\345\256\242\345\216\205", 0));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
