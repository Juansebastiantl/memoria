/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRegistrar;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *Dificultad;
    QPushButton *Baja;
    QPushButton *Media;
    QPushButton *Dificil;
    QPushButton *Empezar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionRegistrar = new QAction(MainWindow);
        actionRegistrar->setObjectName(QStringLiteral("actionRegistrar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 90, 121, 41));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 69, 100, 31));
        textEdit->setMaximumSize(QSize(16777215, 16777215));
        textEdit->setTabStopWidth(9);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 30, 111, 20));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 130, 100, 31));
        textEdit_2->setMaximumSize(QSize(16777215, 16777215));
        textEdit_2->setTabStopWidth(9);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 111, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 111, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 180, 281, 20));
        Dificultad = new QLabel(centralWidget);
        Dificultad->setObjectName(QStringLiteral("Dificultad"));
        Dificultad->setGeometry(QRect(160, 10, 59, 14));
        Baja = new QPushButton(centralWidget);
        Baja->setObjectName(QStringLiteral("Baja"));
        Baja->setGeometry(QRect(20, 100, 80, 22));
        Media = new QPushButton(centralWidget);
        Media->setObjectName(QStringLiteral("Media"));
        Media->setGeometry(QRect(150, 100, 80, 22));
        Dificil = new QPushButton(centralWidget);
        Dificil->setObjectName(QStringLiteral("Dificil"));
        Dificil->setGeometry(QRect(280, 100, 80, 22));
        Empezar = new QPushButton(centralWidget);
        Empezar->setObjectName(QStringLiteral("Empezar"));
        Empezar->setGeometry(QRect(140, 170, 111, 51));
        MainWindow->setCentralWidget(centralWidget);
        pushButton->raise();
        label->raise();
        textEdit_2->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        Dificultad->raise();
        Baja->raise();
        Media->raise();
        Dificil->raise();
        Empezar->raise();
        textEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionRegistrar->setText(QApplication::translate("MainWindow", "Registrar", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Registrar jugador", 0));
        label->setText(QApplication::translate("MainWindow", "Bienvenido", 0));
        label_2->setText(QApplication::translate("MainWindow", "Nombre Jugador1", 0));
        label_3->setText(QApplication::translate("MainWindow", "Nombre Jugador2", 0));
        label_4->setText(QString());
        Dificultad->setText(QApplication::translate("MainWindow", "Dificultad", 0));
        Baja->setText(QApplication::translate("MainWindow", "Begginer", 0));
        Media->setText(QApplication::translate("MainWindow", "Medium", 0));
        Dificil->setText(QApplication::translate("MainWindow", "Hard", 0));
        Empezar->setText(QApplication::translate("MainWindow", "Empezar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
