/********************************************************************************
** Form generated from reading UI file 'smart_shuffle.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMART_SHUFFLE_H
#define UI_SMART_SHUFFLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_smart_shuffle
{
public:

    void setupUi(QDialog *smart_shuffle)
    {
        if (smart_shuffle->objectName().isEmpty())
            smart_shuffle->setObjectName(QStringLiteral("smart_shuffle"));
        smart_shuffle->resize(782, 480);

        retranslateUi(smart_shuffle);

        QMetaObject::connectSlotsByName(smart_shuffle);
    } // setupUi

    void retranslateUi(QDialog *smart_shuffle)
    {
        smart_shuffle->setWindowTitle(QApplication::translate("smart_shuffle", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class smart_shuffle: public Ui_smart_shuffle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMART_SHUFFLE_H
