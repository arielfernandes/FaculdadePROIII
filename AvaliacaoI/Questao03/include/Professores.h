#ifndef PROFESSORES_H
#define PROFESSORES_H
#include "DadosUsuario.h"
//Extends DadosUsuario
class Professores : public DadosUsuario
{

public:
    Professores();
    virtual ~Professores();
    void setAnoContratacao(int ano);
    int getAnoContratacao();
    void cadastrarDados();
    void imprimirDados();

protected:
private:
    int anoDeContratacao;
};
#endif