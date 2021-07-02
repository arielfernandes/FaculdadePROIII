#include <circuloPlano2D.h>
#include <iostream>
using namespace std;
int main() {
    circuloPlano2D plano;
    int aux, dx, dy;
    cout << "Informe o raio: " << endl;
    cin >> aux;
    plano.setRaio(aux);
    cout << "Informe a coordenada x: " << endl;
    cin >> aux;
    plano.setX(aux);
    cout << "Informe a coordenada y: " << endl;
    cin >> aux;
    plano.setY(aux);
    cout << "*** Transladar circulo ***" << endl;
    cout << "Informe a nova coordenada x: " << endl;
    cin >> dx;
    cout << "informe a nova coordenada y: " << endl;
    cin >> dy;
    plano.transladar(dx, dy);

return 0;

}