#ifndef SISTEMAACADEMICO_H
#define SISTEMAACADEMICO_H
#include "DadosUsuario.h"
#include <vector>

class SistemaAcademico
{

public:
    SistemaAcademico();
    virtual ~SistemaAcademico();
    void menuPrincipal();
    void incluirUsuario(int op);
    void excluirUsuario();
    void listarUsuario(int op);

protected:
private:
    vector<DadosUsuario*> dados;    
};

#endif