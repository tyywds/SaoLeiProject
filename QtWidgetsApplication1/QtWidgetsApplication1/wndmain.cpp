#include "wndmain.h"

WndMain::WndMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WndMainClass())
{
    ui->setupUi(this);
}

WndMain::~WndMain()
{
    delete ui;
}
