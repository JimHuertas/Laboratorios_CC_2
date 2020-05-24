#include <iostream>
#include <string>
using namespace std;


/*1. Implemente una clase Curso, en la cual debe considerar.
• Como variables miemnbro: nombre(string), codigo(string), nroAlumnos(int)
• Implementar un constructor por defector, el cual inicializará las variables, si son cadena en o si es la edad en 0.
• Implementar un contructor que reciba argumentos e inicialice las variables miembro con dichos argumentos.
• Implementar las siguientes funciones:
*/
class Curso{
private:
	string nombre, codigo;
	int nroAlumnos;	
public:	
	Curso();
	Curso(string new_nombre, string new_codigo, int new_nroAlumnos);
	string getNombre() const; 	//Función para obtener “nombre”
	string getCodigo() const; 	//Función para obtener “codigo”
	int getNroAlumnos() const; 	//Función para obtener “nroAlumnos”
	void setNombre(const string nuevo_nombre);		//Función para modificar “nombre”
	void setCodigo(const string nuevo_codigo);		//Función para modificar “codigo”
	void setNroAlumnos(const int nuevo_nroAlumnos);	//Función para modificar “nroAlumnos”
	void mostrarC();
};

Curso::Curso(){
	string codigo = "o"; 
	string nombre = "o";
	int nroAlumnos = 0;
}
Curso::Curso(string new_nombre, string new_codigo, int new_nroAlumnos){
	nombre = new_nombre;
	codigo = new_codigo;
	nroAlumnos = new_nroAlumnos;
}
	
	
string Curso::getCodigo() const{
	return codigo;
}
string Curso::getNombre() const{
	return nombre;
}
int Curso::getNroAlumnos() const{
	return nroAlumnos;
}
	
	
void Curso::setCodigo(const string nuevo_codigo){
	codigo=nuevo_codigo;
}
void Curso::setNombre (const string nuevo_nombre){
	nombre=nuevo_nombre;
}
void Curso::setNroAlumnos (const int nuevo_nroAlumnos){
	nroAlumnos=nuevo_nroAlumnos;
}
void Curso::mostrarC(){
	cout<<"        "<<nombre<<"         "<<codigo<<"         "<<nroAlumnos<<"\n";
}

/*2. Implementa la clase ArregloDeCursos la cual representará un arreglo dinámico de Cursos.
• La clase debe tener como varibles miembro privadas: un puntero de tipo Curso y un entero para el tamaño del
arreglo.
• Contructores: 
	– Contructor para inicializar los elementos del arreglo
		ArregloDeCursos::ArregloDeCursos(const Curso cursos[], const int tam)
	– Constructor copia
		ArregloDeCursos::ArregloDeCursos(const ArregloDeCursos &o)
	– Destructor
		ArregloDeCursos::~ArregloDeCursos()

*/
class ArregloDeCursos {
private:
	Curso *Materia;
	int tam;
public:
	ArregloDeCursos(const Curso cursos[], const int tam);
	ArregloDeCursos(const ArregloDeCursos &o);
	~ArregloDeCursos();
	void redimensionar (int n);		//Redimensionar el tamaño el arreglo dinámicamente
	void pushBack (const Curso &p);	//Adicionar un Curso al final del arreglo
	void insert (const int posicion, const Curso &p); //Insertar un Curso en cualquier posición del arreglo
	void remove (const int pos);	//Eliminar una Curso de cualquier posición del arreglo
	const int getSize() const;		//Obtener el tamaño del arreglo
	void clear();					//Eliminar todos los elementos del arreglo
	void mostrar();
};

ArregloDeCursos::ArregloDeCursos(const Curso cursos[], const int tam){
	Materia = new Curso [tam];
	for (int i=0; i<tam; i++)
		Materia[i]=cursos[i];
	this->tam=tam;
}
ArregloDeCursos::ArregloDeCursos(const ArregloDeCursos &o){
	Materia=o.Materia;
	tam=o.tam;
	}
ArregloDeCursos::~ArregloDeCursos(){
	delete[] Materia;
}
void ArregloDeCursos::redimensionar(int n){
	Curso *auxi_Materia=new Curso[n]; //Creacion de un nuevo arreglo un con new n;
	if (n>tam){					//si n es mayor que tam
		for (int i=0; i<tam; i++)
       	auxi_Materia[i] = Materia[i];
      	auxi_Materia[n-1]= Curso();
        }
	else{						//Si n es menos o igual a tam
		for (int i=0; i<n; i++)
			auxi_Materia[i]=Materia[i];
	}
	tam = n;
	delete []Materia;
	this->Materia=auxi_Materia;
	}		
