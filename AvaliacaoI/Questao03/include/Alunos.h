#ifndef ALUNOS_H
#define ALUNOS_H
#include "DadosUsuario.h"

class Alunos
{

public:
    Alunos();
    virtual ~Alunos();
    void setCurso(string curso);
    void setMatricula(int matricula);

    int getMatricula();
    string getCurso();
protected:
private:
    string curso;
    int matricula;
};
#endif