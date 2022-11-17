/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#define __Matriz_Matriz_h
template<typename T>
class Matriz{
	public:
		/**
		 * @brief Ingresar objeto Matriz
		 * 
		 * @param m 
		 */
		void setMatriz(T m);
		/**
		 * @brief Obtener objeto Matriz
		 * 
		 * @return T 
		 */
		T getMatriz() ;
		/**
		 * @brief Ingresar objeto Filas
		 * 
		 * @param f 
		 */
		void setFilas(T f);
		/**
		 * @brief Obtener objeto Filas
		 * 
		 * @return T 
		 */
		T getFilas() const;
		/**
		 * @brief Ingresar objeto Columnas
		 * 
		 * @param c 
		 */
		void setColumnas(T c);
		/**
		 * @brief Obtener objeto Columnas
		 * 
		 * @return T 
		 */
		T getColumnas() const;
		/**
		 * @brief Ingresar objeto Dato
		 * 
		 * @param m 
		 */
		void setDato(T m);
		/**
		 * @brief Obtener objeto Dato
		 * 
		 * @return T 
		 */
		T getDato() ;
		/**
		 * @brief Ingreso de Matriz
		 * 
		 * @param m 
		 * @param f 
		 * @param c 
		 */
		void ingresarMatriz(T **m, T f, T c);
		/**
		 * @brief Funcion de suma de matrices
		 * 
		 * @param m1 
		 * @param f 
		 * @param c 
		 * @param m2 
		 */
   		void sumaMatriz(T **m1 , T f, T c, T **m2);
		/**
		 * @brief Funcion de Multiplicacion de matrices
		 * 
		 * @param matrizA 
		 * @param matrizB 
		 * @param resultado 
		 * @param resultado1 
		 * @param fA 
		 * @param cA 
		 * @param fB 
		 * @param cB 
		 */
  	 	void multiplicarMatriz(T **matrizA, T **matrizB,T **resultado,T **resultado1, T fA, T cA, T fB, T cB);
		/**
		 * @brief Funcion que imprime la matriz
		 * 
		 * @param m 
		 * @param f 
		 * @param c 
		 */
	   	void imprimirMatriz(T **m , T f, T c);
		/**
		 * @brief Funcion de suma recursiva de matrices
		 * 
		 * @param matriz1 
		 * @param matriz2 
		 * @param resultado 
		 * @param f 
		 * @param funcion 
		 * @return T 
		 */
	   	T sumaMatrizRecursiva(T **matriz1, T **matriz2,T **resultado, T f, T, Matriz funcion);
		/**
		 * @brief Funcion de Multiplicacion recursiva de matrices
		 * 
		 * @param matrizA 
		 * @param matrizB 
		 * @param matrizResultado 
		 * @param f 
		 * @param c 
		 * @param c1 
		 * @param suma 
		 * @param primero 
		 * @param segundo 
		 * @param i 
		 * @param k 
		 * @param j 
		 * @param funcion 
		 */
	   	void multiplicacion(T **matrizA,T **matrizB, T **matrizResultado, T f, T c, T c1,T suma, T primero, T segundo, T i, T k, T j, Matriz funcion);
	private:
		T **matriz;
		T filas;
		T columnas;
		T dato;
};
