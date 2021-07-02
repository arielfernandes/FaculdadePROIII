#ifndef DADOSUSUARIO_H
#define DADOSUSUARIO_H
#include <string.h>
#include <iostream>
using namespace std;

class DadosUsuario
{

public:
    DadosUsuario();
    virtual ~DadosUsuario();
    void imprimirDados(int op);
    void cadastradarDados(int op);
    void setNome(string nome);
    void setAno(int ano);
    void setCpf(int cpf);
    void setDataNasc(int data);
    void setCodigo(int codigo);

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