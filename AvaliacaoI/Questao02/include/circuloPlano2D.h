#ifndef CIRCULOPLANO2D_H
#define CIRCULOPLANO2D_H


class circuloPlano2D
{

public:
    circuloPlano2D();
    ~circuloPlano2D();

    void cadastrarDado();
    void imprimirDados();

    void setRaio(int raio);
    void setX(int x);
    void setY(int y);
    int getRaio();
    int getX();
    int getY();
protected:
private:
    int x, y, raio;
};

#endif