#ifndef SISTEMADEARMAZENAMENTO_H
#define SISTEMADEARMAZENAMENTO_H
#include "circuloPlano2D.h"
#include <vector>

using namespace std;

class SistemaArmazenamento
{

public:
    SistemaArmazenamento();
    virtual ~SistemaArmazenamento();
    void menuPrincipal();
    void incluirCirculo();
    void listarCirculo();
    void excluirCiruclo();
    void transladar();

protected:
private:
//Criando vetor de armazenamento
    vector<circuloPlano2D *> circulos;
};

#endif