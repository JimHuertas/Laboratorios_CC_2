#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void ingresar_datos(int lista[], int tam)
{
	cout<<"lista Aleatoria\n";
	for (int i=0; i<tam; i++)
	{
		lista[i] = rand() % (0-20);
		cout<< lista[i]<<"  ";
	}	
	cout<<"\n\n\n"<<endl;
}


#include <iostream>
using namespace std;

void countingSort(int array[], int size) {

  int output[30];
  int count[30];
  int max = array[0];

 
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

 
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }


  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }


  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }


  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}


void mostrar(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << "  ";
  cout << endl;
}


int main() {
	
  	srand(time(NULL));
	int tam;
	cout<<"tamanio: ";cin>>tam;
	int lista[tam];
	ingresar_datos(lista, tam);
	
	cout<<"Ordenado con Couting sort: \n";
	countingSort(lista, tam);
	mostrar (lista, tam);

	return 0;
}










