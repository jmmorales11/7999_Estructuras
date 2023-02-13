#include "FuncionesHexa_Dec.h"
#include "Hex_Dec.cpp"
#include <string.h>
#include <math.h>
using namespace std;
FuncionesHexa_Dec::FuncionesHexa_Dec(){
	this->lis=new ListaDoble<string>();
	this->lisHex();
}
void FuncionesHexa_Dec::Transformar(void){
	Hex_Dec *obj=new Hex_Dec();
	string hex;
	cout<<"Ingrese el valor en hexadecimanl"<<endl;
	cin>>hex;
	obj->setHex(hex);
	int aux = 0;
	string str=obj->getHex();
	string caracter;
	int tam = str.length();
	int aux1=tam;
	for(int i=0; i<tam;i++){
		aux1-=1;
		caracter = str[i];
		aux =aux + lis->buscar(caracter)*pow(16,aux1);
	}
	obj->setDec(aux);
	cout<<"El numero trasformado a decimal es: "<<obj->getDec()<<endl;
	
}

int FuncionesHexa_Dec::tamano(void){
	return 0;
}
void FuncionesHexa_Dec::lisHex(void){
	this->lis->insertarPorCola("0");
   this->lis->insertarPorCola("1");
   this->lis->insertarPorCola("2");
   this->lis->insertarPorCola("3");
   this->lis->insertarPorCola("4");
   this->lis->insertarPorCola("5");
   this->lis->insertarPorCola("6");
   this->lis->insertarPorCola("7");
   this->lis->insertarPorCola("8");
   this->lis->insertarPorCola("9");
   this->lis->insertarPorCola("A");
   this->lis->insertarPorCola("B");
   this->lis->insertarPorCola("C");
   this->lis->insertarPorCola("D");
   this->lis->insertarPorCola("E");
   this->lis->insertarPorCola("F");

}
