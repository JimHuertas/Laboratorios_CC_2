#include <iostream>
#include <string.h>
using namespace std;

int array[]={3,2,1,7,9,56,5,13,1235,13256,21624,762};

void ordenar (int tam)
{
	int auxi;
	for(int i=0; i<tam-1; i++)
		for(int j=0; j<tam-1; j++){
			if (array[j]>array[j+1]){
				auxi=array[j];
				array[j]=array[j+1];
				array[j+1]=auxi;
			}		
		}

}


int main(){
	
	int tam=12;
	
	cout<<"Arreglo Original\n";
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<endl;
	
	ordenar(tam);
	
	cout<<"\nArreglo Ordenado\n";
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	
		
	return 0;	
}
