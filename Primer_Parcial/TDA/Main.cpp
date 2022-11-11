#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define TAM 10
#include "Main1.cpp"
int main(int argc, char** argv) {
	int t=5;
	int *vect=new int[TAM];
	encerar(vect,t);
	ingresar(vect,t);
	procesar(vect,t);
	imprimir(vect,t);
	return 0;
}
