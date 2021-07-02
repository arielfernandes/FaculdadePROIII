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
        cout << "1 - Cadastrar Aluno" << endl;
        cout << "2 - Cadastrar Professor" << endl;
        cout << "3 - Listar Professores" << endl;
        cout << "4 - Listar Alunos" << endl;
        cout << "5 - Excluir" << endl;
        cout << "0 - sair" << endl;
        cout << "Informe a opção desejada: " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        case 2:
            incluirUsuario(opcao);
            break;
        case 3:
        case 4:
            listarUsuario(opcao);
            break;
        case 5:
            excluirUsuario();
            break;
        }
    }
}
void SistemaAcademico::incluirUsuario(int op)
{
    DadosUsuario *novoCadastro = new DadosUsuario;
    novoCadastro->cadastradarDados(op);
    dados.push_back(novoCadastro);
}
void SistemaAcademico::excluirUsuario()
{
    int aux;
    cout << "Cadastrados: " << endl;
    cout << "1 - Professor | Aluno - 2" << endl;
    cin >> aux;
    listarUsuario(aux);
    cout << "Informe a posição a excluir: " << endl;
    cin >> aux;
    dados.erase(dados.begin() + aux); 
}
void SistemaAcademico::listarUsuario(int op)
{
    for (size_t i = 0; i < dados.size(); i++)
    {
        cout << "Posição: " << i << endl;
        dados[i]->imprimirDados(op);
    }
}