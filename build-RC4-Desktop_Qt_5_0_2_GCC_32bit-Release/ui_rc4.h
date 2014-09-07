/********************************************************************************
** Form generated from reading UI file 'rc4.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RC4_H
#define UI_RC4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rc4
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *text;
    QTextEdit *cifra;
    QTextEdit *pass;
    QPushButton *ejecutar;
    QPushButton *salir;
    QRadioButton *decimal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *rc4)
    {
        if (rc4->objectName().isEmpty())
            rc4->setObjectName(QStringLiteral("rc4"));
        rc4->resize(657, 484);
        centralWidget = new QWidget(rc4);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 110, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 20, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 230, 131, 17));
        text = new QTextEdit(centralWidget);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(90, 140, 491, 78));
        cifra = new QTextEdit(centralWidget);
        cifra->setObjectName(QStringLiteral("cifra"));
        cifra->setGeometry(QRect(90, 250, 491, 78));
        pass = new QTextEdit(centralWidget);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(90, 50, 491, 41));
        ejecutar = new QPushButton(centralWidget);
        ejecutar->setObjectName(QStringLiteral("ejecutar"));
        ejecutar->setGeometry(QRect(408, 360, 171, 27));
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(408, 390, 171, 27));
        decimal = new QRadioButton(centralWidget);
        decimal->setObjectName(QStringLiteral("decimal"));
        decimal->setGeometry(QRect(90, 380, 271, 22));
        rc4->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(rc4);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 657, 25));
        rc4->setMenuBar(menuBar);
        mainToolBar = new QToolBar(rc4);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        rc4->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(rc4);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        rc4->setStatusBar(statusBar);

        retranslateUi(rc4);

        QMetaObject::connectSlotsByName(rc4);
    } // setupUi

    void retranslateUi(QMainWindow *rc4)
    {
        rc4->setWindowTitle(QApplication::translate("rc4", "rc4", 0));
        label->setText(QApplication::translate("rc4", "TEXTO", 0));
        label_2->setText(QApplication::translate("rc4", "CLAVE:", 0));
        label_3->setText(QApplication::translate("rc4", "TEXTO CIFRADO:", 0));
        ejecutar->setText(QApplication::translate("rc4", "EJECUTAR", 0));
        salir->setText(QApplication::translate("rc4", "SALIR", 0));
        decimal->setText(QApplication::translate("rc4", "DECIMAL SEPARADO POR COMAS", 0));
    } // retranslateUi

};

namespace Ui {
    class rc4: public Ui_rc4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RC4_H
