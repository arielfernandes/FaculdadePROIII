#ifndef SISTEMAACADEMICO_H
#define SISTEMAACADEMICO_H
#include "Alunos.h"
#include "Professores.h"
#include <vector>

class SistemaAcademico
{

public:
    SistemaAcademico();
    virtual ~SistemaAcademico();
    void menuPrincipal();
    void menuAlunos();
    void cadastrarAlunos();
    void listarAlunos();
    void excluirAlunos();

    void menuProfessores();
    void cadastrarProfessores();
    void listarProfessores();
    void excluirProfessores();

protected:
private:
    //vector<DadosUsuario *> dados;
    vector<Professores *> professores;
    vector<Alunos *> alunos;
};

#endif