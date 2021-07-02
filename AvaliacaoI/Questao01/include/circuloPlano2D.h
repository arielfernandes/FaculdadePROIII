#ifndef CIRCULOPLANO2D_H
#define CIRCULOPLANO2D_H


class circuloPlano2D
{

public:
    circuloPlano2D();
    ~circuloPlano2D();
    
    void setRaio(int raio);
    void setX(int x);
    void setY(int y);
    int getRaio();
    int getX();
    int getY();

    void transladar(int dx, int dy);

protected:
private:
    int dx, dy, x, y, raio;
};

#endif