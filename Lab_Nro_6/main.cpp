#include<iostream> 
#include<iterator>
#include "linkedlist.h"
using namespace std;

int main()
{	
	int opc, size;
	cout<<"BIEVENIDO AL PROGRAMA :D\n\n(1)Para inicializar la lista vacia\n(2)Para inicializar la lista con el tamanio que tu le des :D\nOpcion: ";cin>>opc;
	
	while(opc!=1 && opc !=2){
		cout<<"Opcion invalida, elige una opcion valida :C\n";
		cout<<"Opcion: ";cin>>opc;
	}
	
	if (opc==1){
		Linkedlist<int> list;
	}
	else if (opc == 2){
		int temp;
		Linkedlist<int> list;
		cout<<"Size: ";cin>>size;
		for(int i=0; i<size; i++){
			cout<<"Dato "<<i+1<<": ";cin>>temp;
			list.insert(temp);
		}
	while(true){
			cout<<"\n\nQue cambios quieres hacer a tu programa :D\(1)Agregar un nuevo elemento\n(2)Elminiar un elemento (posicion)\n(3) imprimir la lista enlazada\n";
			cout<<"(4)Para salir del programa\n";
			cout<<"Opcion: ";cin>>opc;
			if (opc==1){
				cout<<"Elemento para agregar: ";cin>>temp;
				list.insert(temp);
			}
			else if(opc==2){
				cout<<"Que elemento quieres eliminiar (posicion): ";cin>>temp;
				list.remove(temp);
			}
			else if(opc==3){
				cout<<"Imprimiendo lista :D\n";
				list.print();
			}
			else{
				break;
			}
		}
	
	int a=1;
    cout << "Impresion mediante el iterador" << endl; 
    for ( Linkedlist<string>::Iterator i = list.begin(); i != list.end(); i++) 
    { 
        cout << *i << " ";
    	cout << "estoy pasando"<<a<<"vez"<<endl;
    	a++;
    	
	} 
}


}
