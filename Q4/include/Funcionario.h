#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

using namespace std;

class Funcionario
{
    public:
        Funcionario(string nm,int mat);
        void setMatricula(int mat);
        void setNome(string nm);
        string getNome();
        int getMatricula();
        virtual double CalculaSalario();

    protected:


    private:
        string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
