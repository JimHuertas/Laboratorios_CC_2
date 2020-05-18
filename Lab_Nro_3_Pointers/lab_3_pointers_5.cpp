#include <iostream>
using namespace std;


void concat (char *wd1, char *wd2, int tam1, int tam2)
{
	int tam3=tam1+tam2;	
	for (int i=tam2; i<tam3; i++)
		*(wd2+i)=*(wd1+i-tam2);
		
}


int main()
{
	char word1[] ="de la carrera Ciencia de La Computacion :D";
	char word2[] ="Curso Ciencia de la Computacion 2";
	
	int tam1=sizeof(word1)/sizeof(*word1);
	int tam2=sizeof(word2)/sizeof(*word2);
	
	char *ptr1 = word1;
	char *ptr2 = word2;
	
	cout<<"\nLa segunda palabra es: "<<word2<<endl;
	cout<<"\nLas palabras concatenadas es una sola variable serian:"<<endl;
	
	concat(ptr1, ptr2, tam1, tam2);
	cout<<endl;
		
	for (int i=0; i<tam2+tam1; i++)
		cout<<*(ptr2+i);
	cout<<endl;


	return 0;
}












