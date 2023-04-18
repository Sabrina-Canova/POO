#include "professor.hpp"

void Professor::setNome(string Nome)
{
    this->Nome=Nome;
}

std::string Professor::getNome()
{
    return this->Nome;
}

void Professor::setRP(string RP)
{
    this->RP=RP;
}

std::string Professor::getRP()
{
    return this->RP;
}
