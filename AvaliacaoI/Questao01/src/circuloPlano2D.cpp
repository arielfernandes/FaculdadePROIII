#include "circuloPlano2D.h"
#include <iostream>
using namespace std;

circuloPlano2D::circuloPlano2D()
{
}

circuloPlano2D::~circuloPlano2D()
{
}

void circuloPlano2D::setRaio(int raio){
    this-> raio = raio;
}
void circuloPlano2D::setX(int x){
    this-> x = x;
}
void circuloPlano2D::setY(int y){
    this-> y = y;
}
int circuloPlano2D::getRaio(){
    return raio;
}
int circuloPlano2D::getX(){
    return x;
}
int circuloPlano2D::getY(){
    return y;
}

void circuloPlano2D::transladar(int dx, int dy){
    int tx = x + dx;
    int ty = y + dy;

    cout << "*** Translado ***" << endl;
    cout << "Raio.....: " << raio << endl;
    cout << "Posição X: " << tx << endl;
    cout << "Posição Y: " << ty << endl;
}