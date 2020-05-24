#include <iostream>
using namespace std;


void copiar(char *w1, char *w2){
	
	while(*w2++=*w1++);
	*w2=NULL;
	
}
				//hamburguesa  -  moneda  --->    monedaguesa;
   
int main()
{
	char word1[]="Moneda";
	char word2[]="Hamburguesa";
	
	cout<<"1ra palabra: "<<word1<<endl;
	cout<<"\n2da palabra: "<<word2<<endl;
	
	int tam1=sizeof(word1)/sizeof(*word1);
	int tam2=sizeof(word2)/sizeof(*word2);
	
	char *ptr1 = word1;
	char *ptr2 = word2;
	cout<<"\nCopiarndo la 1ra palabra a la 2da: ";
	copiar(ptr1, ptr2);
	cout<< ptr2;
	
	return 0;	
}
