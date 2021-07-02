#include "Alunos.h"

Alunos::Alunos()
{
}

Alunos::~Alunos()
{
}
void Alunos::setCurso(string curso)
{
    this->curso = curso;
}
void Alunos::setMatricula(int matricula)
{
    this->matricula = matricula;
}

int Alunos::getMatricula()
{
    return matricula;
}
string Alunos::getCurso()
{
    return curso;
}
void Alunos::cadastrarDados()
{
    //Chamando a classe base, para acessar o cadastro "Geral"
    cout << "*** Cadastro Aluno ****" << endl;
    DadosUsuario::cadastradarDados();
    cout << "Informe o curso: " << endl;
    cin >> this->curso;
    cout << "Informe a matricula: " << endl;
    cin >> this->matricula;
}
void Alunos::imprimirDados()
{
    //Chamando a classe base, para acessar o imprimir "dados Gerais"
    DadosUsuario::imprimirDados();
    cout << "Curso: " << getCurso() << endl;
    cout << "Matricula: " << getMatricula() << endl;
}