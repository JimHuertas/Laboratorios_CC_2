#include <iostream>
using namespace std;


int array[5]={1,2,3,4,5};

void reverse_interativo (int array[], int tam)
{
	int aux=0;
	for (int i=0; i<tam/2; i++)
	{
		aux = array[tam-i-1];
		array[tam-i-1]=array[i];
		array[i]=aux;
	}
}

int reverse_recursivo (int array[], int num, int tam)
{
	int a = 0, sum=0;
	if (a==tam)
		return array[tam];
	return num+=reverse_recursivo (array,array[a++], tam);
}


int main()
{
	int array[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int tam=5;
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<endl;

	cout<<reverse_recursivo(array, 0 ,tam);

	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<endl;
}
