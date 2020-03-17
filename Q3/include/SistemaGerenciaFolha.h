#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include <iostream>
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"
#define N 50

using namespace std;


class SistemaGerenciaFolha{
    public:
        SistemaGerenciaFolha(double orcs);
        void setFuncionarios(Funcionario *d);
        double CalculaTotal();
        double ConsultaSalarioFuncionario(string nm);


    private:
    int cont;
    double orcamento;
    Funcionario *funcionarios[];

};

#endif // SISTEMAGERENCIAFOLHA_H
