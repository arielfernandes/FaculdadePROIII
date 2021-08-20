#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDesktopWidget>
#include <QCoreApplication>
#include <QHeaderView>
#include <QApplication>
#include <QMessageBox>
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Validando o tipo de interação com o usuario.
    //neste caso apenas visualização do das tableWidget
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //Validando o tipo de dado a ser inserido nos campos
    ui->lineEdit_AreaIdeal->setValidator(new QIntValidator(this));
    ui->lineEdit_altura->setValidator(new QIntValidator(this));
    ui->lineEdit_codigo->setValidator(new QIntValidator(this));
    ui->lineEdit_largura->setValidator(new QIntValidator(this));
    ui->lineEdit_tolerancia->setValidator(new QIntValidator(this));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_registrar_clicked()
{
    //Pegar registro das chapas
    QString areaIdeal = ui->lineEdit_AreaIdeal->text();
    QString tolerancia = ui->lineEdit_tolerancia->text();
    QString codigo = ui->lineEdit_codigo->text();
    QString altura = ui->lineEdit_altura->text();
    QString largura = ui->lineEdit_largura->text();
    //Pegando a data local e formatando no padrão desejado
    QString data = QDateTime::currentDateTime().toString("dd/mm/yy hh:mm:ss");

    //Verificando campos vazios
    if(areaIdeal == "" || tolerancia == ""){
        QMessageBox::warning(this, "Erro", "Por favor preencha os campos");
        if(areaIdeal == "")
            ui->lineEdit_AreaIdeal->setFocus();
        else
            ui->lineEdit_tolerancia->setFocus();
    }else {
        //Calculando area total
        QString areaTotal = QString::number((largura.toUInt()*altura.toUInt()));

        //Verificando chapas (reprovadas/aprovadas)
        QString controle;
        if(areaTotal > areaIdeal+tolerancia.toInt()){ controle = "Reprovado"; setContador(); }
        else{ controle = "Aprovado"; }

        //Inserindo dados na tabela (tableWidget)
        ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
        //                                                   lina|coluna | inseri valores na coluna
        ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(codigo));
        ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(data));
        ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(largura));
        ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(altura));
        ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(areaTotal));
        ui->tableWidget->setItem( ui->tableWidget->rowCount() - 1, 5, new QTableWidgetItem(controle));

        //Pegando o total de chapas adicionas ao table
        QString qtd = QString::number(ui->tableWidget->rowCount());
        ui->lineEdit_qtdProduzido->setText(qtd);
        //Pegando o total de chapas reprovados usando o metodo getContador
        QString cont = QString::number(getContador());
        ui->lineEdit_qtdChapasReprovadas->setText(cont);

        //limpar campos do lineEdit
        ui->lineEdit_altura->clear();
        ui->lineEdit_codigo->clear();
        ui->lineEdit_largura->clear();
        //Posicionar o cursor na lineEdit codigo
        ui->lineEdit_codigo->setFocus();
    }
}
//Contador criado para solucionar problema na contagem
//dentro do metodo de click;
void MainWindow::setContador(){
    this->contador++;
}
int MainWindow::getContador(){
    return contador;
}
