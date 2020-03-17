#ifndef RESTAURANTE_H
#define RESTAURANTE_H 
#include "Pedido.h"
#include "Mesas.h"


class Restaurante{
    public:
    Restaurante();
    double CalculaTotal();
    void setMesaC(Mesas d, int pos);
    void Adiciona(int m,Pedido c);

    private:
    Mesas mRest[50];
};

#endif