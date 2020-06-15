#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include "nodo.h"
using namespace std;
class LinkedList{
    int size;
    Nodo *head;
public:
    LinkedList();
    ~LinkedList();
    void insert(int);
    void agregarNodos(int);
    void remove(int);
    void print(); 
};

LinkedList::LinkedList(){
    size=0;
    head=NULL;
}

LinkedList::~LinkedList(){
    head->deleteAll();
    head = 0;
}


void LinkedList::agregarNodos(int size){
    int temp;
    for (int i=0; i<size; i++) {
        cout << "Ingresa el elemento " << i + 1 <<": ";cin >> temp;
        insert(temp);
    }
}

void LinkedList::insert(int num){
    //Nodo *new_nodo= new Nodo();
    Nodo *new_nodo = new Nodo (num);
    Nodo *temp = head;
 
    if (!head) { //head == NULL
        head = new_nodo;
    } 
    else if (head->elem > num) {
        new_nodo->next = head;
        head = new_nodo;
    } 
    else{
        while ((temp->next != NULL) && (temp->next->elem < num)) {
            temp = temp->next;
        }
        new_nodo->next = temp->next;
        temp->next = new_nodo;
    }
    size++;
}

void LinkedList::remove(int pos){
    Nodo *temp = head;
    Nodo *temp1 = temp->next;
 
    if (pos < 1 || pos > size) 
        cout << "Fuera de rango " << endl; 
    else if (pos == 1) {
        head = temp->next;
    } 
    else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Nodo *aux_nodo = temp1;
                temp->next = temp1->next;
                delete aux_nodo;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}

void LinkedList::print(){
    Nodo *temp = head;
    if (!head)  //head==NULL
        cout << "La Lista esta vacia" << endl;
    else {
        while (temp != NULL) {
            temp->printNodo();
            if (!temp->next) 
                cout << "NULL";
            temp = temp->next;
        }
  }
  cout << "\n\n";

}
 

#endif
