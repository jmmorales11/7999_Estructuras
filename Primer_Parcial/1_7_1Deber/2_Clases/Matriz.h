/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#define __Matriz_Matriz_h
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
  	 	void multiplicarMatriz(T **matrizA, T **matrizB,T **resultado,T **resultado1, T fA, T cA, T fB, T cB);
	   	void imprimirMatriz(T **m , T f, T c);
	   	T sumaMatrizRecursiva(T **matriz1, T **matriz2,T **resultado, T f, T, Matriz funcion);
	   	void multiplicacion(T **a,T ** b, T **res, T f, T c, T c1,T suma, T pri, T seg, T i, T k, T j,Matriz funcion);
	private:
		T **matriz;
		T filas;
		T columnas;
		T dato;
};
