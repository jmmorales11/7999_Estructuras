/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa
 * Modificacion: Martes, 14 de noviembre 
 * Purpose: Operaciones con Matrices
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
/**
 * @file Matriz.h
 * @author Jeimy Marley (jmmorales11@espe.edu.ec)
 * @brief 
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h
template<typename T>
class Matriz{
	public:
	/**
	 * @brief Set the Matriz object
	 * Modificar los datos de la matriz
	 * @param m 
	 */
		void setMatriz(T m);
		/**
		 * @brief Get the Matriz object
		 * Visualizar los datos de la matriz
		 * @return T 
		 */
		T getMatriz() ;
		/**
		 * @brief Set the Filas object
		 * editar el numero de filas para la matriz
		 * @param f 
		 */
		void setFilas(T f);
		/**
		 * @brief Get the Filas object
		 * Mostrar el numero de filas de la matriz
		 * @return T 
		 */
		T getFilas() const;
		/**
		 * @brief Set the Columnas object
		 * Modificar el numero de columnas de la Matriz
		 * @param c 
		 */
		void setColumnas(T c);
		/**
		 * @brief Get the Columnas object
		 * Mostrar las columnas de la matriz
		 * @return T 
		 */
		T getColumnas() const;
		/**
		 * @brief Set the Dato object
		 * Modificar el dato
		 * @param m 
		 */
		void setDato(T m);
		/**
		 * @brief Get the Dato object
		 * mostrar dato
		 * @return T 
		 */
		T getDato() ;
		/**
		 * @brief 
		 * Ingreso de datos para la matriz mediante punteros
		 * @param m 
		 * @param f 
		 * @param c 
		 */
		void ingresarMatriz(T **m, T f, T c);
		/**
		 * @brief 
		 * Suma dos matrices y guarda el resultado en memoria
		 * @param m1 
		 * @param f 
		 * @param c 
		 * @param m2 
		 */
   		void sumaMatriz(T **m1 , T f, T c, T **m2);
		   /**
		    * @brief 
		    * Multiplicacion de dos matrices y las devuelve en una tercera matriz
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
	   	 * @brief 
	   	 * Imprime la matriz guardada en memoria
	   	 * @param m 
	   	 * @param f 
	   	 * @param c 
	   	 */
		void imprimirMatriz(T **m , T f, T c);
	   	T sumaMatrizRecursiva(T **matriz1, T **matriz2,T **resultado, T f, T, Matriz funcion);
	private:
		T **matriz;
		T filas;
		T columnas;
		T dato;
};
