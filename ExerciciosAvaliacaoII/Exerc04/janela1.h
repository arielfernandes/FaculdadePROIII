#ifndef JANELA1_H
#define JANELA1_H

#include <QDialog>

namespace Ui {
class janela1;
}

class janela1 : public QDialog
{
    Q_OBJECT

public:
    explicit janela1(QWidget *parent = nullptr);
    ~janela1();

private slots:
    void on_btn_Calcular_clicked();

    void on_btn_voltar_clicked();

private:
    Ui::janela1 *ui;
};

#endif // JANELA1_H
