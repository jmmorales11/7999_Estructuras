#include <iostream>

template<typename T>
class Matriz{
	public:
		void setMatriz(T m);
		T getMatriz() ;
		void setFilas(int f);
		int getFilas() const;
		void setColumnas(int c);
		int getColumnas() const;
		void ingresarMatriz(T **m, int f, int c);
   		T sumaMatriz(T **m1, T **m2 , T **r, int f, int c);
  	 	T multiplicarMatriz(T **m1, T **m2 , int f, int c);
	   void imprimirMatriz(T **m , int f, int c);
	private:
		T **matriz;
		int filas;
		int columnas;
};