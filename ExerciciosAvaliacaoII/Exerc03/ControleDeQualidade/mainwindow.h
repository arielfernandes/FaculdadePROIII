#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
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
    void setContador();
    int getContador();
private slots:
    void on_btn_registrar_clicked();

private:
    Ui::MainWindow *ui;
    //QVector<int> contador;
    int contador = 0;

};
#endif // MAINWINDOW_H
