#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <QDialog>
#include <save_broadcast.h>
#include <possible_chords.h>
#include <iostream>
#include <ctime>
#include <sys/types.h>
#include <sys/stat.h>
#include <cerrno>
#include <cstring>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    watch = "_";

    next = open();
    is_chord_mode = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
//--------------------------------------Buttons-----------------------------------------------------------------------------------------
void MainWindow::on_A_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("A");
    info = "A";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("A");
     set_next_likely_chord("A");
    }

}

void MainWindow::on_B_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("B");
    info = "B";
        if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("B");
     set_next_likely_chord("B");
    }

}

void MainWindow::on_C_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("C");
    info = "C";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("C");
     set_next_likely_chord("C");
    }

}

void MainWindow::on_D_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("D");
    info = "D";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("D");
     set_next_likely_chord("D");
    }

}

void MainWindow::on_E_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("E");
    info = "E";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("E");
     set_next_likely_chord("E");
    }

}

void MainWindow::on_F_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("F");
    info = "F";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("F");
     set_next_likely_chord("F");
    }

}

void MainWindow::on_G_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("G");
    info = "G";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("G");
     set_next_likely_chord("G");
    }

}

void MainWindow::on_A_sh_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("A#");
    info = "A#";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("A#");
     set_next_likely_chord("A#");
    }

}

void MainWindow::on_C_sh_clicked()
{
    ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("C#");
    info = "C#";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("C#");
     set_next_likely_chord("C#");
    }

}

void MainWindow::on_D_sh_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("D#");
    info = "D#";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("D#");
     set_next_likely_chord("D#");
    }

}

void MainWindow::on_F_sh_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("F#");
    info = "F#";

        if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }

    set_next_likely();
    }
    else
    {
     chord.push_back("F#");
     set_next_likely_chord("F#");
    }

}

void MainWindow::on_G_sh_clicked()
{
     ui->Status->setText("- - -Collecting- - -");
    if(!is_chord_mode)
    {
    ui->Note1->setText("G#");
    info = "G#";
         if(ui->Note2->text() == "")
        {
            ui->Status->setText("- - -Processing- - -");
        }else
        {
            ui->Status->setText("- - -Idle- - -");
        }
    set_next_likely();
    }
    else
    {
     chord.push_back("G#");
     set_next_likely_chord("G#");
    }

}

//---------------------Not Buttons------------------------------------------------------------------------------------------------------------------
void MainWindow::set_next_likely()
{
    if (watch != ";") {
        if (next.find(watch) == next.end() ) next[watch].assign(13, 0);
        if (info == "A") {
            next[watch][1]++;
        }
        else if (info == "B") {
            next[watch][2]++;
        }
        else if (info == "C") {
            next[watch][3]++;
        }
        else if (info == "D") {
            next[watch][4]++;
        }
        else if (info == "E") {
            next[watch][5]++;
        }
        else if (info == "F") {
            next[watch][6]++;
        }
        else if (info == "G") {
            next[watch][7]++;
        }
        else if (info == "A#") {
            next[watch][8]++;
        }
        else if (info == "C#") {
            next[watch][9]++;
        }
        else if (info == "D#") {
            next[watch][10]++;
        }
        else if (info == "F#") {
            next[watch][11]++;
        }
        else if (info == "G#") {
            next[watch][12]++;
        }



    }

    if (next.find(info) != next.end()) {
        int i;
        int largest = 0;
        //std::cout << "here?\n";
        for (i = 0; i < 8; i++) {

            if (next[info][i] > largest) {
                largest = i;
                //std::cout << next[info][i];
            }
        }
        QString suggestion;
        if (largest == 1) {
            suggestion = "A";
        }
        else if (largest == 2) {
            suggestion = "B";
        }
        else if (largest == 3) {
            suggestion = "C";
        }
        else if (largest == 4) {
            suggestion = "D";
        }
        else if (largest == 5) {
            suggestion = "E";
        }
        else if (largest == 6) {
            suggestion = "F";
        }
        else if (largest == 7) {
            suggestion = "G";
        }
        else if (largest == 8) {
            suggestion = "A#";
        }
        else if (largest == 9) {
            suggestion = "C#";
        }
        else if (largest == 10) {
            suggestion = "D#";
        }
        else if (largest == 11) {
            suggestion = "F#";
        }
        else if (largest == 12) {
            suggestion = "G#";
        }
        if (largest != 13) {
            next_likely_note = suggestion;
        }
    }
    watch = info;
    ui->Note2->setText(next_likely_note);
}

