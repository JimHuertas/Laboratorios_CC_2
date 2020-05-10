#include <iostream>
#include <math.h>
using namespace std;





int main()
{
	cout<<"EJERCICIO 3\n"<<endl;
	unsigned long long num=600851475143;
	int max=0;
	int tam = sqrt(600851475143);

	cout<<"Los Factores Primos son: ";
	for (int i=3; i<tam; i=i+2){
		if (num%i==0)
		{
			while (num%i==0)
			{
				num=num/i;
			}
			cout<<i<<" ";
			if (max < i)
				max=i;
		}

	}
	cout<<endl<<"El mayor factor primo es: "<<max;
	

	
	return 0;
}
