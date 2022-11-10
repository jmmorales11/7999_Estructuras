#include <iostream>
#include "Funcion.cpp"

int main(int argc, char** argv){
	int *m[100][100],f,c;
	Funcion f= new Funcion(*m,f,c);
	f.encerarMatriz(*m,f,c);
	f.ingresarMatriz(*m,f,c);
	f.imprimirMatriz(*m,f,c);
	return 0;	
}