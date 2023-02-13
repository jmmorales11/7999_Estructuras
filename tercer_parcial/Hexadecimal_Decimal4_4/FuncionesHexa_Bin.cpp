#include "FuncionesHexa_Bin.h"
#include "Hex_Bin.cpp"
#include <string.h>
#pragma once
using namespace std;
FuncionesHexa_Bin::FuncionesHexa_Bin(){
	this->lis=new ListaDoble<string>();
	this->lis1=new ListaDoble<string>();
	this->lisHex();
}
void FuncionesHexa_Bin::Transformar(){
	Hex_Bin *obj=new Hex_Bin();
	string hex;
	cout<<"Ingrese el valor en hexadecimal"<<endl;
	cin>>hex;
	obj->setHex(hex);
	char aux[100];
	int centinela=0;
	string str=obj->getHex(),caracter, listaBin, bin;
	int tam = str.length();
	for(int i=0; i<tam;i++){
		caracter = str[i];
		centinela = lis->buscar(caracter);
		listaBin = lis->buscarPosicion(centinela);
		bin = strcpy(aux, listaBin.c_str());
	}
	obj->setBin(bin);
	cout<<"\nEl numero en binario es: "<<obj->getBin()<<endl;
}

void FuncionesHexa_Bin::lisHex(void){
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
   
   this->lis1->insertarPorCola("0000");
   this->lis1->insertarPorCola("0001");
   this->lis1->insertarPorCola("0010");
   this->lis1->insertarPorCola("0011");
   this->lis1->insertarPorCola("0100");
   this->lis1->insertarPorCola("0101");
   this->lis1->insertarPorCola("0110");
   this->lis1->insertarPorCola("0111");
   this->lis1->insertarPorCola("1000");
   this->lis1->insertarPorCola("1001");
   this->lis1->insertarPorCola("1010");
   this->lis1->insertarPorCola("1011");
   this->lis1->insertarPorCola("1100");
   this->lis1->insertarPorCola("1101");
   this->lis1->insertarPorCola("1110");
   this->lis1->insertarPorCola("1111");
}