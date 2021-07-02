#ifndef ALUNOS_H
#define ALUNOS_H
#include "DadosUsuario.h"

//Extends DadosUsuario
class Alunos:public DadosUsuario
{

public:
    Alunos();
    virtual ~Alunos();
    void setCurso(string curso);
    void setMatricula(int matricula);

    int getMatricula();
    string getCurso();

    void cadastrarDados();
    void imprimirDados();

protected:
private:
    string curso;
    int matricula;
};
#endif