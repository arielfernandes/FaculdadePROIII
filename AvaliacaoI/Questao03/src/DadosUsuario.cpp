#include "DadosUsuario.h"
#include "Professores.h"
#include "Alunos.h"

DadosUsuario::DadosUsuario()
{
}

DadosUsuario::~DadosUsuario()
{
}
void DadosUsuario::cadastradarDados(int op)
{
    int aux;
    string str;

    if (op == 2)
    {

        Professores p;
        cout << "*** Cadastro Professor ****" << endl;
        cout << "Informe o ano de contratação: " << endl;
        cin >> aux;
        p.setAnoContratacao(aux);
        setCodigo(op);
    }
    else
    {
        Alunos a;
        cout << "*** Cadastro Aluno ****" << endl;
        cout << "Informe o curso: " << endl;
        cin >> str;
        cout << "Informe a matricula: " << endl;
        cin >> aux;
        a.setCurso(str);
        a.setMatricula(aux);
        setCodigo(op);
    }

    cout << "Informe o nome: " << endl;
    cin >> str;
    setNome(str);
    cout << "Informe o CPF (informe o cpf sem . e - ): " << endl;
    cin >> aux;
    setCpf(aux);
    cout << "informe o ano de nascimento (Ex.: 1900): " << endl;
    cin >> aux;
    setDataNasc(aux);
}
void DadosUsuario::imprimirDados(int op)
{
    if (op == 1)
    {
        Professores p;
        cout << "*** Lista de Professores ***" << endl;
        cout << "Ano de contratação: " << p.getAnoContratacao() << endl;
    }
    else
    {
        Alunos a;
        cout << "*** Lista de Alunos ***" << endl;
        cout << "Curso: " << a.getCurso() << endl;
        cout << "Matricula: " << a.getMatricula() << endl;
    }
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