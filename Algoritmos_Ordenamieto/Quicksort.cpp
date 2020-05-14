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
	cout<<endl;
}


void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 

        if (arr[j] <= pivot) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
  
        int pivot = partition(arr, low, high); 
   
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void mostrar(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        cout<<arr[i]<<"   "; 
      
} 
   
int main() 
{ 
	srand(time(NULL));	
	int tam;
	cout<<"Tamanio: ";cin>>tam;
    int lista[tam];
    ingresar_datos(lista, tam);
    
   
    cout<<endl;
    quickSort(lista, 0, tam-1); 
    cout<<"Lista ordenada usando Quick sort"<<endl; 
    mostrar(lista,tam); 
    return 0; 
}
