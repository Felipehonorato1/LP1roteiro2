#ifndef MESAS_H
#define MESAS_H
#include "Pedido.h"
#include <iostream>

using namespace std;

class Mesas{
    public:
    Mesas();
    

    void AdicionarPedido(Pedido novo);
    double Conta();
    string RMesa();
    void ZeraPedidos();

    private: 
    Pedido p[50];
    int nPedidos;

};



#endif