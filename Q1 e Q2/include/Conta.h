#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <iostream>
#include "SaldoNaoDisponivelException.h"

using namespace std;


class Conta: public IConta
{
    public:
        Conta(std::string name, double salario,int num,double sal);
        void sacar(double valor);
        void depositar(double valor);
        void virtual DefinirLimite();

        void setNome(std::string name);
        void setSaldo(double valor);
        void setSalario(double sal);
        void SetNumero(int num);

        double getSaldo();
        double getSalario();
        std::string getName();
        int getNumero();
        double getLimite();

    protected:
        double limite;
        double salarioMensal, saldo;

    private:
        std::string nomeCliente;
        int numeroConta;

};

#endif // CONTA_H
