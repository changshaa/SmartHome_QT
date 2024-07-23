/********************************************************************************
** Form generated from reading UI file 'digital_scroller.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITAL_SCROLLER_H
#define UI_DIGITAL_SCROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digital_scroller
{
public:

    void setupUi(QWidget *digital_scroller)
    {
        if (digital_scroller->objectName().isEmpty())
            digital_scroller->setObjectName(QStringLiteral("digital_scroller"));
        digital_scroller->resize(405, 464);

        retranslateUi(digital_scroller);

        QMetaObject::connectSlotsByName(digital_scroller);
    } // setupUi

    void retranslateUi(QWidget *digital_scroller)
    {
        digital_scroller->setWindowTitle(QApplication::translate("digital_scroller", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class digital_scroller: public Ui_digital_scroller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITAL_SCROLLER_H
