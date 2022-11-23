/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include <iostream>
#include "matrizPrueba.cpp"
#define MAX 5
using namespace std;

int main(int argc, char** argv){
	int f,c,**mat,i;
	char datoEntero[10];
	
	matrizPrueba<int> mat1(mat,f,c);
	
	cout<<"Potencia de la matriz"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de filas : "));
	mat1.setFila(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero columnas: "));
	mat1.setColumna(funcion_atoi(datoEntero,strlen(datoEntero)));
	
	mat = new  int*[MAX];
	for ( i=0;i<mat1.getFila();i++){
		mat[i] = new int[MAX];
	}
	mat1.ingresarMatriz(mat1);
	
}
