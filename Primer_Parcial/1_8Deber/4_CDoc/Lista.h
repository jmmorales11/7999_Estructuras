/**
 * @file Lista.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
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
	 * @brief Constructor
	 * 
	 */
		Lista();
		/**
		 * @brief funcion insertar lista
		 * 
		 * @param val 
		 */
		void insertar(int val);
		/**
		 * @brief funcion mostrar lista
		 * 
		 */
		void mostrarLista();
		/**
		 * @brief funcion buscar 
		 * 
		 * @param elementoBuscar 
		 */
		void buscar(int elementoBuscar);//encontrar primera ocurrencia
		/**
		 * @brief funcion eliminar elemento de la lista
		 * 
		 * @param elemento 
		 */
		void eliminar(int elemento);
		/**
		 * @brief funcion imprimir desde la cola
		 * 
		 * @param lis 
		 * @param tam 
		 */
		void imprimirCola(Lista lis,int tam);
		/**
		 * @brief funcion insertar elementos al final
		 * 
		 * @param num 
		 */
		void insertarCola(int num);
		/**
		 * @brief funcion buscar elemento de la lista
		 * 
		 * @param pos 
		 */
		void buscarElemento(int pos);		
};
