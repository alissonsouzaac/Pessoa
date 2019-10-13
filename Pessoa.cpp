#include "Pessoa.h"

Pessoa::Pessoa()
{
    nome = " ";
    idade = 0;
    telefone = 0;
}

std::string Pessoa::getNome()
{
    return this->nome;
}

int Pessoa::getIdade()
{
    return this->idade;
}

int Pessoa::getTelefone()
{
    return this->telefone;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

void Pessoa::setTelefone(int t)
{
    telefone = t;
}
