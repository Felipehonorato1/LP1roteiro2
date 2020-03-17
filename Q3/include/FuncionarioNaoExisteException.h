#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <iostream>
#include <exception>
using namespace std;


class FuncionarioNaoExisteException: public std::exception
{
    public:
        FuncionarioNaoExisteException();

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
