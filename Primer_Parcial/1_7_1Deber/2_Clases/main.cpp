/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Matriz.cpp"
#define MAX 5
using namespace std;

int main(int argc, char** argv){
	Matriz <int>f;
	Matriz <int>c;
	Matriz <int>f1;
	Matriz <int>c1;
	Matriz <int>seleccionar;
	int i,j,opc;
	int **matriz1 ,**matriz2, **resultado,**resultado1,**resultado2 ;
	char datoEntero[10];
	Matriz<int> funcion;
	do{
		cout<<"**************OPERACIONES DE LAS MATRICES**************"<<endl;
		cout<<"\t[1] MULTIPLICACION\n\t[2] SUMA\n\t[3] SUMA RECURSIVA\n\t[4] MULTIPLICACION RECURSIVA\n\t[0]Salir\n";
		str_cpy(datoEntero,ingresarDatosEnteros("Seleccione:  "));
		opc=(funcion_atoi(datoEntero,strlen(datoEntero)));
		seleccionar.setDato(opc);
		if(seleccionar.getDato() ==0){
			return 0;
		}		
	}while(seleccionar.getDato()>4 || seleccionar.getDato()<1);
	/////////////////////////////////////////////////////////////////////////////////////////
	cout<<"\nIngreso de la primera matriz"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de filas : "));
	f.setFilas(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de columnas : "));
	c.setColumnas(funcion_atoi(datoEntero,strlen(datoEntero)));
	//reservando memoria para la primera matriz 
	matriz1 = new  int*[MAX];
	for ( i=0;i<f.getFilas();i++){
		matriz1[i] = new int[MAX];
	}
	funcion.ingresarMatriz(matriz1,f.getFilas(),c.getColumnas());
	/////////////////////////////////////////////////////////////////////////////////////////
	cout<<"\nIngreso de la segunda matriz"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de filas : "));
	f1.setFilas(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de columnas : "));
	c1.setColumnas(funcion_atoi(datoEntero,strlen(datoEntero)));
	//reservando memoria para la segunda matriz 
	matriz2 = new  int*[MAX];
	for (i=0;i<f1.getFilas();i++){
		matriz2[i] =new int[MAX];
	}
	funcion.ingresarMatriz(matriz2,f1.getFilas(),c1.getColumnas());
	funcion.imprimirMatriz(matriz1 ,f.getFilas(),c.getColumnas());
	funcion.imprimirMatriz(matriz2 ,f1.getFilas(),c1.getColumnas());
	/////////////////////////////////////////////////////////////////////////////////////////
	switch (seleccionar.getDato()){
		case 1:
			resultado = new  int*[MAX];
			for (i=0;i<f1.getFilas();i++){
			resultado[i] =new int[MAX];
			}
			resultado1 = new  int*[MAX];
			for (i=0;i<f1.getFilas();i++){
			resultado1[i] =new int[MAX];
			}
			if(f.getFilas()==f1.getFilas() && c.getColumnas()==c1.getColumnas()){
				funcion.multiplicarMatriz(matriz1, matriz2,resultado,resultado1,f.getFilas(), c.getColumnas(), f1.getFilas(), c1.getColumnas());
				funcion.imprimirMatriz(resultado1,f.getFilas(),c1.getColumnas());
			}else{
				system("cls");
				cout<<"No es posible calcular la multiplicacion"<<endl;
				
			}
			free(matriz1);
				free(matriz2);
				free(resultado);
				free(resultado1);
		break;
		case 2:
			if(f.getFilas()==f1.getFilas() && c.getColumnas()==c1.getColumnas()){
				funcion.sumaMatriz(matriz1,f.getFilas(),c.getColumnas(),matriz2);
				funcion.imprimirMatriz(matriz1 ,f.getFilas(),c.getColumnas());	
			}else{
				system("cls");
				cout<<"No es posible calcular la suma"<<endl;
				}
			free(matriz1);
			free(matriz2);
			break;
		case 3:
			resultado2 = new  int*[MAX];
			for (i=0;i<f1.getFilas();i++){
			resultado2[i] =new int[MAX];
			}
			if(f.getFilas()==f1.getFilas() && c.getColumnas()==c1.getColumnas()){
			funcion.sumaMatrizRecursiva(matriz1, matriz2,resultado2,  f.getFilas()-1, c.getColumnas()-1, funcion);
			funcion.imprimirMatriz(resultado2 ,f.getFilas(),c.getColumnas());
			}else{
				cout<<"No es posible calcular la suma Recursiva"<<endl;
			}
			free(matriz1);
			free(matriz2);
			free(resultado2);
			break;
		case 4:
			int suma = 0;
    		int pri = 0;
    		int seg = 0;
			resultado2 = new  int*[MAX];
			for (i=0;i<f1.getFilas();i++){
			resultado2[i] =new int[MAX];
			}
			if(f.getFilas()==f1.getFilas() && c.getColumnas()==c1.getColumnas()){
			funcion.multiplicacion(matriz1, matriz2,resultado2, f.getFilas(), c.getColumnas(), c1.getColumnas(),suma,  pri, seg, 0, 0, 0, funcion);
			funcion.imprimirMatriz(resultado2 ,f.getFilas(),c.getColumnas());
			
			}else {
				cout<<"No es posible calcular la multiplicacion Recursiva"<<endl;
			}
			free(matriz1);
			free(matriz2);
			free(resultado2);
			break;
	}
	
	
}