void MainWindow::save(std::map<QString, std::vector<int> >& next) {
    std::ofstream out_str("prediction.txt");
    ui->Status->setText("- - -Saving- - -");
    if (!out_str.good()) {
        std::cerr << "Cannot write to prediction data file.\n";
      exit(1);
    }
    for (std::map<QString, std::vector<int> >::const_iterator oitr = next.begin(); oitr != next.end(); oitr++) {

        out_str << (*oitr).first.toUtf8().constData() << " ";
        for (unsigned int i = 0; i < (*oitr).second.size(); i++) {
            out_str << (*oitr).second[i] << " ";
        }
        out_str << "\n";
    }

    system("./uploadPrediction.sh");
    ui->Status->setText("- - -Saved- - -");
}

std::map<QString, std::vector<int> > MainWindow::open() {
    system("./downloadPrediction.sh");
    struct stat fileInfo;

    if (stat("../build-bailar-Desktop_Qt_5_3_MinGW_32bit-Debug/prediction.txt", &fileInfo) != 0) {  // Use stat( ) to get the info
         std::cerr << "Error: " << strerror(errno) << '\n';
      }
    ui->Save_Date->setText(std::ctime(&fileInfo.st_mtime));

    std::map<QString, std::vector<int> > data;
    int freq;
    std::string note;
    std::vector<int> freqs;
    freqs.assign(8, 0);

    std::ifstream in_str("../build-bailar-Desktop_Qt_5_3_MinGW_32bit-Debug/prediction.txt");
    if (!in_str.good()) {
        std::cerr << "Warning: no prediction data found.\n";
        return data;
    }
    while (in_str >> note) {
        for (int i = 0; i < 8; i++) {
            in_str >> freq;
            freqs[i] += freq;
        }
        data.insert(std::make_pair(QString::fromStdString(note), freqs));
        freqs.clear();
        freqs.assign(8,0);
    }
    return data;
}

QString parse(int index) {
    if (index == 1) {
        return "A";
    }
    else if (index == 2) {
        return "B";
    }
    else if (index == 3) {
        return "C";
    }
    else if (index == 4) {
        return "D";
    }
    else if (index == 5) {
        return "E";
    }
    else if (index == 6) {
        return "F";
    }
    else if (index == 7) {
        return "G";
    }
    else if (index == 8) {
        return "A#";
    }
    else if (index == 9) {
        return "C#";
    }
    else if (index == 10) {
        return "D#";
    }
    else if (index == 11) {
        return "F#";
    }
    else if (index == 12) {
        return "G#";
    }
    else return "\0";
}

void MainWindow::set_next_likely_chord(QString info)
{
    if(chord.size() >= 3)
    {
    for (unsigned int i = 0; i < chord.size(); i++) {
        if (sync.find(chord[i]) == sync.end() ) sync[chord[i]].assign(13, 0);
        for (unsigned int j = 0; j < chord.size(); j++) {
            if (i == j) continue;
            if (chord[j] == "A") {
                sync[chord[i]][1]++;
            }
            else if (chord[j] == "B") {
                sync[chord[i]][2]++;
            }
            else if (chord[j] == "C") {
                sync[chord[i]][3]++;
            }
            else if (chord[j] == "D") {
                sync[chord[i]][4]++;
            }
            else if (chord[j] == "E") {
                sync[chord[i]][5]++;
            }
            else if (chord[j] == "F") {
                sync[chord[i]][6]++;
            }
            else if (chord[j] == "G") {
                sync[chord[i]][7]++;
            }
            else if (chord[j] == "A#") {
                sync[chord[i]][7]++;
            }
            else if (chord[j] == "C#") {
                sync[chord[i]][7]++;
            }
            else if (chord[j] == "D#") {
                sync[chord[i]][7]++;
            }
            else if (chord[j] == "F#") {
                sync[chord[i]][7]++;
            }
            else if (chord[j] == "G#") {
                sync[chord[i]][7]++;
            }
        }
      }

        std::vector<QString> alreadyFound;
        if (sync.find(info) != sync.end()) {


            alreadyFound.push_back(info);
            //int currentLargest = 0;

            for (unsigned int x = 0; x < chord.size() - 1; x++) {
                int largest = 0;
                int largestValue = 0;
                for (int i = 0; i < 13; i++) {

                    bool found;
                    if (sync[info][i] >= largestValue) {
                        for (unsigned int y = 0; y < alreadyFound.size(); y++) {
                            if (parse_chords(i) == alreadyFound[y]) {
                                found = true;
                            }
                        }
                        if (found == false) {
                            largest = i;
                            largestValue = sync[info][i];
                        }
                    }
                }
                QString suggestion = parse_chords(largest);
                if (largest != 13) {
                    alreadyFound.push_back(suggestion);
                }
            }


        }
        next_likely_chord = alreadyFound[0] + " " + alreadyFound[1];

    ui->Note2->setText(next_likely_chord);
    }

}

