#ifndef __NODO_H__
#define __NODO_H__

#include <iostream>
using namespace std;

template <typename T>
class Nodo{
    private:    
        Nodo<T> *next;
        T elem;
    public:
        Nodo();
        Nodo(T);

        T getElement();
        Nodo<T>* getNext();
        void setElement(T elem);
        void setNext(Nodo<T>* next);
};

template<typename T>
Nodo<T>::Nodo(){
    next = NULL;
}

template<typename T>
Nodo<T>::Nodo(T elem){
    this->elem = elem;
    next = NULL;
}

template<typename T>
T Nodo<T> :: getElement(){
    return this-> elem;
}

template<typename T>
Nodo<T>* Nodo<T>:: getNext(){
    return this->next;
}

template<typename T>
void Nodo<T> :: setElement(T elem){
    this->elem= elem;
}

template<typename T>
void Nodo<T> :: setNext(Nodo<T>* next){
    this->next= next;
}
#endif
