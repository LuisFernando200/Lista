#include "Nodo.h"
using namespace std;
Nodo::Nodo()
{
    dato="";
    sig=nullptr;
    //ctor
}
Nodo::Nodo(string dato,Nodo *sig)
{
    this->dato=dato;
    this->sig=sig;
}
