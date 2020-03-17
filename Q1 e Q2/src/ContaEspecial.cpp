#include "ContaEspecial.h"
#include "Conta.h"

ContaEspecial::ContaEspecial(double salario, int num, double saldo, std::string name):Conta(name,salario,num,saldo)
{

}

void ContaEspecial::DefinirLimite(){
    limite = salarioMensal * 3;
}
