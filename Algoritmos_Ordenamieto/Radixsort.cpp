#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

void ingresar_datos(int lista[], int tam)
{
	for (int i=0; i<tam; i++)
	{
		lista[i] = 1 + rand() % (0-200);
		cout<< lista[i]<<" ";
	}	
}


int maximo(int arr[], int n) 
{ 
    int max = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
    return max; 
}


void contSort(int arr[], int n, int exp) 
{ 
    int output[n]; 
    int i, count[10] = {0}; 
  
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 

    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
  

    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 




void radixsort(int arr[], int n) 
{ 

    int m = maximo(arr, n); 
  
    for (int exp = 1; m/exp > 0; exp *= 10) 
        contSort(arr, n, exp); 
} 



void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}




int main()
{
	srand(time(NULL));
	int tam;
	cout<<"Tamanio: ";cin>>tam;
	int list[tam];
	ingresar_datos(list, tam);
    
    cout<<"\n\nOrdenado con Radix sort: \n";
    radixsort(list, tam);
	print(list, tam);

    return 0;
}






