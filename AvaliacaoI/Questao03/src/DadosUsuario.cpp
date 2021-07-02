#include "DadosUsuario.h"
#include "Professores.h"
#include "Alunos.h"

DadosUsuario::DadosUsuario()
{
}

DadosUsuario::~DadosUsuario()
{
}
void DadosUsuario::cadastradarDados()
{
    int aux;
    string str;
    cout << "Informe o nome: " << endl;
    cin >> str; setNome(str);
    cout << "Informe o CPF (informe o cpf sem . e - ): " << endl;
    cin >> aux;
    setCpf(aux);
    cout << "informe o ano de nascimento (Ex.: 1900): " << endl;
    cin >> aux;
    setDataNasc(aux);
}
void DadosUsuario::imprimirDados()
{

    cout << "Nome: " << getNome() << endl;
    cout << "CPF: " << getCpf() << endl;
    cout << "Ano de Nasc: " << getData() << endl;
}

void DadosUsuario::setNome(string nome)
{
    this->nome = nome;
}
void DadosUsuario::setAno(int ano)
{
    this->ano = ano;
}
void DadosUsuario::setCpf(int cpf)
{
    this->cpf = cpf;
}
void DadosUsuario::setDataNasc(int data)
{
    this->dataNasc = data;
}

string DadosUsuario::getNome()
{
    return nome;
}
int DadosUsuario::getAno()
{
    return ano;
}
int DadosUsuario::getCpf()
{
    return cpf;
}
int DadosUsuario::getData()
{
    return dataNasc;
}
void DadosUsuario::setCodigo(int codigo)
{
    this->codigo = codigo;
}
int DadosUsuario::getCodigo()
{
    return codigo;
}