#ifndef ALUNO_HPP_INCLUDED
#define ALUNO_HPP_INCLUDED

using namespace std;

#include <iostream>
#include <vector>
#include <string>

class Aluno
{
    private:
        string Nome;
        string RA;

    public:
        void setNome(string Nome);
        string getNome();

        void setRA(string RA);
        string getRA();

};


#endif // ALUNO_HPP_INCLUDED
