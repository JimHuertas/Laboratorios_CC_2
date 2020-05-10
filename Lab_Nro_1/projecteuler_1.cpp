#include <iostream>
using namespace std;

int main(){
	cout<<"EJERCICIO 1"<<endl;
	
	int cont=0, sum=0;
	int multiplos[467];
	cout<< "Numero: 100"<<endl;
	
	for(int i=1; i<1000; i++)
		if (i%3==0 || i%5==0){
			multiplos[cont]= i;
			cont++;
			sum=sum+i;
		}
	
	cout<< "Los Multiplos de 3 y 5 menores que 100 son: ";
	cout<<endl<<"la suma es: "<<sum;
	
	return 0;
}
