#include "circuloPlano2D.h"
#include <iostream>
using namespace std;

circuloPlano2D::circuloPlano2D()
{
}

circuloPlano2D::~circuloPlano2D()
{
}

void circuloPlano2D::cadastrarDado(){
    int aux;
    cout << "Informe o raio: " << endl;
    cin >> aux;
    setRaio(aux);
    cout << "Informe a coordenada x: " << endl;
    cin >> aux;
    setX(aux);
    cout << "Informe a coordenada y: " << endl;
    cin >> aux;
    setY(aux);

}
void circuloPlano2D::imprimirDados(){
    cout << "Raio..........:" << getRaio() << endl;
    cout << "Coordenada X..:" << getX() << endl;
    cout << "Coordenada Y..:" << getY() << endl;
}

void circuloPlano2D::setRaio(int raio)
{
    this->raio = raio;
}
void circuloPlano2D::setX(int x)
{
    this->x = x;
}
void circuloPlano2D::setY(int y)
{
    this->y = y;
}
int circuloPlano2D::getRaio()
{
    return raio;
}
int circuloPlano2D::getX()
{
    return x;
}
int circuloPlano2D::getY()
{
    return y;
}
