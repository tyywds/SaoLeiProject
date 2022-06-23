/********************************************************************************
** Form generated from reading UI file 'wndmain.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WNDMAIN_H
#define UI_WNDMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WndMainClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WndMainClass)
    {
        if (WndMainClass->objectName().isEmpty())
            WndMainClass->setObjectName(QString::fromUtf8("WndMainClass"));
        WndMainClass->resize(600, 400);
        menuBar = new QMenuBar(WndMainClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        WndMainClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WndMainClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WndMainClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WndMainClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        WndMainClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WndMainClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WndMainClass->setStatusBar(statusBar);

        retranslateUi(WndMainClass);

        QMetaObject::connectSlotsByName(WndMainClass);
    } // setupUi

    void retranslateUi(QMainWindow *WndMainClass)
    {
        WndMainClass->setWindowTitle(QCoreApplication::translate("WndMainClass", "WndMain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WndMainClass: public Ui_WndMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WNDMAIN_H
