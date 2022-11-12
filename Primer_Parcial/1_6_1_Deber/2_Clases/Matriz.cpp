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
#include "validar.cpp"
#include "Matriz.h"
using namespace std;

Matriz::Matriz()
{
}

Matriz::~Matriz()
{
   // TODO : implement
}

void Matriz::ingresarMatriz(int **matriz, int filas, int columnas)
{
   int i,j;
   char datoEntero[10];
   Matriz funcion;
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			*(*(matriz+i)+j)=funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
		}
	}
	
}

void Matriz::sumaMatriz(int **matriz1, int filas, int columnas, int **matriz2)
{
	cout<<"\nLa suma de las matrices es \n "<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
}

void Matriz::multiplicarMatriz(int **matrizA, int **matrizB, int fA, int cA, int fB, int cB)
{
   //misno columnas A= Filas B 
	//Matriz resultante filas A con Columnas B
	Matriz funcion;
	cout<<"\nLa multiplicacion de las matrices es \n "<<endl;
	int **resultado = new int*[fA];
	for(int i=0;i<fA;i++){
	resultado[fA]=new int[cB];
	}
	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
		//	*(*(resultado+i)+j)=0;
			for(int k=0; k<cA;k++){
				*(*(resultado+i)+j) += (*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j));
			}
			cout<<*(*(resultado+i)+j)<<"  ";
		}
		cout<<endl;
	}
	funcion.imprimirMatriz(resultado  ,fA,cB);
}

void Matriz::imprimirMatriz(int **matriz, int filas, int columnas)
{
   cout<<"\nLa matriz es:\n "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
