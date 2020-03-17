#ifndef HORISTA_H
#define HORISTA_H
#include <iostream>
#include "Funcionario.h"
using namespace std;

class Horista: public Funcionario
{
    public:
        Horista(string nm,int mat, double salHora, double hs);
        virtual double CalculaSalario();

    protected:

    private:
        double salarioHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
