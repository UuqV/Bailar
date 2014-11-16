#ifndef POSSIBLE_CHORDS_H
#define POSSIBLE_CHORDS_H

#include <QDialog>

namespace Ui {
class Possible_chords;
}

class Possible_chords : public QDialog
{
    Q_OBJECT

public:
    explicit Possible_chords(QWidget *parent = 0);
    ~Possible_chords();

private:
    Ui::Possible_chords *ui;
};

#endif // POSSIBLE_CHORDS_H
