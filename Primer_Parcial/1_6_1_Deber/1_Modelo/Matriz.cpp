/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Jeimy
 * Modified: jueves, 10 de noviembre de 2022 22:09:11
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"
#include <iostream>
#include "validar.cpp"
using namespace std;

Matriz::Matriz()
{
}


Matriz::~Matriz()
{
   // TODO : implement
}


void Matriz::ingresarMatriz(int matriz[][TAM1],int filas,int columnas){
	int i,j;
	char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			matriz[i][j]=funcion_atoi(datoEntero,strlen(datoEntero));
		}
	}	
}

void Matriz::sumaMatriz(int matriz1[][TAM1] ,int filas,int columnas,int matriz2[][TAM1] ){
	cout<<"La suma es: "<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
	
}



void Matriz::multiplicarMatriz(int matriz[][TAM1],int matriz1[][TAM1],int fA, int cA, int fB,int cB){
	//misno columnas A= Filas B 
	//Matriz resultante filas A con Columnas B
	cout<<"\nLa matriz multiplicacion es "<<endl;
	int C[TAM][TAM];
	for(int i=0;i<fA;i++){
	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
			 C[i][j]=0;
			for(int k=0; k<cA;k++){
					//cout<<"Antes "<<*(*(matrizA+i)+j)<<" "<<*(*(matrizA+i)+k)<<" "<<*(*(matrizB+k)+j)<<"Fin"<<endl;
				C[i][j]=C[i][j]+matriz[i][k]*matriz1[k][j];
				//cout<<"comienzo "<<*(*(matrizA+i)+j)<<" "<<*(*(matrizA+i)+k)<<" "<<*(*(matrizB+k)+j)<<"Fin"<<endl;
			}
		}
	}
}
imprimirMatriz(C ,fA,cB);
}

void Matriz::imprimirMatriz(int matriz[][TAM1] ,int filas,int columnas){
	cout<<"\nLa matriz es "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}

int Matriz::sumaRecursivaMatrices(int mat1[][TAM1], int mat2[][TAM1], int f, int c){
	cout<<"Primero  "<<mat1[f][c]+mat2[f][c]<<endl;
	if((f==0)&&(c==0)){
		
		return mat1[f][c]+mat2[f][c];
	}else{
		if(f>-1){
			//cout<<mat1[f][c]+mat2[f][c]<<endl;
			c--;
			if(c>=-1){
				//cout<<mat1[f][c+1]+mat2[f][c+1]<<endl;
				return mat1[f][c+1]+mat2[f][c+1]+sumaRecursivaMatrices(mat1, mat2, f, c);
			}else
			//cout<<"aqui          "<<sumaRecursivaMatrices(mat1, mat2, f-1, 2)<<endl;
				return sumaRecursivaMatrices(mat1, mat2, f-1, 2);
		}
	}
	
	//return;
}
