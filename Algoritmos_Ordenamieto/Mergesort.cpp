#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
void ingresar_datos(int *lista, int tam)
{
	for (int i=0; i<tam; i++)
	{
		*(lista+i) = 1 + rand() % (10);
		cout<< *(lista + i)<<"   ";
	}
		
}
 

void Merge(int *a, int low, int high, int mid)
{

	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 

	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		Merge(a, low, high, mid);
	}
}
 
int main()
{
	srand(time(NULL));
	int tam;
	cout<<"Tamanio: ";cin>>tam;
	int lista[tam];
	ingresar_datos(lista, tam);
 
	MergeSort(lista, 0, tam-1);
 
	cout<<"\n\nLista ordenada con Merge sort: \n";
	for (int i = 0; i < tam; i++)
        cout<<lista[i]<<"   ";
 
	return 0;
}
