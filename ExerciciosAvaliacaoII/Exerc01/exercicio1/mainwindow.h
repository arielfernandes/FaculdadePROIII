#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <locale>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setNotasEntrada(double teste);
    double getNotasEntrada();
    int getQuantidadeNotas();

private slots:
    void on_btnAdicionar_clicked();
    void on_btn_calcular_clicked();

private:
    Ui::MainWindow *ui;
    QVector<double> notasEntrada;
};
#endif // MAINWINDOW_H
