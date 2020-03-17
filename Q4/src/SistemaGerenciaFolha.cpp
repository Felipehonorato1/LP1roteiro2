#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"
#include <exception>
SistemaGerenciaFolha::SistemaGerenciaFolha(double orcs)
{
    cont = 0;
    orcamento = orcs;
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *d){
funcionarios[cont] = d;
cont++;
}

double SistemaGerenciaFolha::CalculaTotal(){
    double tt = 0;
    for(int i = 0; i<cont ; i++){
            tt += funcionarios[i]->CalculaSalario();

    }
    if(tt > orcamento){
        throw OrcamentoEstouradoException();
    }
    else return tt;
}
double SistemaGerenciaFolha::ConsultaSalarioFuncionario(string nm){
    int found = 0;
    for(int i =0; i<cont; i++){
            size_t achou = funcionarios[i]->getNome().find(nm);
            if(achou != string::npos){
                found++;
                cout << "Funcionario: " << funcionarios[i]->getNome() << "Salario: " << funcionarios[i]->CalculaSalario();
            }

    }
    if(found==0){
        throw FuncionarioNaoExisteException();
    }
    else{
        cout << " [" << found << "] Funcionarios encontrados" << endl;
    }
}
