#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{

private:
    std::string nome;
    int idade;
    int telefone;
public:
    std::string getNome();
    int getIdade();
    int getTelefone();
    Pessoa();
    void setNome(std::string n);
    void setIdade(int i);
    void setTelefone(int t);
};

#endif
