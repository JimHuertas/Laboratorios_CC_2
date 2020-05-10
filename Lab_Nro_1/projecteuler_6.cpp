#include <iostream>
#include <math.h>
using namespace std;


int main(){
	cout<<"EJERCICIO 6\n"<<endl;
	//suma de los cuadrados de los 100 primeros numeros naturales
	int sum_cuadra= (100*101*((2*100)+1))/6;
	int cuadra_sum= pow(100*101/2,2);
	
	int resultado = cuadra_sum - sum_cuadra;
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}
