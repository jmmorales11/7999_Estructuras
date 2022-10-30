#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
char *ingresarDatos(char *);//estructura de una funcion
//
char *ingresarDatosEnteros(char *);
//Para elaborar cada metodo se le coloca el Templete
template <typename T>//nombre de tipo generico T
class Numero{  //CREACION DE CLASE 
	public:
		void setNum(T n);
		T getNum() const; //T get Num se refiere al tipo de dato que va generar que es un Template
		                  //const-> la variable que tu tienes no la modifique en ningun proceso
	private:
		T num;
};// Fin de la clase

/**********************************/
//Crear el templeate del sed 
template <typename T>
	void Numero<T>::setNum(T n){
		this->num=n;
	}
//Crear el get que devuelve un T
template <typename T>
T Numero<T>::getNum()const{
	return this->num;
}
//Funcion ingreso de datos
template <typename T>
char *ingresarDatos(char const *msj){
	char *dato= new char[10];//new-> es la palabra reservada que instancia
							  // instanciar -> fucionar una clase con otra
								//Intancio un arreglo con un puntero
	char c;
	int i=0;
	printf("%s\n",msj);
	while ((c=getch())=!13) //enter ->13
	{
		if(c>='0'&& c<='9'){
		printf("%c",c);
		dato[i++]=c;
 		}
	}
	dato[i]='\0';
	return dato;
}
int main(int arg, char** argv){
	Numero<int> entero;//el < > identifica a las variables que son tipo template
	Numero<float> flotante;
	Numero<double> real;
	int valor;
	char dato[10];
	//dato=ingresarDatosEnteros("Ingrese el valor entero")//No se puede asinar un tipo de dato char
	strcpy(dato,ingresarDatosEnteros("Ingrese el valor entero"));// funcion de copiar
	valor=atoi(dato);//convierte de alfabetico a numerico entero por el I dell final del ato"i"
	entero.setNum(5);
	flotante.setNum(3.2f);
	real.setNum(3.141516);// no hace falta poner f coo en el float
	std::cout<<"\nNumero tipo int: "<<entero.getNum();
	std::cout<<"\nNumero tipo float: "<<flotante.getNum();
	std::cout<<"\nNumero tipo real: "<<real.getNum();
}
