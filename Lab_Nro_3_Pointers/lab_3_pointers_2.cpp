#include <iostream>
using namespace std;


void swap(int *a, int *b){
	int auxi=*a;
	*a=*b;
	*b=auxi;
}

void swap_2(int *lista, int a, int b){
	int temp=*(lista+a);
	*(lista+a)=*(lista+b);
	*(lista+b)=temp;
}


void inverse_iterativo (int *lista, int tam)
{
	int *ptr = lista+tam;
	while(lista < ptr)
		swap(lista++,ptr--);
		
}



void inverse_recursivo (int *lista, int cont, int tam)
{
    if (cont>tam/2)
        return;
    swap_2(lista,cont,--tam);
    inverse_recursivo(lista,++cont,--tam);
}


void mostrar(const int *lista, int tam)
{
	cout<<"\n[ ";
	for (int i=0; i<tam; i++)
		cout<<*(lista+i)<<" ";
	cout<<"]"<<endl;
	
}
	

int main(){
	int array[]={5,6,7,8,9,10};
	int tam=sizeof(array)/sizeof(*array);
	
	int *ptr = array;
	cout<<"lista original: \n";
	mostrar (ptr, tam);
	cout<<"\n\n";

	cout<<"Arreglo invertido de manera iterativa: "<<endl;
	inverse_iterativo(ptr, tam-1);
	mostrar (ptr, tam);
	cout<<"\n\n";
	
	int *auxi=array;
	cout<<"Arreglo invertido de manera recursiva (invirtiendo nuevamente la lista): \n";
	inverse_recursivo (ptr, 0, tam);
	mostrar (ptr, tam);
	cout<<endl;
	
}
