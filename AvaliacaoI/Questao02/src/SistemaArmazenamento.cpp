#include <iostream>
#include "SistemaArmazenamento.h"

using namespace std;

SistemaArmazenamento::SistemaArmazenamento()
{
}

SistemaArmazenamento::~SistemaArmazenamento()
{
}
void SistemaArmazenamento::menuPrincipal()
{
    int opcao = -1;
    while (opcao != 0)
    {
        cout << "*** Menu Principal ***" << endl;
        cout << "1 - Incluir" << endl;
        cout << "2 - Listar" << endl;
        cout << "3 - Excluir" << endl;
        cout << "4 - Transladar" << endl;
        cout << "0 - sair" << endl;
        cout << "Informe a opção desejada: " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            incluirCirculo();
            break;
        case 2:
            listarCirculo();
            break;
        case 3:
            excluirCiruclo();
            break;
        case 4:
            transladar();
            break;
        }
    }
}
void SistemaArmazenamento::incluirCirculo()
{
    //criando novo objeto
    circuloPlano2D *novoCirculo = new circuloPlano2D;
    novoCirculo->cadastrarDado();
    //inserindo objeto criado no vetor cirucloPlano2D
    circulos.push_back(novoCirculo);
}
void SistemaArmazenamento::listarCirculo()
{
    //Chama o vetor o lista as informações armazenadas
    for (size_t i = 0; i < circulos.size(); i++)
    {
        cout << "Posição: " << i << endl;
        circulos[i]->imprimirDados();
    }
}
void SistemaArmazenamento::excluirCiruclo()
{
    int posicao;
    cout << "Circulos cadastrados: " << endl;
    listarCirculo();
    cout << "Informe a posição a excluir: " << endl;
    cin >> posicao;
    circulos.erase(circulos.begin() + posicao);
}
void SistemaArmazenamento::transladar()
{
    int posicao, dx, dy;
    cout << "Circulos cadastrados: " << endl;
    listarCirculo();
    cout << "Informe a posição desejada: " << endl;
    cin >> posicao;

    cout << "Informe a nova coordenada em x: " << endl;
    cin >> dx;
    cout << "Informe a nova coordenada em y: " << endl;
    cin >> dy;

    int x = circulos[posicao]->getX() + dx;
    circulos[posicao]->setX(x);
    int y = circulos[posicao]->getY() + dy;
    circulos[posicao]->setY(y);
}