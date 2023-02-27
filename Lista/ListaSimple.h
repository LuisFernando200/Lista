#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "Nodo.h"

class ListaSimple
{
    public:
        Nodo *h;
        ListaSimple(Nodo*);
        ListaSimple();
    void insertarfinal(string);
        void insertarinicio(string);
        void eliminar(string);
        void buscar (string);
        void mostrar();
        int tama();
        void eliminarTodo();
        bool vacia();
        void ultimo();
    void anterior(string);
    void iniciar();
    void insertaralpos(string,int);
    void primero();
    void siguiente(string);

    protected:

    private:
};

#endif // LISTASIMPLE_H
