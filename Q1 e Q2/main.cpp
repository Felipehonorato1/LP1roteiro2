#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta *c1 = new Conta("Felipe",1200,157,1200);
    c1->DefinirLimite();
    ContaEspecial *c2 = new ContaEspecial(1200,155,1200,"Felipe Especial");
    c2->DefinirLimite();
    cout << endl << "CONTA NORMAL:" << endl;
    cout << "Nome: " << c1->getName() << endl << "Saldo: " << c1->getSaldo() << endl << "Salario: " << c1->getSalario() << endl << "Limite: " << c1->getLimite();
    cout << endl <<"\nCONTA ESPECIAL:" << endl;
    cout << "Nome: " << c2->getName() << endl << "Saldo: " << c2->getSaldo() << endl << "Salario: " << c2->getSalario() << endl << "Limite: " << c2->getLimite();
    c2->depositar(2600);
    c2->sacar(2800);
    cout << "\nNOVO SALDO: " << c2->getSaldo() << endl;


    try{
    cout << "\nSACANDO 500 DA CONTA C1 QUANDO O SALDO EH 1000" <<endl;
    c2->sacar(500);
    cout << "CONSEGUIU!" << endl;
    cout << "NOVO SALDO: " << c2->getSaldo() << endl;
    cout << "\n\nTENTANDO SACAR 1600 QUANDO O SALDO EH 1200 NA CONTA C1" << endl;
    c1->sacar(1600);
    }catch(SaldoNaoDisponivelException e){
    cout << "SALDO INDISPONIVEL EXCEPTION" << endl;
    }

    return 0;
}
