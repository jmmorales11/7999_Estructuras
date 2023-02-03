/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 2 de Febrero de 2023 21:17:59
 * Purpose: Cuadrado Magico
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file FuncionesCubo.h
 * @author Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * @brief 
 * @version 0.1
 * @date 2023-02-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "CuboMagico.cpp"
#include "Cubo.h"
 class FuncionesCubo:public Cubo{
 	public:
 		CuboMagico *cubo;
		/**
		 * @brief Constructor
		 * 
		 * @param cub 
		 */
 		FuncionesCubo(CuboMagico *cub){
 			this->cubo=cub;
		 }
		 /**
		  * @brief Funcion mostrar
		  * 
		  */
		void mostrar(int);
		/**
		 * @brief Funcion llenar cuadrado
		 * 
		 */
		void llenar(int, int, int);
		/**
		 * @brief Funcion suma
		 * 
		 */
		void suma(int, int, int);
		/**
		 * @brief Funcion mostrar
		 * 
		 */
		void mostrar1(int);
		/**
		 * @brief Funcion llenar cuadrado
		 * 
		 */
		void llenar1(int, int, int);
		/**
		 * @brief Funcion mostrar
		 * 
		 */
		void mostrar2(int);
		/**
		 * @brief Funcion mostrar
		 * 
		 */
		void llenar2(int, int, int);
 };