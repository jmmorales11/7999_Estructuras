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
<<<<<<< HEAD
	for(m.getFilas()==0;m.getFilas()<m.getFilas();m.getFilas()+1){
		for(m.getColumnas()==0;m.getColumnas()<m.getColumnas();m.getColumnas()+1){
			cout<<"\nDigite un numero: ["<<m.getColumnas()<<" "<<m.getColumnas()<<"]"<<":  ";
=======
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\nDigite un numero: ["<<i<<" "<<j<<"]"<<":  ";
>>>>>>> c7b13f6faf0b993d51baa357540b7bdf94ce836d
			str_cpy(datoEntero,ingresarDatosEnteros(" "));
			(*(*matriz+m.getFilas())+m.getColumnas())==funcion_atoi(datoEntero,strlen(datoEntero));
			//cin>>*(*(matriz+i)+j);
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
		}
		cout<<"\n";
	}

}
template<typename T>
<<<<<<< HEAD
T Matriz<T>::sumaMatriz(T **matriz1, T **matriz2, T **matrizResultado, int filas, int columnas){
	Matriz m;
	if((m.getFilas()==0)&&(m.getColumnas()==0))
		return *(*(matriz1+m.getFilas())+m.getColumnas()) += *(*(matriz2+m.getFilas())+m.getColumnas());
	else{
		if(m.getFilas()>-1){
			m.getColumnas()-1;
			if(m.getColumnas()>=-1)
				*(*(matrizResultado+m.getFilas())+m.getColumnas()) += *(*(matriz1+m.getFilas())+m.getColumnas()) += *(*(matriz2+m.getFilas())+m.getColumnas());
			else
				return **matrizResultado;
			
	}
}
	
}
=======
T Matriz<T>::sumaMatrizRecursiva(T **matriz1, T **matriz2, T f, T c,Matriz funcion){
	//cout<<"\nTEMPLATESUMA\n "<<endl;
	cout<<"Primero    ["<<f<<", "<<c<<"] "<<**matriz1-- +**matriz2--<<endl;
	//**matriz1=**matriz1+ **matriz2;
	if((f==0)&&(c==0)){
		**matriz1=**matriz1+ **matriz2;
		return **matriz1+ **matriz2;
	}else{
		if(f>-1){
			//cout<<"segundo "<<**matriz1+ **matriz2<<endl;
			c=c-1;
			f=f-1;
			if(c>=-1){
				cout<<"AQUI"<<endl;
				**matriz1=**matriz1 + **matriz2;
				cout<<"AQUI"<<endl;
				//cout<<mat1[f][c+1]+mat2[f][c+1]<<endl;
				return **matriz1+ **matriz2+funcion.sumaMatrizRecursiva(matriz1, matriz2, f, c,funcion);
			}else
			//cout<<"aqui          "<<sumaRecursivaMatrices(mat1, mat2, f-1, 2)<<endl;
				return sumaMatrizRecursiva(matriz1, matriz2, f, c,funcion);
		}
	}

}

template<typename T>
void Matriz<T>::multiplicarMatriz(T **matrizA, T **matrizB,T **resultado ,T fA, T cA, T fB, T cB)
{	int suma;
   //misno columnas A= Filas B
	//Matriz resultante filas A con Columnas B
	Matriz funcion;
	cout<<"\nLa multiplicacion de las matrices es \n "<<endl;

	for (int i=0; i<fA;i++){
		for(int j=0; j<cB;j++ ){
		//	*(*(resultado+i)+j)=0;
		//cout<<"Ingresa j"<<endl;
		suma=0;
			for(int k=0; k<cA;k++){
				//cout<<"Ingresa k"<<endl;
				//cout<<"["<<i<<k<<"]  ["<<i<<k<<"]  ["<<k<<j<<"] "<<endl;
				//cout<<(*(*(matrizA+i)+k))<<"    "<<(*(*(matrizA+i)+k))<<"    "<<(*(*(matrizB+k)+j))<<"Resultado multiplicacion "<<((*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j)))<<endl;
				(*(*(resultado+i)+k))= ((*(*(matrizA+i)+k)) * (*(*(matrizB+k)+j)));
				suma=suma+(*(*(resultado+i)+k));
			//	*(*(resultado+i)+j)=suma+(*(*(resultado+i)+k));
			}
			cout<<suma<<" | ";

		}printf("\n");
	}printf("\nfin");

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
>>>>>>> c7b13f6faf0b993d51baa357540b7bdf94ce836d
