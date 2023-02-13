#include "FuncionesHexa_Dec.h"
#include "Hex_Dec.cpp"
#include <string.h>
using namespace std;
FuncionesHexa_Dec::FuncionesHexa_Dec(){
	this->lis=new ListaDoble<string>();
	this->lisHex();
}
int FuncionesHexa_Dec::Transformar(void){
	Hex_Dec *obj=new Hex_Dec();
	string hex;
	cout<<"Ingrese el valor en exadecimanl"<<endl;
	cin>>hex;
	obj->setHex(hex);
	int aux = 0;
	int exponente = 1;
	string str=obj->getHex();
	string caracter;
	int tam = str.length();
	for(int i=tam-1; i>=0;i--){
		int valor;
		caracter = str[i];
		cout<<caracter<<endl;
	//	aux+=valor*exponente;
	//	obj->setDec(aux);
	//	exponente *= 16;
	}
	return 0;
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
