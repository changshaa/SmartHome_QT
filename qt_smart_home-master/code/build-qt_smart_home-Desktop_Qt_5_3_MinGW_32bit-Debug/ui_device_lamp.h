/********************************************************************************
** Form generated from reading UI file 'device_lamp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_LAMP_H
#define UI_DEVICE_LAMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceLamp
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_background;
    QLabel *label_name_lamp;
    QLabel *label_lamp;
    QLabel *label_onoff;

    void setupUi(QWidget *DeviceLamp)
    {
        if (DeviceLamp->objectName().isEmpty())
            DeviceLamp->setObjectName(QStringLiteral("DeviceLamp"));
        DeviceLamp->resize(282, 280);
        gridLayout = new QGridLayout(DeviceLamp);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        frame_background = new QFrame(DeviceLamp);
        frame_background->setObjectName(QStringLiteral("frame_background"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        label_name_lamp = new QLabel(frame_background);
        label_name_lamp->setObjectName(QStringLiteral("label_name_lamp"));
        label_name_lamp->setGeometry(QRect(200, 190, 81, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\261\211\344\273\252\346\227\227\351\273\221-45S"));
        font.setPointSize(20);
        label_name_lamp->setFont(font);
        label_lamp = new QLabel(frame_background);
        label_lamp->setObjectName(QStringLiteral("label_lamp"));
        label_lamp->setGeometry(QRect(10, 10, 175, 255));
        label_lamp->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        label_onoff = new QLabel(frame_background);
        label_onoff->setObjectName(QStringLiteral("label_onoff"));
        label_onoff->setGeometry(QRect(200, 230, 71, 31));
        QFont font1;
        font1.setPointSize(16);
        label_onoff->setFont(font1);

        gridLayout->addWidget(frame_background, 0, 0, 1, 1);


        retranslateUi(DeviceLamp);

        QMetaObject::connectSlotsByName(DeviceLamp);
    } // setupUi

    void retranslateUi(QWidget *DeviceLamp)
    {
        DeviceLamp->setWindowTitle(QApplication::translate("DeviceLamp", "Form", 0));
        label_name_lamp->setText(QApplication::translate("DeviceLamp", "\345\220\212\347\201\257", 0));
        label_lamp->setText(QApplication::translate("DeviceLamp", "\347\201\257\345\233\276\347\211\207", 0));
        label_onoff->setText(QApplication::translate("DeviceLamp", "ON", 0));
    } // retranslateUi

};

namespace Ui {
    class DeviceLamp: public Ui_DeviceLamp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_LAMP_H
