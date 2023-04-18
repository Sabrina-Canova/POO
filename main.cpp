#include <iostream>
#include <vector>

#include "disciplina.hpp"
#include "professor.hpp"
#include "aluno.hpp"
#include "disciplina.cpp"
#include "aluno.cpp"
#include "professor.cpp"

using namespace std;

int main()
{

    Aluno aluno1;
    Aluno aluno2;
    Aluno aluno3;

    aluno1.setNome("Sabrina");
    aluno2.setNome("Luan");
    aluno3.setNome("Alana");

    aluno1.setRA("234824");
    aluno2.setRA("472342");
    aluno3.setRA("2112583");

    Professor professor1;
    professor1.setNome("Leandro");
    professor1.setRP("POO");

    Disciplina disciplina1;
    disciplina1.setCodigo("CP44E");
    disciplina1.setNome("POO");
    disciplina1.setProfessor(professor1);
    disciplina1.AddAluno(aluno1);
    disciplina1.AddAluno(aluno2);
    disciplina1.AddAluno(aluno3);

    cout << "Professor: " << professor1.getNome() << endl;
    cout << "Disciplina: " << disciplina1.getNome() << endl;
    cout << "Codigo: " << disciplina1.getCodigo() << endl;

    disciplina1.listaalunos();

    return 0;
}
