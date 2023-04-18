#include "disciplina.hpp"

void Disciplina::setNome(string Nome)
{
    this->Nome=Nome;
}

std::string Disciplina::getNome()
{
    return this->Nome;
}

void Disciplina::setCodigo(string Codigo)
{
    this->Codigo=Codigo;
}

std::string Disciplina::getCodigo()
{
    return this->Codigo;
}

void Disciplina::setProfessor(Professor professor)
{
    this->professor = professor;
}

Professor Disciplina::getProfessor()
{
    return this->professor;
}

void Disciplina::AddAluno(Aluno aluno)
{
    alunos.push_back(aluno);
}

vector <Aluno> Disciplina::getAluno()
{
    return this->alunos;
}

void Disciplina::listaalunos()
{
    for(auto aluno : alunos)
    {
        cout << aluno.getNome() << " - " <<aluno.getRA() << endl;
    }
}


