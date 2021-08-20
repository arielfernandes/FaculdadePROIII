/********************************************************************************
** Form generated from reading UI file 'janela1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA1_H
#define UI_JANELA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janela1
{
public:
    QLabel *label;
    QLabel *label_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_coordenadas_centro_X;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_coordenadas_centro_Y;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_coordenadasX;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_coordenadasY;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_altura;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_largura;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_voltar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_Calcular;

    void setupUi(QDialog *janela1)
    {
        if (janela1->objectName().isEmpty())
            janela1->setObjectName(QString::fromUtf8("janela1"));
        janela1->resize(400, 324);
        label = new QLabel(janela1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 171, 16));
        label_8 = new QLabel(janela1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 130, 291, 31));
        widget = new QWidget(janela1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(31, 170, 228, 50));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        lineEdit_coordenadas_centro_X = new QLineEdit(widget);
        lineEdit_coordenadas_centro_X->setObjectName(QString::fromUtf8("lineEdit_coordenadas_centro_X"));

        verticalLayout_3->addWidget(lineEdit_coordenadas_centro_X);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        lineEdit_coordenadas_centro_Y = new QLineEdit(widget);
        lineEdit_coordenadas_centro_Y->setObjectName(QString::fromUtf8("lineEdit_coordenadas_centro_Y"));

        verticalLayout_4->addWidget(lineEdit_coordenadas_centro_Y);


        horizontalLayout_2->addLayout(verticalLayout_4);

        widget1 = new QWidget(janela1);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(31, 61, 228, 50));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_coordenadasX = new QLineEdit(widget1);
        lineEdit_coordenadasX->setObjectName(QString::fromUtf8("lineEdit_coordenadasX"));

        verticalLayout->addWidget(lineEdit_coordenadasX);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_coordenadasY = new QLineEdit(widget1);
        lineEdit_coordenadasY->setObjectName(QString::fromUtf8("lineEdit_coordenadasY"));

        verticalLayout_2->addWidget(lineEdit_coordenadasY);


        horizontalLayout->addLayout(verticalLayout_2);

        widget2 = new QWidget(janela1);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(31, 226, 228, 50));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        lineEdit_altura = new QLineEdit(widget2);
        lineEdit_altura->setObjectName(QString::fromUtf8("lineEdit_altura"));

        verticalLayout_6->addWidget(lineEdit_altura);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_5->addWidget(label_6);

        lineEdit_largura = new QLineEdit(widget2);
        lineEdit_largura->setObjectName(QString::fromUtf8("lineEdit_largura"));

        verticalLayout_5->addWidget(lineEdit_largura);


        horizontalLayout_3->addLayout(verticalLayout_5);

        widget3 = new QWidget(janela1);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(40, 290, 324, 26));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btn_voltar = new QPushButton(widget3);
        btn_voltar->setObjectName(QString::fromUtf8("btn_voltar"));

        horizontalLayout_4->addWidget(btn_voltar);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_Calcular = new QPushButton(widget3);
        btn_Calcular->setObjectName(QString::fromUtf8("btn_Calcular"));

        horizontalLayout_4->addWidget(btn_Calcular);


        retranslateUi(janela1);

        QMetaObject::connectSlotsByName(janela1);
    } // setupUi

    void retranslateUi(QDialog *janela1)
    {
        janela1->setWindowTitle(QCoreApplication::translate("janela1", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("janela1", "Informe as coordenadas 2D", nullptr));
        label_8->setText(QCoreApplication::translate("janela1", "Informe as coordenadas e dimens\303\265es do ret\303\242ngulo", nullptr));
        label_4->setText(QCoreApplication::translate("janela1", "X do centro", nullptr));
        label_5->setText(QCoreApplication::translate("janela1", "Y do centro", nullptr));
        label_2->setText(QCoreApplication::translate("janela1", "X", nullptr));
        label_3->setText(QCoreApplication::translate("janela1", "Y", nullptr));
        label_7->setText(QCoreApplication::translate("janela1", "Altura", nullptr));
        label_6->setText(QCoreApplication::translate("janela1", "Largura", nullptr));
        btn_voltar->setText(QCoreApplication::translate("janela1", "<< voltar", nullptr));
        btn_Calcular->setText(QCoreApplication::translate("janela1", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela1: public Ui_janela1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA1_H
