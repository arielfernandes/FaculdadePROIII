#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionJanela1_triggered();

    void on_actionJanela2_triggered();

    void on_actionSair_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
