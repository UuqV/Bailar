/********************************************************************************
** Form generated from reading UI file 'save_broadcast.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_BROADCAST_H
#define UI_SAVE_BROADCAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Save_broadcast
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Save_broadcast)
    {
        if (Save_broadcast->objectName().isEmpty())
            Save_broadcast->setObjectName(QStringLiteral("Save_broadcast"));
        Save_broadcast->resize(354, 227);
        buttonBox = new QDialogButtonBox(Save_broadcast);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 180, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Save_broadcast);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 80, 221, 61));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(Save_broadcast);
        QObject::connect(buttonBox, SIGNAL(accepted()), Save_broadcast, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Save_broadcast, SLOT(reject()));

        QMetaObject::connectSlotsByName(Save_broadcast);
    } // setupUi

    void retranslateUi(QDialog *Save_broadcast)
    {
        Save_broadcast->setWindowTitle(QApplication::translate("Save_broadcast", "Bailar Music", 0));
        label->setText(QApplication::translate("Save_broadcast", "Congratulations!  You saved something!", 0));
    } // retranslateUi

};

namespace Ui {
    class Save_broadcast: public Ui_Save_broadcast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_BROADCAST_H
