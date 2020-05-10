#include<iostream>
using namespace std;

int suma_iterativo(int array[], int tam)
{
	int sum=0;
	for (int i=0; i<tam; sum+=array[i++]);

	return sum;
}



int suma_recursiva (int array[], int tam)
{	
	int auxi=tam;
	int sum;

	if (tam == 0)
	{
		return array[auxi];
	}
	else
		sum=array[auxi] + suma_recursiva(array, auxi-1 );
		 
		
	return sum;


}


int main()
{
	int array[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int tam=17;
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<endl;

	cout<<endl<<"Resultado Iterativo: "<<suma_iterativo(array, tam)<<endl;
	cout<<endl<<"Resultado Recursivo: "<<suma_recursiva (array, tam-1);
	

}
