#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"


class Assalariado: public Funcionario
{
    public:
        Assalariado(string nm,int mat,double sal);
        virtual double CalculaSalario();

    private:
        double salario;
};

#endif // ASSALARIADO_H
