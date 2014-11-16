#include "possible_chords.h"
#include "ui_possible_chords.h"

Possible_chords::Possible_chords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Possible_chords)
{
    ui->setupUi(this);
}

Possible_chords::~Possible_chords()
{
    delete ui;
}
