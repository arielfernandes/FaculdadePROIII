#ifndef JANELA2_H
#define JANELA2_H

#include <QDialog>

namespace Ui {
class janela2;
}

class janela2 : public QDialog
{
    Q_OBJECT

public:
    explicit janela2(QWidget *parent = nullptr);
    ~janela2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::janela2 *ui;
};

#endif // JANELA2_H
