#include <iostream>
using namespace std;

int primos_sabidos [2000002]={2,3};
int num=5;

int esPrimo(int numero, int cont){
	int auxi = 1;
	
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
	cout<<"EJERCICIO 10"<<endl;
	int cont=3;
	
	//comienza en 5 porque en la lista no estan incluidosni el 2 ni el 3, y 2+3 = 5;
	unsigned long long suma=5;
	cout<<"El 1 primo es: "<<primos_sabidos[0]<<endl;
	cout<<"El 2 primo es: "<<primos_sabidos[1]<<endl;
	while (num<2000001)
	{
		if ((esPrimo(num, cont)) == 1){
			cont++;
			primos_sabidos[cont-2]=num;
			suma+=num;
		}
		num++;
	}
	cout<<endl<<"la suma de todos esos primos es: "<<suma<<endl;
	return 0;
}

