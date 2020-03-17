#ifndef PEDIDO_H
#define PEDIDO_H

using namespace std;

#include <iostream>

class Pedido{
    public:
    Pedido();
    Pedido(string d,double p, int q);

    string getDescricao();
    double getPreco();
    int getQuantidade();   
    double getValorPedido();


    private:
    string descricao;
    double precoUnitario;
    int quantidade;

};





#endif