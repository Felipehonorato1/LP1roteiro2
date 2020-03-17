#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial: public Conta
{
    public:

        ContaEspecial(double salario, int num, double saldo, std::string name);
        void DefinirLimite();
    protected:

    private:
};

#endif // CONTAESPECIAL_H
