#include <iostream>
#include <string.h>
using namespace std;

char word[]="Ciencia de la computacion 2 - Profesor Alvaro Mamani";

int longitud_iterativa (char plbra[]){
	int cont=0;
	while (plbra[cont] != NULL)
		cont++;
	
	return cont++;
}


int longitud_recursiva (int cont){
	
	if (word[cont]==NULL)
		return cont;
		
	else
		longitud_recursiva(cont+1);	
}


int main(){
	
	cout<<"La palabra es: ";
	for (int i=0; i<52; i++)
		cout<<word[i];
	int cont=0;
	cout<<"\n\nLa longitud de esa cadena (ITERATIVo): "<<longitud_iterativa(word)<<endl;
	cont=0;
	cout<<"\nLa lontigud de esa cadena (RECURSIVA): "<<longitud_recursiva(cont);
	
	return 0;
}
