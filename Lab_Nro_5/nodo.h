#ifndef _NODO_H_
#define _NODO_H_
#include <iostream>
using namespace std;
class Nodo{
    int elem; //variable de clase donde van el elemento 
    Nodo* next; 
    friend class LinkedList; 
public:
    Nodo();
    Nodo(int elem);

    void deleteAll();
    void printNodo();
    
};

Nodo::Nodo(){
    elem = 0;
    next = NULL;
}

Nodo::Nodo(int num){
    this->elem = num;
    next = NULL;
}



void Nodo::deleteAll(){
    if (next)//if(next!=NULL)
        next->deleteAll(); //recursiva :D
    delete this; //como se tratas de un solo elemento en el puntero usamos delete this;
}

void Nodo::printNodo(){
	//cout << "Node-> " << "Dato: " << elem << " Direcion: " << this << " Siguiente: " << next << endl;
    cout<<elem<<"->";
}



#endif
