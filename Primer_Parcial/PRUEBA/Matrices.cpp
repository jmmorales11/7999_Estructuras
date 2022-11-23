////////NUEVO

#include "Matrices.h"
#include <iostream>
using namespace std;
template <typename T>
Matrices<T>::Matrices(T **mat1,T filas,T columnas){
	this->mat1=mat1;
	//mat2=(T **)calloc (TAM,sizeof(T*));
	//matR=(T **)calloc (TAM,sizeof(T*));
	this->filas=filas;
	this->columnas=columnas;
}

template <typename T>
T** Matrices<T>::getMat1(){
	return this->**mat1;
}
template <typename T>
T Matrices<T>::getFilas(){
	return filas;	
}

template <typename T>
T Matrices<T>::getColumnas(){
	return columnas;
}

template <typename T>
void Matrices<T>::multiplicacionRecursivaMatrizA(T** mat1,T** mat2,T** matR,T i){
	if (i<this->filas)
       {
           multiplicacionRecursivaMatrizB(mat1,mat2,matR,i,0);
           multiplicacionRecursivaMatrizA(mat1,mat2,matR,i+1);
       }
}
   
template <typename T>
 void Matrices<T>::multiplicacionRecursivaMatrizB(T** mat1,T** mat2,T** matR, T i, T j){
 	if(j<this->columnas){
 			multiplicacionRecursiva(mat1,mat2,matR,i,j,0);
           	multiplicacionRecursivaMatrizB(mat1,mat2,matR,i,j+1);
	 }
 }

template <typename T>
void Matrices<T>::multiplicacionRecursiva(T** mat1,T** mat2,T** matR,T i,T j,T k){
	if(k<ca){
	(*(*(matR+i)+j)) +=(*(*(mat1+i)+k)) * (*(*(mat2+k)+j)); //	C[i][j]+=A[i][k]*B[k][j];	
	multiplicacionRecursiva(mat1,mat2,matR,i,j,k+1);
	}
}
template <typename T>
void Matrices<T>::ingresarMatriz(Matrices mat)
{
   char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			do{
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			*(*(mat.getMat1()+i)+j)=funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
			}while (*(*(mat.getMat1()+i)+j)==NULL);
		}
	}
}

template<typename T>
void Matriz<T>::imprimirMatriz(T **matriz, T filas, T columnas)
{
//	cout<<"\nTEMPLATE\n "<<endl;
   	cout<<"\nLa matriz es:\n "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
			//printf("  %p",&*(*(matriz+i)+j));
		}
		cout<<"\n";
	}

}
