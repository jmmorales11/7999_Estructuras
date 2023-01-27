/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 19 de Enero de 2023 21:17:59
 * Purpose: Grafico del Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
/**
 * @file ArbolRadix.h
 * @author Marley Morales y Camilo Orrico (caorrico@espe.edu.ec)
 * @brief 
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Nodo.cpp"

class ArbolRadix {
	public:
	Nodo* raiz;
	public:
	/**
	 * @brief Constructor de Arbol Radix
	 * 
	 */
  	ArbolRadix();
	/**
	 * @brief Funcion Insertar
	 * 
	 * @param palabra 
	 */
  	void insertar(string palabra);
	/**
	 * @brief Funcion buscar
	 * 
	 * @param palabra 
	 * @return true 
	 * @return false 
	 */
  	bool buscar(string palabra);
	/**
	 * @brief Funcion imprimir
	 * 
	 * @param nodo 
	 * @param prefijo 
	 */
  	void imprimir(Nodo* nodo, string prefijo);
	/**
	 * @brief Funcion imprimir de diferente manera
	 * 
	 * @param nodo 
	 * @param prefijo 
	 * @param nivel 
	 */
    void imprimirDife(Nodo* nodo, string prefijo, int nivel);
	/**
	 * @brief Funcion eliminar
	 * 
	 * @param nodo 
	 * @param palabra 
	 * @param nivel 
	 * @return true 
	 * @return false 
	 */
    bool eliminar(Nodo* nodo, string palabra, int nivel);
	/**
	 * @brief Funcion nivel
	 * 
	 * @param nodo 
	 * @param nivel 
	 */
    void NI(Nodo* nodo, int nivel);
	/**
	 * @brief Funcion del grafico
	 * 
	 * @param nodo 
	 * @param x 
	 * @param y 
	 */
    void recorrer(Nodo *nodo, int x, int y);
	/**
	 * @brief Funcion para calcular el tamaño de una computadora windows
	 * 
	 * @param ancho 
	 * @param altura 
	 */
    void tamPantalla(int& ancho, int& altura);
};