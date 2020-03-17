#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"


using namespace std;

int main()
{
    TestaValidaNumero a;
    try{
    a.validaNumero(-120);
    }catch(ValorAbaixoException e){
    cout << "VALOR ABAIXO EXCEPTION" << endl;
    }
    catch(ValorAcimaException e2){
    cout << "VALOR ACIMA EXCEPTION" << endl;
    }catch(ValorMuitoAcimaException e3){
    cout << "VALOR MUITO ACIMA EXCEPTION" << endl;
    }



    return 0;
}
