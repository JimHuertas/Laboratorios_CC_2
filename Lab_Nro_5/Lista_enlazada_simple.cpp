#include <iostream>
#include "linkedList.h"
using namespace std;

int main(){
    cout<<"Bienvenido a la creacion de LinkedList"<<endl;
    int size;   //definicion del tamaño de la lista
    int opc;    //variable para las opciones del usuario 
    int n;      //auxiliar para la busqueda de elementos

    cout<<"para iniciar el programa de la lista enlazada simple necesitamos algunos datos :D";
    cout<<"\nSize: ";cin>>size;
    if (size<1)
           cout<<"Numero invalido :c";
    else if (size>0){
        LinkedList lista;  //creacion de una lista enzalada con contrstuctor por defecto
        lista.agregarNodos(size); //funcion que llena elementos a lista enlazada
        while (true){
            cout<<"\n(1)Insertar nuevo elemento\n(2)Remover un elemento\n(3)Imprimir lista completa\n(4)Para salir del programa";
            cout<<"\nOpcion: ";cin>>opc;
			if (opc==1){
                cout<<"Que elemento quiere agregar: ";cin>>n;
                cout<<"AGREGANDO ELEMENTO...\n.\n.\n.\n.\n.\n";
                lista.insert(n);
                cout<<"Elemento agregado :D\n";
                lista.print();
                cout<<"\n\n";
            }
            else if (opc==2){
                lista.print();
                cout<<"Que elemento quiere eliminar (POSICION): ";cin>>n;
                cout<<"ELIMINANDO ELEMENTO...\n.\n.\n.\n.\n.\n";
                lista.remove(n);
                lista.print();
                cout<<"\n\n";
            }
            else if (opc==3){
                cout<<"IMPRIMIENDO LISTA...\n\n";
                lista.print();
                cout<<"\n\n";
            }       
            if (opc==4)
            	break;
        }
    }
    
    

    return 0;
}
