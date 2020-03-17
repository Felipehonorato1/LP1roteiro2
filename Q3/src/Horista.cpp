#include "Horista.h"

Horista::Horista(string nm,int mat, double salHora, double hs):Funcionario(nm,mat)
{
    salarioHora = salHora;
    horasTrabalhadas = hs;
}

double Horista::CalculaSalario(){
    return salarioHora * horasTrabalhadas;
}
