/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
 ///SIRVE


/**
 * @file Lista.h
 * @author Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Nodo.h"
#include <iostream>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		/**
		 * @brief Constructor de Lista
		 * 
		 */
		Lista();
		/**
		 * @brief Funcion para insertar objetos
		 * 
		 * @param obj 
		 */
		void insertar(informacion *obj);
		/**
		 * @brief Funcion para mostrar la lista
		 * 
		 */
		void mostrarLista();
		/**
		 * @brief Funcion Buscar
		 * 
		 * @param elementoBuscar 
		 */
		void buscar(int elementoBuscar);//encontrar primera ocurrencia
		/**
		 * @brief Funcion buscar objeto
		 * 
		 * @param cedula 
		 * @return true 
		 * @return false 
		 */
		bool buscarObj(int cedula);
		/**
		 * @brief Funcion Eliminar
		 * 
		 * @param elemento 
		 */
		void eliminar(int elemento);
		/**
		 * @brief Funcion Imprimir por cola
		 * 
		 * @param lis 
		 * @param tam 
		 */
		void imprimirCola(Lista lis,int tam);
		/**
		 * @brief Funcion Insertar por cola
		 * 
		 * @param num 
		 */
		void insertarCola(int num);
		/**
		 * @brief Funcion Buscar elemento
		 * 
		 * @param pos 
		 */
		void buscarElemento(int pos);
		/**
		 * @brief Funcion MCM
		 * 
		 * @param lis 
		 * @return int 
		 */
		int minimoMultiplo(Lista lis);
		/**
		 * @brief Funcion MCD
		 * 
		 * @param lis 
		 * @return int 
		 */
		int maximoDivisor(Lista lis);
		/**
		 * @brief Funcion copiar Lista
		 * 
		 * @param lis 
		 * @return Lista 
		 */
		Lista copiarLista(Lista  lis);
		/**
		 * @brief Funcion para imprimir la lista 
		 * 
		 * @return string 
		 */
		string toString();	
};
