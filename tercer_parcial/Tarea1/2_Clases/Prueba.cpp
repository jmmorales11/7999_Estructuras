
#include <iostream>
#include "Matriz.cpp"
#define MAX 5

using namespace std;

int main(int argc, char** argv){
	Matriz <int> f;
	Matriz <int> c;
	Matriz <int>seleccionar;
	int i,j,suma = 0,potencia,cont=0;
	char datoEntero[10];
	int **matriz1 ,**matriz2, **resultado,**resultado1,**resultado2 ;
	Matriz<int> funcion;
	cout<<"\nIngreso de la primera matriz"<<endl;
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de filas : "));
	f.setFilas(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite el numero de columnas : "));
	c.setColumnas(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nDigite la potencia "));
	potencia=funcion_atoi(datoEntero,strlen(datoEntero));
	if (f.getFilas()==c.getColumnas()){

	matriz1 = new  int*[MAX];
	for ( i=0;i<f.getFilas();i++){
		matriz1[i] = new int[MAX];
	}

	resultado2 = new  int*[MAX];
	for (i=0;i<f.getFilas();i++){
		resultado2[i] =new int[MAX];
	}
	funcion.ingresarMatriz(matriz1,f.getFilas(),c.getColumnas());
	funcion.imprimirMatriz(matriz1 ,f.getFilas(),c.getColumnas());
//	funcion.imprimirMatriz(matriz2 ,f.getFilas(),c.getColumnas());
	while (potencia >cont){
		if (potencia==1){
			funcion.imprimirMatriz(matriz1 ,f.getFilas(),c.getColumnas());
		}else if (cont==2){
			funcion.multiplicacion( matriz1, matriz1,resultado2, f.getFilas(), c.getColumnas(), suma, 0, 0, 0, funcion);
		}else if (cont>2){
			funcion.multiplicacion(matriz1, resultado2,resultado2, f.getFilas(), c.getColumnas(), suma, 0, 0, 0, funcion);
		}
		
		cont++;
	}
	
	funcion.imprimirMatriz(resultado2 ,f.getFilas(),c.getColumnas());
	}else{
		cout<<"\nNo es posible calcular "<<endl;
	}
}



