/********************************************************************************
** Form generated from reading UI file 'qtprogramwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPROGRAMWIN_H
#define UI_QTPROGRAMWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtProgramWin
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_div;
    QPushButton *pushButton_5;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_4;
    QPushButton *pushButton_add;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_0;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtProgramWin)
    {
        if (QtProgramWin->objectName().isEmpty())
            QtProgramWin->setObjectName(QStringLiteral("QtProgramWin"));
        QtProgramWin->resize(299, 403);
        centralWidget = new QWidget(QtProgramWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 300, 51));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 51, 150, 75));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(75, 126, 75, 75));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 126, 75, 75));
        pushButton_equals = new QPushButton(centralWidget);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(150, 51, 75, 75));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(225, 51, 75, 75));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 126, 75, 75));
        pushButton_mul = new QPushButton(centralWidget);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(225, 126, 75, 75));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 201, 75, 75));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(225, 276, 75, 75));
        pushButton_sub = new QPushButton(centralWidget);
        pushButton_sub->setObjectName(QStringLiteral("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(225, 201, 75, 75));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 276, 150, 75));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 201, 75, 75));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(150, 276, 75, 75));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(75, 201, 75, 75));
        QtProgramWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtProgramWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 299, 21));
        QtProgramWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtProgramWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtProgramWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtProgramWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtProgramWin->setStatusBar(statusBar);

        retranslateUi(QtProgramWin);

        QMetaObject::connectSlotsByName(QtProgramWin);
    } // setupUi

    void retranslateUi(QMainWindow *QtProgramWin)
    {
        QtProgramWin->setWindowTitle(QApplication::translate("QtProgramWin", "QtProgramWin", Q_NULLPTR));
        label->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("QtProgramWin", "C", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("QtProgramWin", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("QtProgramWin", "7", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("QtProgramWin", "=", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("QtProgramWin", "/", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("QtProgramWin", "5", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("QtProgramWin", "X", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QtProgramWin", "4", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("QtProgramWin", "+", Q_NULLPTR));
        pushButton_sub->setText(QApplication::translate("QtProgramWin", "-", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("QtProgramWin", "0", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QtProgramWin", "2", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("QtProgramWin", "1", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("QtProgramWin", "3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtProgramWin: public Ui_QtProgramWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPROGRAMWIN_H
