#include <iostream>
#include "ListaSimple.h"
#include "Nodo.h"
using namespace std;

int main()
{
    string da;
    int pos;
    ListaSimple *lis=new ListaSimple(nullptr);
    int menu;
    do{
        cout<<"1.Insertar al inicio"<<endl;
        cout<<"2.Inserta al final"<<endl;
        cout<<"3.Insetar por posicion"<<endl;
        cout<<"4.Eliminar"<<endl;
        cout<<"5.Buscar"<<endl;
        cout<<"6.vacia"<<endl;
        cout<<"7.Inicializa"<<endl;
        cout<<"8.Primero"<<endl;
        cout<<"9.Ultimo"<<endl;
        cout<<"10.Anterior"<<endl;
        cout<<"11.Siguiente"<<endl;
        cout<<"12.Tamaño"<<endl;
        cout<<"13.Eliminar todo"<<endl;
        cout<<"14.Mostrar lista"<<endl;
        cout<<"15.Salir"<<endl;
        cin>>menu;
    switch(menu)
    {
    case 1:
        cout<<"Introduce:"<<endl;
        cin. ignore();
        getline(cin,da);
        lis->insertarinicio(da);
        break;
    case 2:
        cout<<"Introduce:"<<endl;
        cin. ignore();
        getline(cin,da);
        lis->insertarfinal(da);
        break;
    case 3:
        cout<<"Introduce el dato:"<<endl;
        cin. ignore();
        getline(cin,da);
        cout<<"Introduce la posicion:"<<endl;
        cin>>pos;
        lis->insertaralpos(da,pos);
        break;
    case 4:
        cout<<"Eliminar:"<<endl;
        cin.ignore();
        getline(cin,da);
        lis->eliminar(da);
        break;
    case 5:
         cout<<"Introduce dato a buscar:"<<endl;
        cin. ignore();
        getline(cin,da);
        lis->buscar(da);
        break;
    case 6:
        lis->vacia();
        break;
    case 7:
        lis->iniciar();
        break;
    case 8:
        lis->primero();
        break;
    case 9:
        lis->ultimo();
        break;
    case 10:
        cout<<"Introduce el dato:"<<endl;
        cin. ignore();
        getline(cin,da);
        lis->anterior(da);
        break;
    case 11:
        cout<<"Introduce el dato:"<<endl;
        cin. ignore();
        getline(cin,da);
        lis->siguiente(da);
        break;
    case 12:
        cout<<"El tamaño de la lista es de:"<<endl;
        lis->tama();cout<<endl;
        break;
    case 13:
        lis->eliminarTodo();
        break;
    case 14:
        lis->mostrar();cout<<endl;
        break;
    case 15:
        break;
    default:
        cout<<"Opcion invalida";
    }
    }while(menu!=15);

    return 0;
}
