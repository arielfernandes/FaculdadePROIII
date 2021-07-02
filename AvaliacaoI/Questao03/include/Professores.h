#ifndef PROFESSORES_H
#define PROFESSORES_H
#include "DadosUsuario.h"

class Professores {

public:
    Professores();
    virtual ~Professores();
    void setAnoContratacao(int ano);
    int getAnoContratacao();
  
    protected:
    private:
    int anoDeContratacao;
};
#endif