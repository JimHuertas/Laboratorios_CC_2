#include <iostream>
using namespace std;

char word1[]="Perro";
char word2[]="Helado";


int longitud (char plbra[]){
	int cont=0;
	while (plbra[cont] != NULL)
		cont++;
		
	return cont++;
}

char *copiar(char w1[], char w2[]){
	w2[longitud(w1)];
	w2=w1;
	
	return w2;
}

int main()
{
	cout<<"1ra palabra: "<<word1<<endl;
	cout<<"\n2da palabra: "<<word2<<endl;
	
	cout<<"\nCopiarndo la 1ra palabra a la 2da: ";
	cout<<copiar(word1,word2);
		
}
