/**
 * @file Nodo.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once
#include <time.h>
class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
	/**
	 * @brief Constructor
	 * 
	 * @param val 
	 * @param sig 
	 */
		Nodo(int val, Nodo *sig=NULL){
			this->valor=val;
			this->siguiente=sig;
		}
	friend class Lista;
};
