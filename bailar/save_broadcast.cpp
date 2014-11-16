#include "save_broadcast.h"
#include "ui_save_broadcast.h"

Save_broadcast::Save_broadcast(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Save_broadcast)
{
    ui->setupUi(this);
}

Save_broadcast::~Save_broadcast()
{
    delete ui;
}
