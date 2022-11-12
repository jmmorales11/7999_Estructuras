#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 5
#define TAM1 5

using namespace std;

int main(int argc, char argv){
	int f,c,i,f1,c1;
	int matriz1[TAM][TAM1] ,matriz2[TAM][TAM1];
	char datoEntero[10];
	cout<<"_____________________Ingreso de la primera matriz_______________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la primera matriz 
	matriz1[f][c];

	ingresarMatriz(matriz1,f,c);
	cout<<"\n__________________Ingreso de la segunda matriz____________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f1=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c1=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la segunda matriz 
	matriz1[f1][c1];
	ingresarMatriz(matriz2,f1,c1);
	imprimirMatriz(matriz1 ,f,c);
	imprimirMatriz(matriz2 ,f1,c1);
	multiplicarMatriz(matriz1,matriz2,f,c, f1,c1);
	//sumaMatriz(matriz1,f,c,matriz2);
	
}
