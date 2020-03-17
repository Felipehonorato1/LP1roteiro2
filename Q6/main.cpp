#include <iostream>
#include "Mesas.h"
#include "Pedido.h"
#include "Restaurante.h"

using namespace std;

int main(){
    Mesas mp;
    Restaurante aratama;
    Pedido p1 = Pedido("Cerveja",10,1);
    Pedido p2 = Pedido("Torresmo",10,1);
    int itermesa = 0;
    int num;    
    mp.AdicionarPedido(p1);
    mp.AdicionarPedido(p2);
    cout << "\n\nMESA 1:\n" << mp.RMesa() << endl;
    cout <<"Total mesa 1: "<< mp.Conta() << endl;
    aratama.setMesaC(mp,itermesa);
    itermesa++;

    Mesas md;
    Pedido p3 = Pedido("Batata frita",10,1);
    Pedido p4 = Pedido("Refrigerante",5,2);

    md.AdicionarPedido(p3);
    md.AdicionarPedido(p4);
    cout << "\n\nMESA 2:\n"<<md.RMesa() << endl;
    cout << "Total mesa 2: " << md.Conta() << endl;
    aratama.setMesaC(md,itermesa);
    itermesa++;
 
    cout << "Total aratama: " << aratama.CalculaTotal() << endl;
    

    
    return 0;
}