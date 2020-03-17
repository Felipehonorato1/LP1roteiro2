#include "Mesas.h"
#include "Pedido.h"

Mesas::Mesas(){
    nPedidos = 0;
}

void Mesas::AdicionarPedido(Pedido novo){
    p[nPedidos] = novo;
    nPedidos++;
}

string Mesas::RMesa(){
    string ax; 
    for(int i = 0; i < nPedidos ; i++){
        if(p[i].getQuantidade() != 0 )    ax = ax + "Nome: " + p[i].getDescricao() + " Quantidade: " + to_string(p[i].getQuantidade())+" Preço: " + to_string(p[i].getPreco()) +" Valor: "+ to_string(p[i].getValorPedido()) + "\n";
    }

    return ax;
}

double Mesas::Conta(){
    double total = 0;
    for(int i =0; i< nPedidos ; i++){
    total = total+ p[i].getValorPedido();
    }
    return total;
}

void Mesas::ZeraPedidos(){
    for(int i =0; i< nPedidos; i++){
        p[i] = Pedido();
    }

}