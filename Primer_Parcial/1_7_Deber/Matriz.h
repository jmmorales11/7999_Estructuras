#include <iostream>

template<typename T>
class Matriz{
	public:
		void setMatriz(T m);
		T getMatriz() ;
		void setFilas(T f);
		T getFilas() const;
		void setColumnas(T c);
		T getColumnas() const;
		void setDato(T m);
		T getDato() ;
		void ingresarMatriz(T **m, T f, T c);
   		void sumaMatriz(T **m1 , T f, T c, T **m2);
  	 	void multiplicarMatriz(T **matrizA, T **matrizB,T **resultado, T fA, T cA, T fB, T cB);
	   	void imprimirMatriz(T **m , T f, T c);
	   	T sumaMatrizRecursiva(T **matriz1, T **matriz2, T f, T, Matriz funcion);
	private:
		T **matriz;
		T filas;
		T columnas;
		T dato;
};
