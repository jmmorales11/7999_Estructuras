#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 3
#define TAM1 3
#include "Matriz.cpp"
using namespace std;

int main(int argc, char argv){
	int f,c,i,f1,c1,seleccionar;
	int matriz1[TAM][TAM1] ,matriz2[TAM][TAM1];
	char datoEntero[10];

	Matriz funcion;
	do{
		cout<<"\nActualizado\nOperaciones de las matrices"<<endl;
		cout<<"[1] MULTIPLICACION \n[2] SUMA\n[3]Salir"<<endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\nSeleccione:  "));
		seleccionar=funcion_atoi(datoEntero,strlen(datoEntero));
		if(seleccionar ==3){
			return 0;
		}		
	}while(seleccionar>2 || seleccionar<1);
	cout<<"\n_____________________Ingreso de la primera matriz_______________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c=funcion_atoi(datoEntero,strlen(datoEntero));

	matriz1[f][c];

	funcion.ingresarMatriz(matriz1,f,c);
	cout<<"\n__________________Ingreso de la segunda matriz____________________"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de filas: "));
	f1=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el el numero de columnas: "));
	c1=funcion_atoi(datoEntero,strlen(datoEntero));
	matriz1[f1][c1];
	funcion.ingresarMatriz(matriz2,f1,c1);
	funcion.imprimirMatriz(matriz1 ,f,c);
	funcion.imprimirMatriz(matriz2 ,f1,c1);
	
	switch (seleccionar){
		case 1:
			if(c==f1){
				funcion.multiplicarMatriz(matriz1,matriz2,f,c, f1,c1);
			}else{
				system("cls");
				cout<<"No es posible calcular la multiplicacion"<<endl;
			}
		break;
		case 2:
			if(f==f1 && c==c1){
				funcion.sumaRecursivaMatrices(matriz1,matriz2,f,c);
				funcion.imprimirMatriz(matriz1 ,f,c);
			}else{
				system("cls");
				cout<<"No es posible calcular la suma"<<endl;
			}
	}
}
	
