#include "Assalariado.h"

Assalariado::Assalariado(string nm,int mat,double sal):Funcionario(nm,mat)
{
    salario = sal;
}

double Assalariado::CalculaSalario(){
return salario;
}
