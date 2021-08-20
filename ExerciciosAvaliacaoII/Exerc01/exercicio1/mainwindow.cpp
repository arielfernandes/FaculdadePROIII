#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <numeric>
#include <QValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnAdicionar_clicked()
{
    int cont = 0;
    QVector<double> arrayNotas;

    //Permite apenas entrada de valores númericos
    ui->lineEdit_nota->setValidator(new QDoubleValidator(0.00, 100.00, 2, this));

            QString notaEntrada = ui->lineEdit_nota->text();

    for(int i = 0; i < notaEntrada.length(); i++){
        if(notaEntrada[i] == ',')
            notaEntrada[i] = '.';
    }

    double nota = notaEntrada.toDouble();
    if(!nota){
        QMessageBox::warning(this, "Erro", "Valor inserido inválido");
        ui->lineEdit_nota->clear();
        ui->lineEdit_nota->setFocus();
    }else {

        setNotasEntrada(nota);
        ui->lineEdit_nota->clear();
        ui->lineEdit_nota->setFocus();

        QString n = QString::number(nota);



        ui->tw_notas->setColumnCount(2);

        ui->tw_notas->insertRow(cont);
        ui->tw_notas->setItem(cont,0,new QTableWidgetItem("Prova"));
        ui->tw_notas->setItem(cont,1,new QTableWidgetItem(n));
        ui->tw_notas->setRowHeight(cont, 20);
        cont++;

        updatesEnabled();
        QString qtd = QString::number(getQuantidadeNotas());
        ui->lineEdit_qtdAvaliacao->setText(qtd);

        QString mediaFinal = QString::number(getNotasEntrada()/getQuantidadeNotas());
        ui->lineEdit_media->setText(mediaFinal);

    }

}

void MainWindow::setNotasEntrada(double nota){
    notasEntrada.push_back(nota);
}

double MainWindow::getNotasEntrada(){
    double total;
    for(int i = 0; i < notasEntrada.size(); i++) {
        total += notasEntrada[i];
    }
    return total;
}

int MainWindow::getQuantidadeNotas(){
    return notasEntrada.size();
}
