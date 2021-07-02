#ifndef DADOSUSUARIO_H
#define DADOSUSUARIO_H
#include <string.h>
#include <iostream>
using namespace std;
//Classe base
class DadosUsuario
{

public:
    DadosUsuario();
    virtual ~DadosUsuario();
    void imprimirDados();
    void cadastradarDados();

    void setNome(string nome);
    void setAno(int ano);
    void setCpf(int cpf);
    void setDataNasc(int data);

    string getNome();
    int getAno();
    int getCpf();
    int getData();
    int getCodigo();

protected:
private:
    string nome;
    int cpf;
    int ano;
    int dataNasc;
    int codigo;
};
#endif