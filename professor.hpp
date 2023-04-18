#ifndef PROFESSOR_HPP_INCLUDED
#define PROFESSOR_HPP_INCLUDED

using namespace std;

#include <iostream>
#include <vector>
#include <string>

class Professor
{
    private:
        string Nome;
        string RP; //REGISTRO PROFESSOR

    public:

        void setNome(string Nome);
        string getNome();

        void setRP(string RP);
        string getRP();

};
#endif /* PROFESSOR_HPP */
