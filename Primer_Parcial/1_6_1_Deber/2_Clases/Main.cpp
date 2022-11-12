/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa
 * Modificacion: Martes, 10 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define TAM 5
#define TAM1 5
#include "Matriz.cpp"


using namespace std;

int main(int argc, char** argv){
	int f,c,i,f1,c1,seleccionar;
	int **matriz1 ,**matriz2;
	char datoEntero[10];
	Matriz funcion;
	do{
		cout<<"\nDinamica\nOperaciones de las matrices"<<endl;
		cout<<"[1] MULTIPLICACION \n[2] SUMA\n[3]Salir"<<endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\nSeleccione:  "));
		seleccionar=funcion_atoi(datoEntero,strlen(datoEntero));
		if(seleccionar ==3){
			return 0;
		}		
	}while(seleccionar>2 || seleccionar<1);
	/////////////////////////////////////////////////////////////////////////////////////////
	cout<<"\nIngreso de la primera matriz"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de filas : "));
	f=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de columnas : "));
	c=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la primera matriz 
	matriz1 = new  int*[f];
	for ( i=0;i<f;i++){
		matriz1[i] = new int[c];
	}
	funcion.ingresarMatriz(matriz1,f,c);
	/////////////////////////////////////////////////////////////////////////////////////////
	cout<<"\nIngreso de la segunda matriz"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de filas : "));
	f1=funcion_atoi(datoEntero,strlen(datoEntero));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de columnas : "));
	c1=funcion_atoi(datoEntero,strlen(datoEntero));
	//reservando memoria para la segunda matriz 
	matriz2 = new  int*[f1];
	for (i=0;i<f1;i++){
		matriz2[i] =new int[c1];
	}
	funcion.ingresarMatriz(matriz2,f1,c1);
	funcion.imprimirMatriz(matriz1 ,f,c);
	funcion.imprimirMatriz(matriz2 ,f1,c1);

	/////////////////////////////////////////////////////////////////////////////////////////
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
				funcion.sumaMatriz(matriz1,f,c,matriz2);
				funcion.imprimirMatriz(matriz1 ,f,c);
			}else{
				system("cls");
				cout<<"No es posible calcular la suma"<<endl;
			}
	}
}

