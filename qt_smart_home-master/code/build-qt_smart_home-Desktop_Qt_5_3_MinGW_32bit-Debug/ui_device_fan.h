/********************************************************************************
** Form generated from reading UI file 'device_fan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_FAN_H
#define UI_DEVICE_FAN_H

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

class Ui_DeviceFan
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_background;
    QLabel *label_text_fan;
    QLabel *label_fan;
    QLabel *label_onoff;

    void setupUi(QWidget *DeviceFan)
    {
        if (DeviceFan->objectName().isEmpty())
            DeviceFan->setObjectName(QStringLiteral("DeviceFan"));
        DeviceFan->resize(282, 280);
        gridLayout = new QGridLayout(DeviceFan);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        frame_background = new QFrame(DeviceFan);
        frame_background->setObjectName(QStringLiteral("frame_background"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        label_text_fan = new QLabel(frame_background);
        label_text_fan->setObjectName(QStringLiteral("label_text_fan"));
        label_text_fan->setGeometry(QRect(201, 190, 91, 41));
        QFont font;
        font.setPointSize(20);
        label_text_fan->setFont(font);
        label_fan = new QLabel(frame_background);
        label_fan->setObjectName(QStringLiteral("label_fan"));
        label_fan->setGeometry(QRect(10, 10, 175, 255));
        label_fan->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        label_onoff = new QLabel(frame_background);
        label_onoff->setObjectName(QStringLiteral("label_onoff"));
        label_onoff->setGeometry(QRect(200, 230, 81, 31));
        QFont font1;
        font1.setPointSize(16);
        label_onoff->setFont(font1);

        gridLayout->addWidget(frame_background, 0, 0, 1, 1);


        retranslateUi(DeviceFan);

        QMetaObject::connectSlotsByName(DeviceFan);
    } // setupUi

    void retranslateUi(QWidget *DeviceFan)
    {
        DeviceFan->setWindowTitle(QApplication::translate("DeviceFan", "Form", 0));
        label_text_fan->setText(QApplication::translate("DeviceFan", "\351\243\216\346\211\207", 0));
        label_fan->setText(QApplication::translate("DeviceFan", "\351\243\216\346\211\207\345\233\276\347\211\207", 0));
        label_onoff->setText(QApplication::translate("DeviceFan", "ON", 0));
    } // retranslateUi

};

namespace Ui {
    class DeviceFan: public Ui_DeviceFan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_FAN_H