void MainWindow::save_chord(std::map<QString, std::vector<int> >& sync)
{
    ui->Status->setText("- - -Saving- - -");
    std::ofstream out_str("chords.txt");
    if (!out_str.good()) {
        std::cerr << "Cannot write to chord data file.\n";

    }
    for (std::map<QString, std::vector<int> >::const_iterator oitr = sync.begin(); oitr != sync.end(); oitr++) {
        out_str << (*oitr).first.toUtf8().constData() << " ";
        for (unsigned int i = 0; i < (*oitr).second.size(); i++) {
            out_str << (*oitr).second[i] << " ";
        }
        out_str << "\n";
    }
    system("./uploadChords.sh");
    ui->Status->setText("- - -Saved- - -");
}


std::map<QString, std::vector<int> > open_chords()
{
    system("./downloadChords.sh");
    std::map<QString, std::vector<int> > data;
    int freq;
    std::string note;
    std::vector<int> freqs;
    freqs.assign(8, 0);

    std::ifstream in_str("chords.pstda");
    if (!in_str.good()) {
        std::cerr << "Warning: no chord data found.\n";
        return data;
    }
    while (in_str >> note) {
        for (int i = 0; i < 13; i++) {

            in_str >> freq;
            freqs[i] += freq;
        }
        data.insert(std::make_pair(QString::fromStdString(note), freqs));
        freqs.clear();
        freqs.assign(8, 0);
    }
    return data;
}


QString MainWindow::parse_chords(int index)
{
    if (index == 1) {
        return "A";
    }
    else if (index == 2) {
        return "B";
    }
    else if (index == 3) {
        return "C";
    }
    else if (index == 4) {
        return "D";
    }
    else if (index == 5) {
        return "E";
    }
    else if (index == 6) {
        return "F";
    }
    else if (index == 7) {
        return "G";
    }
    else if (index == 8) {
        return "A#";
    }
    else if (index == 9) {
        return "C#";
    }
    else if (index == 10) {
        return "D#";
    }
    else if (index == 11) {
        return "F#";
    }
    else if (index == 12) {
        return "G#";
    }
    else return "\0";
}


//----------------Events----------------------------------------------------------------------------------------------------


void MainWindow::on_Save_triggered()
{
    save(next);
    Save_broadcast save_message;
    save_message.setModal(true);
    save_message.exec();

}


void MainWindow::on_Chord_Mode_triggered()
{
    if(!is_chord_mode)
    {
        is_chord_mode = true;
        std::cout << "chord mode on" << std::endl;
        ui->Unchanged1->setStyleSheet("color: rgb(255, 0, 0);");
        ui->Unchanged2->setStyleSheet("color: rgb(255, 0, 0);");
        ui->Note1->setStyleSheet("color: rgb(255, 0, 0);");
        ui->Note2->setStyleSheet("color: rgb(255, 0, 0);");
        ui->Status->setStyleSheet("color: rgb(255, 0, 0);");
        ui->Status->setText("- - -Chord mode active- - -");
    }
    else
    {
        is_chord_mode = false;
        std::cout << "chord mode off" << std::endl;
        ui->Unchanged1->setStyleSheet("color: rgb(0, 0, 0);");
        ui->Unchanged2->setStyleSheet("color: rgb(0, 0, 0);");
        ui->Note1->setStyleSheet("color: rgb(0, 0, 0);");
        ui->Note2->setStyleSheet("color: rgb(0, 0, 0);");
        ui->Status->setStyleSheet("color: rgb(0, 0, 0);");
        ui->Status->setText("- - -Chord mode deactivated- - -");

    }
}


void MainWindow::on_actionPossible_chords_triggered()
{
    ui->Status->setText("- - -Idle- - -");
    Possible_chords tabs;
    tabs.setModal(true);
    tabs.exec();
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
