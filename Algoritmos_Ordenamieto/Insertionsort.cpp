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

void insertionSort(int *lista, int tam)  
{  
    int auxi, j;  
    for (int i=1; i<tam; i++) 
    {  
        auxi = *(lista+i);  
        j = i-1;  
        while (j>=0 && *(lista+j)>auxi) 
        {  
            *(lista+j+1) = *(lista+j);  
            j--;  
        }  
        *(lista+j+1) = auxi;  
    }

	
	cout<<"\n\nLa lista ordenada con insertion sort :)"<<endl;
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
    insertionSort(list, tam);
    
    return 0;
}

