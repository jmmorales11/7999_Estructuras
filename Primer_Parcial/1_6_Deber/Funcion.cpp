/***********************************************************************
 * Module:  Funcion.cpp
 * Author:  camilo
 * Modified: jueves, 10 de noviembre de 2022 0:58:13
 * Purpose: Implementation of the class Funcion
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Funcion.h"
using namespace std;

void Funcion::ingresarMatriz(int *matriz[100][100], int filas, int columnas)
{	
   int i,j;
   cout<<"Ingresa el numero de filas: \n";
   cin>>filas;
   this->setFilas(filas);
   cout<<"Ingresa el numero de columnas: \n";
   cin>>columnas;
   this->setColumnas(columnas);
   for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
   			cout<<"Ingrese el elemento en la posicion"<<i<<" "<<j<<"\n";
   			scanf("%d", &matriz[i][j]);
		   }
		cout<<"\n";
   }
}


Funcion::Funcion(int *matriz[100][100], int filas, int columnas)
{
}


Funcion::~Funcion()
{
   // TODO : implement
}


void Funcion::encerarMatriz(int *matriz[100][100],int filas, int columnas)
{
   int i, j;
   for(i=0;i<filas;i++){
   	for(j=0;j<columnas;j++){
   		*matriz[i][j]=0;
	   }
   }
   
}


void Funcion::imprimirMatriz(int *matriz[100][100],int filas, int columnas)
{
   int i, j;
   for(i=0;i<filas;i++){
   		for(j=0;j<columnas;j++){
   			printf(" %d", &matriz[i][j]);
	   }
	   cout<<"\n";
   }
}


void Funcion::suma(void)
{
   // TODO : implement
}

void Funcion::multiplicacion(void)
{
   // TODO : implement
}
int Funcion::getFilas(void)
{
   return filas;
}

void Funcion::setFilas(int newFilas)
{
   filas = newFilas;
}

int Funcion::getColumnas(void)
{
   return columnas;
}

void Funcion::setColumnas(int newColumnas)
{
   columnas = newColumnas;
}