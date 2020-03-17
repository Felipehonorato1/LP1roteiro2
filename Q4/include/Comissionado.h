#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"
#include <iostream>
using namespace std;


class Comissionado: public Funcionario
{
    public:
        Comissionado(string nm,int mat, double vSemanais, double pc);
        virtual double CalculaSalario();
    protected:

    private:
        double vendasSemanais, porcentual;
};

#endif // COMISSIONADO_H
