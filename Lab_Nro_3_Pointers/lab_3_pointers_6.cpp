#include <iostream>
using namespace std;


void copiar(char *w1, char *w2, int tam1, int tam2){
	int tam;
	if (tam1<tam2)
		tam=tam2;
	else	
		tam=tam1;

	for (int i=0; i<tam; i++)
	{
		if (*(w1+i)==NULL || *(w2+i)==NULL)
			return;
		*(w2+i) = *(w1+i);

	}
	
}


int main()
{
	char word1[]="Perro";
	char word2[]="Helado";
	
	cout<<"1ra palabra: "<<word1<<endl;
	cout<<"\n2da palabra: "<<word2<<endl;
	
	int tam1=sizeof(word1)/sizeof(*word1);
	int tam2=sizeof(word2)/sizeof(*word2);
	
	char *ptr1 = word1;
	char *ptr2 = word2;
	cout<<"\nCopiarndo la 1ra palabra a la 2da: ";
	copiar(ptr1, ptr2, tam1, tam2);
	cout<< ptr2;
	
	return 0;	
}
