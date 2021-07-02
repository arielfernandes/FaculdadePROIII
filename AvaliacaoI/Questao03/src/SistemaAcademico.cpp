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
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        }
    }
    cout << "Programa encerrado" << endl;
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
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        }
    }
    cout << "Programa encerrado" << endl;
}