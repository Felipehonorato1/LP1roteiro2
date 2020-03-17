#include "Funcionario.h"

Funcionario::Funcionario(string nm,int mat){
    nome = nm;
    matricula = mat;
}

double Funcionario::CalculaSalario(){
//
}
void Funcionario::setMatricula(int mat){
    matricula = mat;
}
void Funcionario::setNome(string nm){
    nome = nm;
}
string Funcionario::getNome(){
    return nome;
}
int Funcionario::getMatricula(){
    return matricula;
}
