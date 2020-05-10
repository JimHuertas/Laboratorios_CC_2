#include<iostream>
using namespace std;

int array[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};


int suma_iterativo(int array[], int tam)
{
	int sum=0;
	for (int i=0; i<tam; sum+=array[i++]);

	return sum;
}

int suma_recursiva (int num, int tam)
{	
	int sum=0;
	if (suma_recursiva(array[tam], tam) == array[0])
		return array[0];
	
	return sum+=suma_recursiva (array[tam--], tam);
		
}


int main()
{
	int array[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int tam=17;
	for (int i=0; i<tam; i++)
		cout<<array[i]<<" ";
	cout<<endl;

	cout<<endl<<suma_iterativo(array, tam);
	//cout<<endl<<sumna_recursiva(array[],tam)
	

}
