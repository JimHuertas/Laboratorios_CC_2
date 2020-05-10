#include <iostream>
using namespace std;

int tamanio=17;
int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};

void reverse_iterativo (int tam)
{
	int aux=0;
	for (int i=0; i<tam/2; i++)
	{
		aux = array[tam-i-1];
		array[tam-i-1]=array[i];
		array[i]=aux;
	}
}

int reverse_recursivo (int tam, int right)
{
	int auxi;
	
	if (tam==tamanio/2)
		return 0;
	else{
		auxi=array[right];
		array[right]=array[tam-1];
		array[tam-1]=auxi;
		
		reverse_recursivo(tam-1, right+1);
	}
	
	
}


	

int main()
{

	int tam=17, auxi=0;
	
	cout<<"Arreglo original"<<endl;
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<"\n\n";

	cout<<"Arreglo invertido de manera iterativa"<<endl;
	reverse_iterativo(tam);
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<"\n\n";
	
	cout<<"Arreglo invertido de manera recursiva (invirtiendo nuevamente la lista anterior)";
	reverse_recursivo(tam, auxi);
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<endl;
	
}
