#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class Nodo
{
    public:
        string dato;
        Nodo *sig;

        Nodo(string,Nodo*);
        Nodo();

    protected:

    private:
};

#endif // NODO_H
