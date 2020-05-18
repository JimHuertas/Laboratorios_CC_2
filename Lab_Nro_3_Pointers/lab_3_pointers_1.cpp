#include<iostream>
using namespace std;

int suma_iterativo(const int *lista, int tam)
{
	int sum=0;
	for (int i=0; i<tam; i++)
		sum+=*(lista+i);

	return sum;
}

int suma_recursiva (const int *lista, int tam)
{	
	int sum;

	if (tam == 0)
		return *lista;

	sum= *(lista + tam) + suma_recursiva(lista, --tam);
		 
	return sum;
}


int main()
{
	int array[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int tam=sizeof(array)/sizeof(*array);
	int *ptr = array;
	
	cout<<"\nla lista es:\n [ ";
	for (int i=0; i<tam; i++)
		cout<<*(ptr+i)<<" ";
	cout<<"]"<<endl;

	cout<<endl<<"Resultado Iterativo: "<<suma_iterativo(ptr, tam)<<endl;
	cout<<endl<<"Resultado Recursivo: "<<suma_recursiva (ptr, tam);
	

}
