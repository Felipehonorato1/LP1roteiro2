#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "SistemaGerenciaFolha.h"
#include "OrcamentoEstouradoException.h"
#include "Horista.h"
#include "FuncionarioNaoExisteException.h"
#include "exception"

using namespace std;

int main()
{
    Assalariado *l =  new Assalariado("Felipe",333,1300);
    cout << l->CalculaSalario() << endl;
    Horista *d = new Horista("Honorato",13,1000000,100000);

    SistemaGerenciaFolha *sys = new SistemaGerenciaFolha(1900);

    sys->setFuncionarios(l);
    sys->setFuncionarios(d);
    try{
        sys->CalculaTotal();
    }
    catch(OrcamentoEstouradoException e){
        cout << "Bombou o orcamento exception lançada e captura" << endl;
    }

    try{
        sys->ConsultaSalarioFuncionario("dudu");
    }catch(FuncionarioNaoExisteException){
        cout << "Nao achou o funcionario exception lançada e capturada" << endl;
    }
//blc$FF01K
    return 0;
}
