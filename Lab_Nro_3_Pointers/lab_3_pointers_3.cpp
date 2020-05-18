#include <iostream>

using namespace std;


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

	  
}  


int main()
{
	int array[]={1,2,3,9,7,101,1,32,43,245,45,65};
	int tam=sizeof(array)/sizeof(*array);

	int *list =array;
    
    insertionSort(list, tam);
    
    cout<<"Lista Ordenada: \n";
	for (int i=0; i<tam; i++)
	{
		cout<< *(list + i)<<" ";
	}
    
    return 0;
}

