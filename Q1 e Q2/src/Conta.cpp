#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

Conta::Conta(std::string name, double salario,int num,double sal)
{
    nomeCliente = name;
    salarioMensal = salario;
    numeroConta = num;
    saldo = sal;
}

void Conta::setNome(std::string name){
    nomeCliente = name;
}

void Conta::setSaldo(double valor){
    saldo = valor;
}
void Conta::setSalario(double sal){
    salarioMensal = sal;
}
void Conta::SetNumero(int num){
    numeroConta = num;
}

double Conta::getSaldo(){
    return saldo;

}
double Conta::getSalario(){
    return salarioMensal;
}
std::string Conta::getName(){
    return nomeCliente;
}
int Conta::getNumero(){
    return numeroConta;
}
double Conta::getLimite(){
    return limite;
}

void Conta::sacar(double valor){
    if(valor <= saldo) saldo = saldo - valor;
    else{
    SaldoNaoDisponivelException e;
    throw e;

    }
}
void Conta::depositar(double valor){
    saldo = saldo + valor;
}
void Conta::DefinirLimite(){
    limite = salarioMensal *2;
}







