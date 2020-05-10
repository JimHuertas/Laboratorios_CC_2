#include <iostream>

using namespace std;



int mcm(int div, int a, int b){
	int auxi=1;
	while(a%div==0 || b%div==0){
		auxi*=div;
		if(a%div==0)
			a/=div;
			
 		if(b%div==0)
			b/=div;
	}
	if(div<=a || div<=b)
		auxi*=mcm(div+1,a,b);
		
  return auxi;
}



int main(){
	cout<<"EJERCICIO 5\n"<<endl;
	int resultado=1;
	for (int i=1; i<20; i++)
		resultado=mcm(2,resultado,i);
	cout<<"mcm es: "<<resultado<<"\n";
	
	return 0;
	
}



