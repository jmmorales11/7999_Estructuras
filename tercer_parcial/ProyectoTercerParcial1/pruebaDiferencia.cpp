#include <iostream>
#include "validar.h"
#include "ListaDoble.cpp"
#include "Operaciones.cpp"

using namespace std;

int main(){
	char datoEntero[100];
	Operaciones<int> *op;
	ListaDoble<int> *lis1 = new ListaDoble<int>();
	ListaDoble<int> *lis2 = new ListaDoble<int>();
	ListaDoble<int> *lis3 = new ListaDoble<int>();
	int entero, numeroVal;
	bool repetir;
	
	do{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero un conjunto A: "));
		entero=funcion_atoi(datoEntero,strlen(datoEntero));
		lis1->insertarPorCola(entero);
		str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
		cout<<"\n";
		numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
		if(numeroVal==1){
			repetir=true;
		}
		if(numeroVal==0){
			lis1->mostrarPorCabeza();
			repetir=false;
		}
	}while(repetir == true);
	do{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese un numero un conjunto A: "));
		entero=funcion_atoi(datoEntero,strlen(datoEntero));
		lis2->insertarPorCola(entero);
		str_cpy(datoEntero,ingresarDatosEnteros("\nDesea ingresar otro numero al conjunto A (1 = si/0 = no): "));
		cout<<"\n";
		numeroVal=funcion_atoi(datoEntero,strlen(datoEntero));
		if(numeroVal==1){
			repetir=true;
		}
		if(numeroVal==0){
			lis2->mostrarPorCabeza();
			repetir=false;
		}
	}while(repetir == true);
	cout<<"\nConjunto A "<<endl;
	lis1->mostrarPorCabeza();
	cout<<"\nConjunto B "<<endl;
	lis2->mostrarPorCabeza();
	cout<<"\nConjunto resultado "<<endl;
	op->diferencia(lis1, lis2, lis3);
	lis3->mostrarPorCabeza();
	cout<<"\nConjunto A "<<endl;
	lis1->mostrarPorCabeza();
	cout<<"\nConjunto B "<<endl;
	lis2->mostrarPorCabeza();
	/*op->copiar(list1,list3);
	cout<<"\n Lista 1:"<<endl;
	list1->mostrarPorCabeza();
	cout<<"\n Lista 3:"<<endl;
	list3->mostrarPorCabeza();*/
}