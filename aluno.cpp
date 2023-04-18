#include "aluno.hpp"

void Aluno::setNome(string Nome)
{
    this->Nome=Nome;
}

std::string Aluno::getNome()
{
    return this->Nome;
}

void Aluno::setRA(string RA)
{
    this->RA=RA;
}

std::string Aluno::getRA()
{
    return this->RA;
}
