#ifndef DISCIPLINA_HPP_INCLUDED
#define DISCIPLINA_HPP_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include "professor.hpp"
#include "aluno.hpp"

class Disciplina
{
    private:
        string Nome;
        string Codigo;
        Professor professor;
        vector <Aluno> alunos;

    public:
        void setNome(string Nome);
        string getNome();

        void setCodigo(string Codigo);
        string getCodigo();

        void setProfessor(Professor professor);
        Professor getProfessor();

        void AddAluno(Aluno aluno);
        vector <Aluno> getAluno();

        void listaalunos();

        void removeAluno(const Aluno& aluno);

        int getQuantidadeAlunos() const;
};


#endif // DISCIPLINA_HPP_INCLUDED
