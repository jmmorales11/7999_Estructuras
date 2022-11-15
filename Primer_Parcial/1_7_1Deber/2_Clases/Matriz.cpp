/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "Matriz.h"
#include "validar.cpp"

template<typename T>
	void Matriz<T>::setMatriz(T m){
		this->**matriz=m;
	}
template<typename T>
	T Matriz<T>::getMatriz(){
		return this->**matriz;
	}
	template<typename T>
	void Matriz<T>::setDato(T d){
		this->dato=d;
	}
template<typename T>
	T Matriz<T>::getDato(){
		return this->dato;
	}
template<typename T>
	void Matriz<T>::setFilas(T f){
		this->filas=f;
	}
template<typename T>
	T Matriz<T>::getFilas()const{
		return this->filas;
	}
template<typename T>
	void Matriz<T>::setColumnas(T c){
		this->columnas=c;
	}
template<typename T>
	T Matriz<T>::getColumnas()const{
		return this->columnas;
	}
template<typename T>
void Matriz<T>::ingresarMatriz(T **matriz, T filas, T columnas)
{
   char datoEntero[10];
	cout<<"\nIngrese los valores para la matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			do{
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			*(*(matriz+i)+j)=funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
			}while (*(*(matriz+i)+j)==NULL);
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
template<typename T>
T Matriz<T>::sumaMatrizRecursiva(T **matriz1, T **matriz2,T **resultado, T f, T c,Matriz funcion, T i, T j){
	//cout<<"\nTEMPLATESUMA\n "<<endl;
	//**matriz1=**matriz1+ **matriz2;
	if((f==i)&&(c==j)){
		cout<<"Entrada\n";
		/*cout<<i<<"i\n";
		cout<<j<<"j\n";*/		
		cout<<"Letra["<<i<<" "<<j<<"]"<<*(*(matriz1+i)+j) +*(*(matriz2+i)+j)<<endl;
		*(*(resultado+i)+j)=*(*(matriz1+i)+j)+ *(*(matriz2+i)+j);
		return *(*(matriz1+i)+j)+ *(*(matriz2+i)+j);
	}else{
		
		if(f>-1){	
			cout<<"entrada 2\n";
			//cout<<"segundo "<<**matriz1+ **matriz2<<endl;
			j++;
			c=c-1;
			if(c>=-1){	
				cout<<"entrada 3\n";
				cout<<"["<<i<<" "<<j-1<<"]"<<*(*(matriz1+i)+(j-1)) +*(*(matriz2+i)+(j-1))<<endl;
				*(*(resultado+i)+(j-1))=*(*(matriz1+i)+(j-1)) + *(*(matriz2+i)+(j-1));

				i++;								
				
				return *(*(matriz1+i)+j-1) + *(*(matriz2+i)+j-1)+funcion.sumaMatrizRecursiva(matriz1, matriz2,resultado, f, c,funcion,i,j);
				
			}else
			cout<<"entrada 4\n";
			//cout<<"aqui          "<<sumaRecursivaMatrices(mat1, mat2, f-1, 2)<<endl;
				
				return sumaMatrizRecursiva(matriz1, matriz2,resultado, f-1, c-1,funcion,i,j);
			
		}
		
	}

}

template<typename T>
void Matriz<T>::multiplicarMatriz(T **matrizA, T **matrizB,T **resultado ,T **resultado1,T fA, T cA, T fB, T cB)
{	int suma=0;
   //misno columnas A= Filas B
	//Matriz resultante filas A con Columnas B
	Matriz funcion;
	int k;
	cout<<"\nLa multiplicacion de las matrices es \n "<<endl;

	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
		//	*(*(resultado+i)+j)=0;
		//cout<<"Ingresa j"<<endl;
			suma=0;
			
			for( k=0; k<cA;k++){
				//cout<<"Ingresa k"<<endl;
				//cout<<"["<<i<<k<<"]  ["<<i<<k<<"]  ["<<k<<j<<"] "<<endl;
				//cout<<(*(*(matrizA+i)+k))<<"    "<<(*(*(matrizA+i)+k))<<"    "<<(*(*(matrizB+k)+j))<<"Resultado multiplicacion "<<((*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j)))<<endl;
				(*(*(resultado+i)+k))= ((*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j)));
				suma=suma+(*(*(resultado+i)+k));
				//cout<<"  "<< suma<<endl;
				*(*(resultado1+i)+j)=suma;//memoria	
			}	
			//*(*(resultado+i)+j)=suma+(*(*(resultado+i)+k));
			cout<<suma<<" | ";
			
		}printf("\n");
		
	}

}
template<typename T>
void Matriz<T>::sumaMatriz(T **matriz1, T filas, T columnas, T **matriz2)
{
	cout<<"\nLa suma de las matrices es "<<endl;
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				*(*(matriz1+i)+j) += *(*(matriz2+i)+j);
		}
	}
}
