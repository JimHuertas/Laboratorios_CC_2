#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include "nodo.h"
using namespace std;

template <typename T> 
class Linkedlist{
    private:
        int size;
        Nodo<T>* head;

    public:
        Linkedlist();
        Linkedlist(T);
        Linkedlist(const Linkedlist<T> &list);
        ~Linkedlist();

        int getSize(){
            return size;
        }
        void insert(T);
        void remove(int);
        void print();
        class Iterator;
        Iterator begin() 
        { 
            return Iterator(head); 
        } 
    
        Iterator end() 
        { 
            return Iterator(NULL); 
        }         
        class Iterator 
        { 
            private: 
                Nodo<T>* itNodo; 
            public: 
                Iterator() noexcept : 
                    itNodo (head) { } 

                Iterator(Nodo<T>* Nodo) noexcept : 
                    itNodo(Nodo) { } 

                    Iterator operator=(Nodo<T>* Nodo) { 
                        this->itNodo = Nodo; 
                        return *this; 
                    } 
 
                    Iterator operator++() { 
                        if (itNodo) 
                            itNodo = itNodo->getNext(); 
                        return *this; 
                    } 

                    Iterator operator++(int) { 
                        Iterator iterator = *this;
                        ++*this; 
                        return iterator; 
                    } 

                    bool operator!=(const Iterator& iterator) { 
                        return itNodo != iterator.itNodo; 
                    } 

                    T operator*() { 
                        return itNodo->getElement(); 
                    } 
            }; 
};


template<typename T>
Linkedlist<T> :: Linkedlist(){
    head = NULL;
    size = 0;
}


template<typename T>
Linkedlist<T>::Linkedlist(T newelement){
	head = new Nodo<T>(newelement);
	size = 1;
}


template<typename T>
Linkedlist<T> :: Linkedlist(const Linkedlist<T> &L){
    Nodo<T>* temp1 = NULL;
    Nodo<T>* temp2 = NULL;
    if( L.head == NULL)
        head = NULL;
    else{
        head = new Nodo<T>;
        head -> setElement(L.head -> getElement()) ;
        head -> setNext(L.head -> getNext()) ;

        temp1 = head;
        temp2 = L.head -> getNext();
    }
    while( temp2 )
    {
       temp1 -> setNext(new Nodo<T>);
       temp1 = temp1 -> getNext();
       temp1 -> setElement(temp2 -> getElement());
       temp1 -> setNext(temp2 -> getNext());

       temp2 = temp2 -> getNext();
    }
    temp1 -> setNext(NULL);
}


template<typename T>
Linkedlist<T> :: ~Linkedlist(){
    Nodo<T> *temp;
	while(head != NULL){
		temp = head;
		temp = head->getNext();
		delete temp;
	}
}

template<typename T>
void Linkedlist<T>::insert(T elemt){
    Nodo<T> *new_nodo = new Nodo<T>(elemt);
    Nodo<T> *temp = head;
    if(!head)
        head = new_nodo;
    else{   
        while(temp->getNext() != NULL) {
            temp=temp->getNext();
        }
        temp->setNext(new_nodo);
    }
    size++;
}

template<typename T>
void Linkedlist<T>::remove(int pos){
    Nodo<T>* temp = head;
    Nodo<T>* temp1 = temp->getNext();
    if (pos < 1 || pos > size) {
        cout << "Posicion Invalida :C" << endl;
    } 
    else if (pos == 1) {
        head = temp->getNext();
        delete temp;
        size--;
    }
    else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Nodo<T> *auxnode = temp1;
                temp->setNext(temp1->getNext());
                delete auxnode;
                size--;
            }
            temp = temp->getNext();
            temp1 = temp1->getNext();
        }
    }
}


template<typename T>
void Linkedlist<T> :: print(){
    Nodo<T>* temp = head;
    while( temp != NULL)
    {
        cout<< temp->getElement() <<"-> ";
        temp = temp->getNext();
    }
    cout<<"NULL"<<endl;
}

#endif // __LINKEDLIST_H__
