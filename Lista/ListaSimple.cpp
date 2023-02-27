
#include "ListaSimple.h"
#include "Nodo.h"
#include<iostream>
using namespace std;

ListaSimple::ListaSimple()
{
    h=nullptr;
    //ctor
}

ListaSimple::ListaSimple(Nodo *ptr)
{
    h=ptr;
}


void ListaSimple::insertarfinal(string dato)
{
    Nodo *tmp=new Nodo(dato,nullptr);
    Nodo *aux=h;

    if(h==nullptr)
    {
        h=tmp;
    }
    else
    {
        while(aux->sig)
        {
            aux=aux->sig;
        }
        aux->sig=tmp;
    }
}

void ListaSimple::mostrar()
{
    Nodo *aux=h;

    if(h!=nullptr)
    {
        while(aux)
        {
            cout<<aux->dato<<","<<endl;
            aux=aux->sig;
        }
    }
    else
    {
        cout<<"Lista VACIA"<<endl;
    }
}
void ListaSimple::insertarinicio(string dato)
{
    Nodo *tmp=new Nodo(dato,nullptr);

    if(!h)
    {
        h=tmp;
    }
    else
    {
        tmp->sig=h;
        h=tmp;
    }
}
void ListaSimple::insertaralpos(string dato,int pos)
{
    Nodo *tmp=new Nodo(dato,nullptr);
    Nodo *aux=h;
    Nodo *auxAnt=nullptr;
    int cont=1;
    if(h==nullptr)
    {
        cout<<"No hay datos en la lista,inserteprimero uno"<<endl;
        delete tmp;
    }
    else
    if(pos==1) {
        tmp->sig=h;
        h=tmp;
    }
    else{
    while(pos!=cont)
    {
        auxAnt=aux;
        aux=aux->sig;
        cont++;
    }
    if(aux==nullptr)
    {
        cout<<"Fuera de rango de la lista"<<endl;
    }
    else
    {
        tmp->sig=auxAnt->sig;
        auxAnt->sig=tmp;
    }
    }
}
void ListaSimple::eliminar(string dato)
{
    Nodo *aux=h;
    Nodo *auxAnt=nullptr;
    bool band=true;

    if(h)
    {
        while(aux and band)
        {
            if(dato==aux->dato)
            {
                band=false;
            }
            else
            {
                auxAnt=aux;
                aux=aux->sig;
            }
        }
        if(aux==nullptr)
        {
            cout<<"dato no encontrado"<<endl;
        }
        else if(aux==h)
        {
            h=h->sig;
            delete aux;
        }
        else if(aux->sig==nullptr)
        {
            auxAnt->sig=nullptr;
            delete aux;
        }
       else
       {
         auxAnt->sig=aux->sig;
         delete aux;
       }
    }
        else
        {
            cout<<"lista VACIA"<<endl;
        }

}
int ListaSimple::tama()
{

    Nodo *aux=h;
    int ban=0;
    if(h!=nullptr)
    {
        while(aux)
        {
            aux=aux->sig;
            ban++;
        }
        cout<<ban<<endl;
    }
    else
    {
        cout<<"La lista esta VACIA"<<endl;
    }
    return ban;
}

void ListaSimple::eliminarTodo()
{
    Nodo *aux=h;
    Nodo *auxAnt=nullptr;
    if(h!=nullptr)
    {
       while(aux!=nullptr)
       {
           auxAnt=aux;
           h=h->sig;
           aux=aux->sig;
           delete auxAnt;
       }
    }
    else
    {
        cout<<"lista VACIA"<<endl;
    }

}
void ListaSimple::buscar(string dato)
{
    Nodo *aux=h;
    int ban1=1;
    if(h!=nullptr)
    {
     while(dato!=aux->dato)
        {
            aux=aux->sig;
            ban1++;
        }
        cout<<ban1<<endl;
    }
    else
    {
        cout<<"dato no encontrado"<<endl;
    }

}

bool ListaSimple::vacia()
{


        if(h!=nullptr)
            {
        cout<<"Lista inicializada"<<endl;
    }
    else
    {

        cout<<"lista vacia"<<endl;
    }
}
void ListaSimple::ultimo()
{
    Nodo *aux=h;
    if(h!=nullptr)
    {
        while(aux->sig!=nullptr)
        {
        aux=aux->sig;
        }
        cout<<aux->dato<<endl;
    }
    else
    {
        cout<<"Lista vacia"<<endl;
    }
}
void ListaSimple::anterior(string dato)
{
Nodo *aux=h;
Nodo *auxAnt=nullptr;
bool band=true;

    if(h)
    {
        while(aux and band)
        {
            if(dato==aux->dato)
            {
                band=false;
            }
            else
            {
                auxAnt=aux;
                aux=aux->sig;
            }
        }
        if(aux==nullptr)
    {
        cout<<"Dato no encontrado"<<endl;
    }
        else
        {

                if(auxAnt==nullptr)
                {
                    cout<<"No hay informacion en el anterior."<<endl;
                }
                else
                {
                    cout<<"El dato es:"<<auxAnt->dato<<endl;
                }

        }
    }
    else
    {
        cout<<"Lista VACIA"<<endl;
    }
}
void ListaSimple::iniciar()
{
    if(h==nullptr){
    h=nullptr;
    }
    else
    {
        cout<<"Lista ya inicializada"<<endl;
    }
}
void ListaSimple::primero()
{
    Nodo *aux=h;
    if(h!=nullptr)
    {
        cout<<h<<endl;
    }
    else
    {
        cout<<"Lista vacia"<<endl;
    }
}
void ListaSimple::siguiente(string dato)
{
    Nodo *aux=h;
    Nodo *auxsig=aux->sig;
    bool ban=true;
    while(h!=nullptr && ban)
    {
        if(dato==aux->dato)
        {
            ban=false;
        }
        else
        {
            aux=aux->sig;

        }
    }
    cout<<auxsig->dato<<endl;
}