void ArregloDeCursos::pushBack(const Curso &p){
	redimensionar(this->tam+1);
	Materia[tam-1]=p;
	}
void ArregloDeCursos::insert(const int posicion, const Curso &p){
	if (posicion<=tam){
		redimensionar(tam+1);
		for (int i=tam-1; i>posicion-1; i--)
			Materia[i]=Materia[i-1];
		Materia[posicion-1]=p;		
	}
	else
		cout<<"\nPosicion invalida - FUERA DE RANGO :(\n";	
}
void ArregloDeCursos::remove(const int pos){
	if(pos<=tam){
		for (int i=pos-1; i<tam-1; i++)
			Materia[i]=Materia[i+1];
		redimensionar(this->tam-1);
	}
	else
		cout<<"\nPosicion invalida - FUERA DE RANGO:(\n";
}
const int ArregloDeCursos::getSize() const{
	return tam;
}
void ArregloDeCursos::clear(){
	delete[] Materia;
	cout<<"\nCursos eliminados, arreglo vacio :v\n";
}
void ArregloDeCursos::mostrar(){
	cout<<"Lista de cursos Curso\n  Materia  |  Nombre  |  Codigo  |  Nro de Alumnos\n";
	for (int i=0; i<tam; i++){
		cout<<"    "<<i+1<<"     ";
		Materia[i].mostrarC();
		cout<<endl;
	}	
}

int main(){
	while (true){
		cout<<"\n BIENVENIDO A LA ESCUELA CIENCIA DE LA COMPUTACION :D\n\n";
		string mtrs, nombre, codigo;
		int cantAlum, tam;
		cout<<"Cuantos cursos va a agregar: ";cin>>tam;
		Curso materiasEPCC[tam];
		for (int i=0; i<tam; i++)
	        {
	            cout << "Materia "<<i+1<<": "<<"\nNombre de la Materia: ";cin>>nombre;
				cout<<"Codigo de la Materia: ";cin>>codigo;
				cout<<"Cantidad de Alumnos: ";cin>>cantAlum;
	            Curso mrts(nombre, codigo, cantAlum);
	            materiasEPCC[i]=mrts; 
	        }
		ArregloDeCursos lista (materiasEPCC, tam);
		while (true){
			cout<<"\n\nGenial ya creaste tus cursos :D\n¿Deseas modificar algo de ellos :)\n(1)Si?\n(0)No?\nOpcion: ";
			int num=0;
			cin>>num;
			if (num==0)
				break;
			else if (num==1){
				cout<<"\n\nQue deseas modificar: \n(1)Agregar un curso al final de la lista\n(2)Agregar un curso en una posicion especifica";
				cout<<"\n(3)Mostrar tus cursos\n(4)remover todos los cursos de la lista\n(0)salir";
				cout<<"\nOpcion: ";cin>>num;
				if (num==0)
					break;
				else if (num==1){
					 cout<<"\nCurso nuevo creandose...\nAgregar datos :D\nNombre: ";cin>>nombre;
					 cout<<"Codigo:";cin>>codigo;
					 cout<<"Nro de alumnos: ";cin>>cantAlum;
					 Curso auxi(nombre, codigo, cantAlum);
					 lista.pushBack(auxi);
					 cout<<"\nCurso nuevo creado al final de la lista :D";
				}
				else if(num==2){
					int pos;
					lista.mostrar();
					cout<<"\nCurso nuevo creandose...\nEn que posicion quiere ponerlo: ";cin>>pos;
					cout<<"\nNombre: ";cin>>nombre;
					cout<<"Codigo:";cin>>codigo;
					cout<<"Nro de alumnos: ";cin>>cantAlum;
					Curso auxi(nombre, codigo, cantAlum);
					lista.insert(pos,auxi);
				}
				else if(num==3){
					cout<<"Cursos mostradonse...\n";
					lista.mostrar();
				}
				else if(num==4){
					cout<<"\nCursos removiendose...\n.\n.\n.\n.\n";
					lista.clear();
					cout<<"\nCursos removidos con exito :D";
					cout<<"Eliminaste toda la lista\SALIENDO DEL PROGRAMA...\n.\n.\n.\n.\n";
					break;
				}
			}
		}
		int num;
		cout<<"¿Esta Seguro que quiere salir?\n(1)Si?\(Cualquier Tecla)No\Opcion: ";cin>>num;
		if(num == 1)
			break;
		else
			continue;
	}
}





