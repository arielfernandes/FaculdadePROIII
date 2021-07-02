#include "Professores.h"

Professores::Professores()
{
}

Professores::~Professores()
{
}
void Professores::setAnoContratacao(int ano)
{
    this->anoDeContratacao = ano;
}
int Professores::getAnoContratacao()
{
    return anoDeContratacao;
}
void Professores::cadastrarDados()
{
    cout << "*** Cadastro Professor ****" << endl;
    //Chamando a classe base, para acessar o cadastro "Geral"
    DadosUsuario::cadastradarDados();
    cout << "Informe o ano de contratação: " << endl;
    cin >> this->anoDeContratacao;
}

void Professores::imprimirDados()
{
    //Chamando a classe base, para acessar o imprimir "dados Gerais"
    DadosUsuario::imprimirDados();
    cout << "Ano de contradação: " << getAnoContratacao() << endl;
}
