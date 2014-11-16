/********************************************************************************
** Form generated from reading UI file 'possible_chords.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSSIBLE_CHORDS_H
#define UI_POSSIBLE_CHORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Possible_chords
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *label_7;
    QWidget *tab_3;
    QLabel *label_4;
    QLabel *label_8;
    QWidget *tab_4;
    QLabel *label_5;
    QLabel *label_9;
    QWidget *tab_5;
    QLabel *label_6;
    QLabel *label_10;

    void setupUi(QDialog *Possible_chords)
    {
        if (Possible_chords->objectName().isEmpty())
            Possible_chords->setObjectName(QStringLiteral("Possible_chords"));
        Possible_chords->resize(710, 406);
        buttonBox = new QDialogButtonBox(Possible_chords);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(410, 280, 151, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(Possible_chords);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 691, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 71, 31));
        label->setStyleSheet(QLatin1String("font: 75 12pt \"Vani\";\n"
"text-decoration: underline;"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 60, 461, 151));
        label_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/c_maj.png);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 20, 71, 31));
        label_3->setStyleSheet(QLatin1String("font: 75 12pt \"Vani\";\n"
"text-decoration: underline;"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 60, 461, 151));
        label_7->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/c_sharp.png);"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 20, 71, 31));
        label_4->setStyleSheet(QLatin1String("font: 75 12pt \"Vani\";\n"
"text-decoration: underline;"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 60, 461, 151));
        label_8->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/D_maj.png);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 20, 71, 31));
        label_5->setStyleSheet(QLatin1String("font: 75 12pt \"Vani\";\n"
"text-decoration: underline;"));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 60, 461, 151));
        label_9->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Eb.png);"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 20, 71, 31));
        label_6->setStyleSheet(QLatin1String("font: 75 12pt \"Vani\";\n"
"text-decoration: underline;"));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 60, 461, 151));
        label_10->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/E_maj.png);"));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(Possible_chords);
        QObject::connect(buttonBox, SIGNAL(accepted()), Possible_chords, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Possible_chords, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Possible_chords);
    } // setupUi

    void retranslateUi(QDialog *Possible_chords)
    {
        Possible_chords->setWindowTitle(QApplication::translate("Possible_chords", "Dialog", 0));
        label->setText(QApplication::translate("Possible_chords", "C Major", 0));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Possible_chords", "Tab 1", 0));
        label_3->setText(QApplication::translate("Possible_chords", "C#", 0));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Possible_chords", "Tab 2", 0));
        label_4->setText(QApplication::translate("Possible_chords", "D Major", 0));
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Possible_chords", "Tab 3", 0));
        label_5->setText(QApplication::translate("Possible_chords", "Eb", 0));
        label_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Possible_chords", "Tab 4", 0));
        label_6->setText(QApplication::translate("Possible_chords", "E Major", 0));
        label_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Possible_chords", "Tab 5", 0));
    } // retranslateUi

};

namespace Ui {
    class Possible_chords: public Ui_Possible_chords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSSIBLE_CHORDS_H
