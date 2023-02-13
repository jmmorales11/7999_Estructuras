#include "FuncionesHexa_Dec.h"
#include "Hex_Dec.cpp"
#include <string.h>
using namespace std;
int FuncionesHexa_Dec::Transformar(void){
	Hex_Dec *obj=new Hex_Dec();
	int aux = 0;
	int exponente = 1;
	string str=obj->getHex();
	int tam = strlen(str);
	for(int i=tam-1; i>=0;i--){
		int valor;
		char caracter = str[i];
		if (caracter>="0"&&caracter<="9"){
			valor = caracter - "0";
		} else(caracter>="A"&&caracter<="F"){
			valor = caracter - "A" + 10;
		}
		aux+=valor*exponente;
		obj->setDec(aux);
		exponente *= 16;
	}
}

int FuncionesHexa_Dec::tamano(void){
	return 0;
}