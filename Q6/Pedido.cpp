#include "Pedido.h"

using namespace std;

    Pedido::Pedido(){
        descricao = "";
        precoUnitario = 0;
        quantidade = 0;
    }

    Pedido::Pedido(string d,double p, int q){
        descricao = d;
        precoUnitario = p;
        quantidade = q;
    }

    double Pedido::getValorPedido(){
        return precoUnitario * quantidade * 1.0 ;
    }

    string Pedido::getDescricao(){
        return descricao;
    }
    double Pedido::getPreco(){
        return precoUnitario;
    }
    int Pedido::getQuantidade(){
        return quantidade;
    }
