#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKit/QtWebKit>
//#include "bidirectional_map.h"
#include <fstream>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void set_next_likely();
    void save(std::map<QString, std::vector<int> >& next);
    std::map<QString, std::vector<int> > open();
    QString parse(int index);



    void set_next_likely_chord(QString info);
    void save_chord(std::map<QString, std::vector<int> >& sync);
    std::map<QString, std::vector<int> > open_chords();
    QString parse_chords(int index);


private slots:

    void on_A_clicked();
    void on_B_clicked();
    void on_C_clicked();
    void on_D_clicked();
    void on_E_clicked();
    void on_F_clicked();
    void on_G_clicked();
    void on_A_sh_clicked();
    void on_C_sh_clicked();
    void on_D_sh_clicked();
    void on_F_sh_clicked();
    void on_G_sh_clicked();

    void on_Save_triggered();
    void on_Chord_Mode_triggered();
    void on_actionPossible_chords_triggered();
    void on_actionExit_triggered();

private:
     std::map<QString, std::vector<int> > next;
     QString info;
     QString watch;
     Ui::MainWindow *ui;
     QString next_likely_note;



     bool is_chord_mode;
     std::vector<QString> chord;
     QString next_likely_chord;
     std::map<QString, std::vector<int> > sync;

     QString dateTimeString;
};



#endif // MAINWINDOW_H
