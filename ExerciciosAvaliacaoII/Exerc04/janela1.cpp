#include "janela1.h"
#include "ui_janela1.h"

janela1::janela1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janela1)
{
    ui->setupUi(this);
}

janela1::~janela1()
{
    delete ui;
}

void janela1::on_btn_Calcular_clicked()
{

}


void janela1::on_btn_voltar_clicked()
{
    close();
}

