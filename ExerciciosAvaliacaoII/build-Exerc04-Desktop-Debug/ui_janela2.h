/********************************************************************************
** Form generated from reading UI file 'janela2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA2_H
#define UI_JANELA2_H

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

class Ui_janela2
{
public:
    QLabel *label;
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_calcular;

    void setupUi(QDialog *janela2)
    {
        if (janela2->objectName().isEmpty())
            janela2->setObjectName(QString::fromUtf8("janela2"));
        janela2->resize(400, 300);
        label = new QLabel(janela2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 161, 16));
        label_4 = new QLabel(janela2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 251, 16));
        widget = new QWidget(janela2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 60, 228, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(janela2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 180, 344, 50));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_3->addWidget(lineEdit_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_4->addWidget(lineEdit_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_5->addWidget(lineEdit_5);


        horizontalLayout_2->addLayout(verticalLayout_5);

        widget2 = new QWidget(janela2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 260, 374, 26));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_calcular = new QPushButton(widget2);
        btn_calcular->setObjectName(QString::fromUtf8("btn_calcular"));

        horizontalLayout_3->addWidget(btn_calcular);


        retranslateUi(janela2);

        QMetaObject::connectSlotsByName(janela2);
    } // setupUi

    void retranslateUi(QDialog *janela2)
    {
        janela2->setWindowTitle(QCoreApplication::translate("janela2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("janela2", "Informe as coordenadas 2D", nullptr));
        label_4->setText(QCoreApplication::translate("janela2", "Informe as coordenadas e o raio do c\303\255rculo", nullptr));
        label_2->setText(QCoreApplication::translate("janela2", "X", nullptr));
        label_3->setText(QCoreApplication::translate("janela2", "Y", nullptr));
        label_5->setText(QCoreApplication::translate("janela2", "X do centro", nullptr));
        label_6->setText(QCoreApplication::translate("janela2", "Y do centro", nullptr));
        label_7->setText(QCoreApplication::translate("janela2", "Raio", nullptr));
        pushButton->setText(QCoreApplication::translate("janela2", "<< Voltar", nullptr));
        btn_calcular->setText(QCoreApplication::translate("janela2", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela2: public Ui_janela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA2_H
