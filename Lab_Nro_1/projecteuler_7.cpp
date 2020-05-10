#include <iostream>
using namespace std;

int primos_sabidos [10002]={2,3};
int num=5;

int esPrimo(int numero, int cont){
	int auxi = 1; //no funciono con bool (:/)
	
   	for (int i=0; i<cont-1; i++){
		if (numero % primos_sabidos[i] == 0)
		{
			auxi=0;
			break;
		}
	}


	return auxi;
}



int main(){
	cout<<"EJERCICIO 8"<<endl;
	int cont=3;
	
	cout<<"El 1 primo es: "<<primos_sabidos[0]<<endl;
	cout<<"El 2 primo es: "<<primos_sabidos[1]<<endl;
	while (cont<10002)
	{
		if ((esPrimo(num, cont)) == 1){
			cont++;
			primos_sabidos[cont-2]=num;
			cout<<"El "<<cont-1<<" primo es :"<<primos_sabidos[cont-2]<<endl;
		}
		num++;
	}
	
	return 0;
}








