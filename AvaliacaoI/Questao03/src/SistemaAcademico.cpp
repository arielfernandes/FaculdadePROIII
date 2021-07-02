#include <iostream>
#include "SistemaAcademico.h"

SistemaAcademico::SistemaAcademico()
{
}

SistemaAcademico::~SistemaAcademico()
{
}
void SistemaAcademico::menuPrincipal()
{
    int opcao = -1;
    while (opcao != 0)
    {
        cout << "*** Menu Principal ***" << endl;
        cout << "1 - Menu Alunos" << endl;
        cout << "2 - Menu Professores" << endl;
        cout << "0 - sair" << endl;
        cout << "Informe a opção desejada: " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            menuAlunos();
            break;
        case 2:
            menuProfessores();
            break;
        }
    }
    cout << "Programa encerrado" << endl;
}

void SistemaAcademico::menuAlunos()
{

    int opcao = -1;
    while (opcao != 0)
    {
        cout << "*** Menu Alunos ***" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Listar" << endl;
        cout << "3 - Excluir" << endl;
        cout << "0 - sair" << endl;
        cout << "Informe a opção desejada: " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1: cadastrarAlunos();
            break;
        case 2: listarAlunos();
            break;
        case 3: excluirAlunos();
            break;
        }
    }
}
void SistemaAcademico::cadastrarAlunos()
{
    Alunos *novoAluno = new Alunos();
    novoAluno->cadastrarDados();
    alunos.push_back(novoAluno);
}
void SistemaAcademico::listarAlunos()
{
    for (size_t i = 0; i < alunos.size(); i++)
    {
        cout << "Posição: " << i << endl;
        alunos[i]->imprimirDados();
    }
    
}
void SistemaAcademico::excluirAlunos()
{
    cout << "Relação de Alunos: " << endl;
    listarAlunos();
    int posicao;
    cout << "Informe a posicao a excluir: " << endl;
    cin >> posicao;
    alunos.erase(alunos.begin() + posicao);
}
void SistemaAcademico::menuProfessores()
{

    int opcao = -1;
    while (opcao != 0)
    {
        cout << "*** Menu Professores ***" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Listar" << endl;
        cout << "3 - Excluir" << endl;
        cout << "0 - sair" << endl;
        cout << "Informe a opção desejada: " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1: cadastrarProfessores();
            break;
        case 2: listarProfessores();
            break;
        case 3: excluirProfessores();
            break;
        }
    }
}

void SistemaAcademico::cadastrarProfessores()
{
    Professores *novoProfessor = new Professores();
    novoProfessor->cadastrarDados();
    professores.push_back(novoProfessor);
}

void SistemaAcademico::listarProfessores()
{
     for (size_t i = 0; i < professores.size(); i++)
    {
        cout << "Posição: " << i << endl;
        professores[i]->imprimirDados();
    }
    
}
void SistemaAcademico::excluirProfessores()
{
    cout << "Relação de Professores: " << endl;
    listarProfessores();
    int posicao;
    cout << "Informe a posicao a excluir: " << endl;
    cin >> posicao;
    professores.erase(professores.begin() + posicao);
}