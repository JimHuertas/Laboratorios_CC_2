#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
 
void ingresar_datos(int *lista, int tam)
{
	for (int i=0; i<tam; i++)
	{
		*(lista+i) = 1 + rand() % (10);
		cout<< *(lista + i)<<" ";
	}
		
	
}

void selectionSort(int *lista, int tam)  
{  
    int auxi, j;  
    for (int i=0; i<tam; i++)
    	for (int j=i+1; j<tam; j++)
    		if (*(lista+j) < *(lista+i)){
    			auxi = *(lista+j);
    			*(lista+j)=*(lista+i);
    			*(lista+i)=auxi;
			}
	
	cout<<"\n\nLa lista ordenada con insertion sort :D"<<endl;
	for (int i=0; i<tam; i++)
	{
		cout<< *(lista + i)<<" ";
	}  
}  


int main()
{
	srand(time(NULL));
	int tam;
	cout<<"Tamanio: ";cin>>tam;
	int *list = new int [tam];
    
	ingresar_datos(list, tam);
    selectionSort(list, tam);
    
    return 0;
}
