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
		 * @brief Insertar el objecto Matriz
		 * 
		 * @param m 
		 */
		void setMatriz(T m);
		/**
		 * @brief Obtener el objecto Matriz 
		 * 
		 * @return T 
		 */
		T getMatriz() ;
		/**
		 * @brief Insertar el objecto Filas
		 * 
		 * @param f 
		 */
		void setFilas(T f);
		/**
		 * @brief Obtener el objecto Filas
		 * 
		 * @return T 
		 */
		T getFilas() const;
		/**
		 * @brief Insertar el objecto Columnas
		 * 
		 * @param c 
		 */
		void setColumnas(T c);
		/**
		 * @brief Obtener el objecto Columnas
		 * 
		 * @return T 
		 */
		T getColumnas() const;
		/**
		 * @brief Insertar el objecto Dato
		 * 
		 * @param m 
		 */
		void setDato(T m);
		/**
		 * @brief Obtener el objecto Dato
		 * 
		 * @return T 
		 */
		T getDato() ;
		/**
		 * @brief Funcion del ingreso de la matriz
		 * 
		 * @param m 
		 * @param f 
		 * @param c 
		 */
		void ingresarMatriz(T **m, T f, T c);
		/**
		 * @brief Funcion del ingreso de la matriz recursiva
		 * 
		 * @param matriz 
		 * @param matriz1 
		 * @param filas 
		 * @param columnas 
		 */
		void ingresarMatrizRecursiva(T **matriz,T **matriz1 ,T filas, T columnas);
		/**
		 * @brief Funcion suma de matrices
		 * 
		 * @param m1 
		 * @param f 
		 * @param c 
		 * @param m2 
		 */
   		void sumaMatriz(T **m1 , T f, T c, T **m2);
		/**
		 * @brief Funcion multiplicacion de matrices
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
	   	 * @brief Funcion imprimir la matriz
	   	 * 
	   	 * @param m 
	   	 * @param f 
	   	 * @param c 
	   	 */
		void imprimirMatriz(T **m , T f, T c);
		/**
		 * @brief Funcion suma recursiva
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
	   	 * @brief Funcion multiplicacion
	   	 * 
	   	 * @param matrizA 
	   	 * @param matrizB 
	   	 * @param matrizResultado 
	   	 * @param f 
	   	 * @param c 
	   	 * @param suma 
	   	 * @param i 
	   	 * @param k 
	   	 * @param j 
	   	 * @param funcion 
	   	 */
		void multiplicacion( T **matrizA,T **matrizB, T **matrizResultado, T f, T c, T suma, T i, T k, T j, Matriz funcion);
	   	/**
	   	 * @brief Funcion multiplicacion n veces
	   	 * 
	   	 * @param funcion 
	   	 * @param valor 
	   	 */
		void multiplicacionNveces(Matriz funcion, T valor);
		/**
		 * @brief Funcion para crear espacios
		 * 
		 * @param matriz 
		 * @param filas 
		 * @param columnas 
		 */
	   	void espacios(T **matriz, T filas, T columnas);
	private:
		T **matriz;
		T filas;
		T columnas;
		T dato;
};
