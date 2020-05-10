#include<iostream>
#include<math.h>
using namespace std;


int main (){
	cout<<"EJERCICIO 9\n"<<endl;
	int a=0, b=0, c=0, producto=0, a_2=0, b_2=0, c_2=0;
	
	for(a=1; a<(1000/3); a++)
		for(b=2; b<(1000/2); b++)
		{
			c=1000-b-a;
			a_2=pow(a,2);
			b_2=pow(b,2);
			c_2=pow(c,2);
			if((a_2+b_2)==c_2)
			{
				cout<<"Los numeros "<<a<<" + " <<b<< " + "<<c<<" = 1000\n\n"<<endl;
				producto=a*b*c;
				cout<<"Y el Producto de estos es: "<<a<<" x " <<b<< " x "<<c<<" = "<<producto<<endl;
			}
			
		}
	
	
}
