#include "TestaValidaNumero.h"

#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}

void TestaValidaNumero::validaNumero(int num){
    if(num <= 0){
        ValorAbaixoException e;
        throw e;

    }
    if(num > 100 && num < 1000){
        ValorAcimaException e2;
        throw e2;
    }

    if(num > 1000){
        ValorMuitoAcimaException e3;
        throw e3;

    }
}
