#include <iostream>
#include <string.h>
using namespace std;



int longitud_iterativa (char *word){
	int cont=0;
	while (*(word+cont) != NULL)
		cont++;
	
	return cont++;
}


int longitud_recursiva (char *word, int cont){
	if (*(word+cont) == NULL)
		return cont;
		
	longitud_recursiva(word, ++cont);	
}


int main(){
	char word[]="Ciencia de la computacion 2 - Profesor Alvaro Mamani ";
	char *ptr = word;
	
	
	cout<<"La palabra es: ";
	for (int i=0; i<52; i++)
		cout<<word[i];


	cout<<"\n\nLa longitud de esa cadena (ITERATIVo): "<<longitud_iterativa(word)<<endl;
	
	cout<<"\nLa lontigud de esa cadena (RECURSIVA): "<<longitud_recursiva(ptr, 0);
	
	return 0;
}
