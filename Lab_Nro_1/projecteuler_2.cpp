#include <iostream>
using namespace std;

int main(){
	cout<<"EJERCICIO 2"<<endl;
	unsigned long term1=1, term2=2, term3=3, sum=2;
	
	while (term3<4000000)
	{
		term1=term2;
		term2=term3;
		term3=term1+term2;
		if (term3%2==0)
			sum+=term3;
	}
	
	cout<<endl<<"La suma de los terminos pares es: "<<sum;
	
	return 0;
}
