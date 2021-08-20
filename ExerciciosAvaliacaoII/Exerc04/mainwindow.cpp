#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "janela1.h"
#include "janela2.h"

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


void MainWindow::on_actionJanela1_triggered()
{
    janela1 janela;
    janela.setModal(true);
    janela.exec();


}


void MainWindow::on_actionJanela2_triggered()
{
    janela2 janela;
    janela.setModal(true);
    janela.exec();
}


void MainWindow::on_actionSair_triggered()
{
    close();
}

