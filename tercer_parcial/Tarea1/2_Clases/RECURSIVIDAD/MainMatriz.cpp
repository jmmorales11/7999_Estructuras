#include "MatrizRecursiva.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define MAX 2
using namespace std;

int main(int argc, char** argv){
	MatrizRecursiva <int> funcion;
	int mat1[MAX][MAX];
	int mat2[MAX][MAX];
//	MatrizRecursiva <int> **mat;
	//int  mat2[MAX][MAX];
	int **mat;
	mat = new  int*[MAX];
	for (int i=0;i<MAX;i++){
	mat[i] =new int[MAX];
	}
	srand(time(NULL));
	/*for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			mat1[i][j]=(int)((rand()/32768.1)*1000);
			mat2[i][j]=(int)((rand()/32768.1)*1000);
		}
	}*/
	funcion.ingresarMatriz(mat1,MAX, MAX);
	funcion.ingresarMatriz(mat2,MAX, MAX);
	funcion.mostrarMatrizRecursiva(mat1);
	funcion.mostrarMatrizRecursiva(mat2);
	cout<<endl;
	cout<<"\nSuma de Matrices es: "<< funcion.sumaRecursivaMatrices(mat1, mat2, MAX-1, MAX-1,mat,funcion);
	cout<<endl;
	//cout<<"\nMultiplicacion de Matrices es: "<< funcion.multiplicacionRecursivaMatrices(mat1, mat2, MAX-1, MAX-1,mat,funcion);
	return 0;
}

