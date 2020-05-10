#include <iostream>
using namespace std;

char word1[] ="de la carrera Ciencia de La Computacion :D";
char word2[] ="Curso Ciencia de la Computacion 2 ";


int longitud (char plbra[]){
	int cont=0;
	while (plbra[cont] != NULL)
		cont++;
	
	return cont++;
}


void concat (char tam1, char tam2)
{
	int tam3=tam1+tam2;
	word2[tam3];
	
	for (int i=tam2; i<tam3; i++)
	{
		word2[i]=word1[i-tam2];
	}
}

int main()
{

	int tam1=longitud(word1);
	int tam2=longitud(word2);
	
	
	cout<<"La primera palabra es: "<<word1<<endl;
	cout<<"\nLa segunda palabra es: "<<word2<<endl;
	cout<<"\nLas palabras concatenadas es una sola variable serian:"<<endl;
	
	concat(tam1, tam2);
	for (int i=0; i<tam2+tam1; i++)
	{
		cout<<word2[i];	
	}
	cout<<endl;

	return 0;
}












