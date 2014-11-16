#ifndef SAVE_BROADCAST_H
#define SAVE_BROADCAST_H

#include <QDialog>

namespace Ui {
class Save_broadcast;
}

class Save_broadcast : public QDialog
{
    Q_OBJECT

public:
    explicit Save_broadcast(QWidget *parent = 0);
    ~Save_broadcast();

private:
    Ui::Save_broadcast *ui;
};

#endif // SAVE_BROADCAST_H
