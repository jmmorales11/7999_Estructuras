#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "MatrizRecursiva.h"
#include "validar.cpp"
template<typename T>
	void MatrizRecursiva<T>::setMatriz(T m){
		this->**matriz=m;
	}
template<typename T>
	T MatrizRecursiva<T>::getMatriz(){
		return this->**matriz;
	}
	template<typename T>
	void MatrizRecursiva<T>::setDato(T d){
		this->dato=d;
	}
template<typename T>
	T MatrizRecursiva<T>::getDato(){
		return this->dato;
	}
template<typename T>
	void MatrizRecursiva<T>::setFilas(T f){
		this->filas=f;
	}
template<typename T>
	T MatrizRecursiva<T>::getFilas()const{
		return this->filas;
	}
template<typename T>
	void MatrizRecursiva<T>::setColumnas(T c){
		this->columnas=c;
	}
template<typename T>
	T MatrizRecursiva<T>::getColumnas()const{
		return this->columnas;
	}

template<typename T>
T MatrizRecursiva<T>::sumaRecursivaMatrices(T mat1[MAX][MAX], T mat2[MAX][MAX], T f, T c, T **Matriz, MatrizRecursiva funcion){
	//	cout<<"Primero "<<mat1[f][c]+mat2[f][c]<<endl;

	if((f==0)&&(c==0)){
		cout<<mat1[f][c]+mat2[f][c]<<"  ";
		//ingresarMatrizRecursividad(mat1[f][c]+mat2[f][c], Matriz);
		return mat1[f][c]+mat2[f][c];
	}else{
		if(f>-1){
			//cout<<mat1[f][c]+mat2[f][c]<<endl;
			c--;
			if(c>=-1){
				cout<<mat1[f][c+1]+mat2[f][c+1]<<"  ";
				//ingresarMatrizRecursividad(mat1[f][c+1]+mat2[f][c+1],Matriz);
				return mat1[f][c+1]+mat2[f][c+1]+sumaRecursivaMatrices(mat1, mat2, f, c,Matriz,funcion);
			}else
			cout<<endl;
			//cout<<"aqui          "<<sumaRecursivaMatrices(mat1, mat2, f-1, 2)<<endl;
				return sumaRecursivaMatrices(mat1, mat2, f-1, MAX-1,Matriz,funcion);
		}
	}
}
template<typename T>
void MatrizRecursiva<T>::ingresarMatriz(T mat[MAX][MAX],T f, T c){

	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			cout<<"Digite un numero: ["<<i<<" , "<<j<<"] : ";
			cin>>mat[i][j];
			//mat1[i][j]=(int)((rand()/32768.1)*1000);
			//mat2[i][j]=(int)((rand()/32768.1)*1000);
		}
	}
}
template<typename T>
void MatrizRecursiva<T>::ingresarMatrizRecursividad(T num, T **Matriz){
	cout<<"Ingresa "<<endl;

	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
		//	if (*(*(Matriz+i)+j)==NULL){
				*(*(Matriz+i)+j)=num;	

		//	}
			//mat1[i][j]=(int)((rand()/32768.1)*1000);
			//mat2[i][j]=(int)((rand()/32768.1)*1000);
		}
	}
	imprimirMatriz(Matriz, MAX, MAX);
}

template<typename T>
void MatrizRecursiva<T>::imprimirMatriz(T **matriz, T filas, T columnas)
{
	cout<<"\nimprimir \n "<<endl;
   	cout<<"\nLa matriz es:\n "<<endl;
	for (int i=0;i<filas;i++){

		for(int j =0;j<columnas;j++){
			cout<<*(*(matriz+i)+j)<<" ";
			//printf("  %p",&*(*(matriz+i)+j));
		}
		cout<<"\n";
	}

}

template<typename T>
void MatrizRecursiva<T>::mostrarMatrizRecursiva(T mat[MAX][MAX]){
	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

template<typename T>
T MatrizRecursiva<T>::multiplicacionRecursivaMatrices(T mat1[MAX][MAX], T mat2[MAX][MAX], T f, T c, T **Matriz, MatrizRecursiva funcion){
	//	cout<<"Primero "<<mat1[f][c]+mat2[f][c]<<endl;

	if((f==0)&&(c==0)){
		cout<<mat1[f][c]<<"  ";
		//ingresarMatrizRecursividad(mat1[f][c]+mat2[f][c], Matriz);
		mat1[f][c]+=mat1[f][c]*mat2[f][c];
		return mat1[f][c];
	}else{
		if(f>-1){
			//cout<<mat1[f][c]+mat2[f][c]<<endl;
			c--;
			if(c>=-1){
				cout<<mat1[f][c+1]<<"  ";
				mat1[f][c+1]+=mat1[f][c+1]*mat2[f][c-1];
				//ingresarMatrizRecursividad(mat1[f][c+1]+mat2[f][c+1],Matriz);
				return mat1[f][c+1]+multiplicacionRecursivaMatrices(mat1, mat2, f, c,Matriz,funcion);
			}else
			cout<<endl;
			//cout<<"aqui          "<<sumaRecursivaMatrices(mat1, mat2, f-1, 2)<<endl;
				return sumaRecursivaMatrices(mat1, mat2, f-1, MAX-1,Matriz,funcion);
		}
	}
}
