/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
    QAction *Chord_Mode;
    QAction *Save;
    QAction *actionPossible_chords;
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *Unchanged1;
    QPushButton *C;
    QPushButton *D;
    QPushButton *E;
    QPushButton *F;
    QPushButton *G;
    QPushButton *A;
    QPushButton *B;
    QLabel *Unchanged2;
    QLabel *Note1;
    QLabel *Note2;
    QPushButton *C_sh;
    QPushButton *D_sh;
    QPushButton *F_sh;
    QPushButton *G_sh;
    QPushButton *A_sh;
    QLabel *Unchanged1_2;
    QLabel *Status;
    QLabel *Unchanged1_3;
    QLabel *Save_Date;
    QMenuBar *menuBar;
    QMenu *menuBailar;
    QMenu *menuChords;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(596, 352);
        Chord_Mode = new QAction(MainWindow);
        Chord_Mode->setObjectName(QStringLiteral("Chord_Mode"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/jimi.png"), QSize(), QIcon::Normal, QIcon::On);
        Chord_Mode->setIcon(icon);
        Save = new QAction(MainWindow);
        Save->setObjectName(QStringLiteral("Save"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/saveIcon.png"), QSize(), QIcon::Normal, QIcon::On);
        Save->setIcon(icon1);
        actionPossible_chords = new QAction(MainWindow);
        actionPossible_chords->setObjectName(QStringLiteral("actionPossible_chords"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/note_picture.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPossible_chords->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Unchanged1 = new QLabel(centralWidget);
        Unchanged1->setObjectName(QStringLiteral("Unchanged1"));
        Unchanged1->setGeometry(QRect(20, 20, 101, 31));
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Medium"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        Unchanged1->setFont(font);
        C = new QPushButton(centralWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(30, 60, 61, 181));
        QFont font1;
        font1.setFamily(QStringLiteral("Iskoola Pota"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        C->setFont(font1);
        C->setStyleSheet(QLatin1String("\n"
"QPushButton#C\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/A_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: white;\n"
"\n"
"}\n"
"\n"
"QPushButton#C:hover\n"
"{\n"
"	color: black;\n"
"	background-image: url(:/new/prefix1/A_hov.png);\n"
"\n"
"}\n"
""));
        D = new QPushButton(centralWidget);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(90, 60, 61, 181));
        D->setFont(font1);
        D->setStyleSheet(QLatin1String("\n"
"QPushButton#D\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/b_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton#D:hover\n"
"{\n"
"	color: black;\n"
"    background-image: url(:/new/prefix1/b_hov.png) ;  \n"
"}"));
        E = new QPushButton(centralWidget);
        E->setObjectName(QStringLiteral("E"));
        E->setGeometry(QRect(150, 60, 61, 181));
        E->setFont(font1);
        E->setStyleSheet(QLatin1String("\n"
"QPushButton#E\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/c_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton#E:hover\n"
"{\n"
"	color: black;\n"
"    background-image: url(:/new/prefix1/c_hov.png) ;\n"
"\n"
"}"));
        F = new QPushButton(centralWidget);
        F->setObjectName(QStringLiteral("F"));
        F->setGeometry(QRect(210, 60, 61, 191));
        F->setFont(font1);
        F->setStyleSheet(QLatin1String("\n"
"QPushButton#F\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/A_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton#F:hover\n"
"{\n"
"	color: black;\n"
"	background-image: url(:/new/prefix1/A_hov.png);\n"
"}\n"
""));
        G = new QPushButton(centralWidget);
        G->setObjectName(QStringLiteral("G"));
        G->setGeometry(QRect(270, 60, 61, 181));
        G->setFont(font1);
        G->setStyleSheet(QLatin1String("\n"
"QPushButton#G\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/b_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton#G:hover\n"
"{\n"
"	color:black;\n"
"    background-image: url(:/new/prefix1/b_hov.png) ;  \n"
"}"));
        A = new QPushButton(centralWidget);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(330, 60, 61, 181));
        A->setFont(font1);
        A->setStyleSheet(QLatin1String("\n"
"QPushButton#A\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/b_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton#A:hover\n"
"{\n"
"	color: black;\n"
"    background-image: url(:/new/prefix1/b_hov.png) ;  \n"
"}"));
        B = new QPushButton(centralWidget);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(390, 60, 61, 181));
        B->setFont(font1);
        B->setStyleSheet(QLatin1String("\n"
"QPushButton#B\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/c_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton#B:hover\n"
"{\n"
"	color: black;\n"
"    background-image: url(:/new/prefix1/c_hov.png) ;\n"
"\n"
"}"));
        Unchanged2 = new QLabel(centralWidget);
        Unchanged2->setObjectName(QStringLiteral("Unchanged2"));
        Unchanged2->setGeometry(QRect(230, 20, 211, 31));
        Unchanged2->setFont(font);
        Note1 = new QLabel(centralWidget);
        Note1->setObjectName(QStringLiteral("Note1"));
        Note1->setGeometry(QRect(140, 30, 46, 13));
        Note2 = new QLabel(centralWidget);
        Note2->setObjectName(QStringLiteral("Note2"));
        Note2->setGeometry(QRect(470, 30, 46, 13));
        C_sh = new QPushButton(centralWidget);
        C_sh->setObjectName(QStringLiteral("C_sh"));
        C_sh->setGeometry(QRect(80, 60, 21, 101));
        QFont font2;
        font2.setFamily(QStringLiteral("MV Boli"));
        font2.setUnderline(true);
        C_sh->setFont(font2);
        C_sh->setStyleSheet(QLatin1String("\n"
"QPushButton#C_sh\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/sharp_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton#C_sh:hover\n"
"{\n"
"	color: white;\n"
"}"));
        D_sh = new QPushButton(centralWidget);
        D_sh->setObjectName(QStringLiteral("D_sh"));
        D_sh->setGeometry(QRect(130, 60, 31, 111));
        D_sh->setFont(font2);
        D_sh->setStyleSheet(QLatin1String("\n"
"QPushButton#D_sh\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/sharp_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton#D_sh:hover\n"
"{\n"
"	color: white;\n"
"}"));
        F_sh = new QPushButton(centralWidget);
        F_sh->setObjectName(QStringLiteral("F_sh"));
        F_sh->setGeometry(QRect(250, 60, 31, 111));
        F_sh->setFont(font2);
        F_sh->setStyleSheet(QLatin1String("\n"
"QPushButton#F_sh\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/sharp_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton#F_sh:hover\n"
"{\n"
"	color: white;\n"
"}"));
        G_sh = new QPushButton(centralWidget);
        G_sh->setObjectName(QStringLiteral("G_sh"));
        G_sh->setGeometry(QRect(310, 60, 31, 111));
        G_sh->setFont(font2);
        G_sh->setStyleSheet(QLatin1String("\n"
"QPushButton#G_sh\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/sharp_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton#G_sh:hover\n"
"{\n"
"	color: white;\n"
"}"));
        A_sh = new QPushButton(centralWidget);
        A_sh->setObjectName(QStringLiteral("A_sh"));
        A_sh->setGeometry(QRect(370, 60, 31, 111));
        QFont font3;
        font3.setFamily(QStringLiteral("MV Boli"));
        A_sh->setFont(font3);
        A_sh->setStyleSheet(QLatin1String("\n"
"QPushButton#A_sh\n"
"{\n"
"    background-color: transparent;\n"
"    background-image: url(:/new/prefix1/sharp_new.png) ;\n"
"    background-repeat: none;    \n"
"    border: none;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton#A_sh:hover\n"
"{\n"
"	color: white;\n"
"}"));
        Unchanged1_2 = new QLabel(centralWidget);
        Unchanged1_2->setObjectName(QStringLiteral("Unchanged1_2"));
        Unchanged1_2->setGeometry(QRect(300, 260, 61, 21));
        Unchanged1_2->setFont(font);
        Status = new QLabel(centralWidget);
        Status->setObjectName(QStringLiteral("Status"));
        Status->setGeometry(QRect(380, 260, 191, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        Status->setFont(font4);
        Status->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 0, 0);"));
        Unchanged1_3 = new QLabel(centralWidget);
        Unchanged1_3->setObjectName(QStringLiteral("Unchanged1_3"));
        Unchanged1_3->setGeometry(QRect(20, 260, 91, 21));
        Unchanged1_3->setFont(font);
        Save_Date = new QLabel(centralWidget);
        Save_Date->setObjectName(QStringLiteral("Save_Date"));
        Save_Date->setGeometry(QRect(120, 265, 161, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 21));
        menuBailar = new QMenu(menuBar);
        menuBailar->setObjectName(QStringLiteral("menuBailar"));
        menuChords = new QMenu(menuBar);
        menuChords->setObjectName(QStringLiteral("menuChords"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuBailar->menuAction());
        menuBar->addAction(menuChords->menuAction());
        menuBailar->addSeparator();
        menuBailar->addAction(Save);
        menuBailar->addAction(actionExit);
        menuChords->addAction(Chord_Mode);
        menuChords->addAction(actionPossible_chords);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Bailar Music", 0));
        Chord_Mode->setText(QApplication::translate("MainWindow", "Chord Mode", 0));
        Save->setText(QApplication::translate("MainWindow", "Save", 0));
        Save->setShortcut(QString());
        actionPossible_chords->setText(QApplication::translate("MainWindow", "Possible chords", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        Unchanged1->setText(QApplication::translate("MainWindow", "Note Played:", 0));
        C->setText(QApplication::translate("MainWindow", "C", 0));
        D->setText(QApplication::translate("MainWindow", "D", 0));
        E->setText(QApplication::translate("MainWindow", "E", 0));
        F->setText(QApplication::translate("MainWindow", "F", 0));
        G->setText(QApplication::translate("MainWindow", "G", 0));
        A->setText(QApplication::translate("MainWindow", "A", 0));
        B->setText(QApplication::translate("MainWindow", "B", 0));
        Unchanged2->setText(QApplication::translate("MainWindow", "Most Likely Following Note:", 0));
        Note1->setText(QApplication::translate("MainWindow", "N/A", 0));
        Note2->setText(QApplication::translate("MainWindow", "N/A", 0));
        C_sh->setText(QApplication::translate("MainWindow", "C#", 0));
        D_sh->setText(QApplication::translate("MainWindow", "D#", 0));
        F_sh->setText(QApplication::translate("MainWindow", "F#", 0));
        G_sh->setText(QApplication::translate("MainWindow", "G#", 0));
        A_sh->setText(QApplication::translate("MainWindow", "A#", 0));
        Unchanged1_2->setText(QApplication::translate("MainWindow", "Status:", 0));
        Status->setText(QApplication::translate("MainWindow", "- - -Idle- - -", 0));
        Unchanged1_3->setText(QApplication::translate("MainWindow", "Last Saved:", 0));
        Save_Date->setText(QApplication::translate("MainWindow", "N/A", 0));
        menuBailar->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuChords->setTitle(QApplication::translate("MainWindow", "Chords", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
