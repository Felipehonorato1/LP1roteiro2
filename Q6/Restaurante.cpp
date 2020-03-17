#include "Restaurante.h"
#include "Mesas.h"
#include "Pedido.h"

using namespace std;

    Restaurante::Restaurante(){}
    
    double Restaurante::CalculaTotal(){
        double total = 0;
        for(int i = 0 ; i< 50; i++){
            total = total + mRest[i].Conta();
        }
    return total;

    }
    void Restaurante::setMesaC(Mesas d, int pos){
        mRest[pos] = d;
    }

    void Restaurante::Adiciona(int m,Pedido c){
        mRest[m].AdicionarPedido(c);
    }