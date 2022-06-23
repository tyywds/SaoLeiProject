#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_wndmain.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WndMainClass; };
QT_END_NAMESPACE

class WndMain : public QMainWindow
{
    Q_OBJECT

public:
    WndMain(QWidget *parent = nullptr);
    ~WndMain();

private:
    Ui::WndMainClass *ui;
};
