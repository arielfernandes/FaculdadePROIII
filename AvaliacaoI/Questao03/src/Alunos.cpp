#include "Alunos.h"

Alunos::Alunos()
{
}

Alunos::~Alunos()
{
}
void Alunos::setCurso(string curso){
    this->curso = curso;
}
void Alunos::setMatricula(int matricula){
    this->matricula = matricula;
}

int Alunos::getMatricula(){
    return matricula;
}
string Alunos::getCurso(){
    return curso;
}