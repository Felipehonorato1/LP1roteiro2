#include "Comissionado.h"

Comissionado::Comissionado(string nm,int mat, double vSemanais, double pc):Funcionario(nm,mat){
    porcentual = pc;
    vendasSemanais = vSemanais;
}
double Comissionado::CalculaSalario(){
    return vendasSemanais*(porcentual/100);
}
