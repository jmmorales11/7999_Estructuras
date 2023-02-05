/**
 * @file FuncionesInterfaz.h
 * @author Marley Morales y Camilo Orrico
 * @brief 
 * @version 0.1
 * @date 2023-01-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Tablero.h"
#include <iostream>
#include <fstream>
#include "Reina.cpp"
using namespace std;
class FuncionesInterfaz:public Tablero{
	
	public:
	fstream archivo;
	Reina *reina;
	/**
	 * @brief Constructor
	 * 
	 * @param rei 
	 */
	FuncionesInterfaz(Reina *rei){
		this->reina=rei;
		this->encerarTablero();
		this->crearArchivo();
	}
	/**
	 * @brief  Funcion encerar
	 * 
	 */
	void encerarTablero(void);
	/**
	 * @brief Funcion crear archivo
	 * 
	 */
   	void crearArchivo(void);
	/**
	 * @brief Funcion bloquear
	 * 
	 * @param x 
	 * @param y 
	 */
   	void bloquear(int x, int y);
	/**
	 * @brief Funcion mostrar
	 * 
	 */
   	void mostrar(void);
	/**
	 * @brief Funcion quitar relleno
	 * 
	 * @param x 
	 * @param y 
	 */
   	void quitarRelleno(int x, int y);
	/**
	 * @brief Funcion solucion
	 * 
	 * @param x 
	 * @param y 
	 * @param n1 
	 */
    void solucion(int x, int y, int n1);
	/**
	 * @brief Funcion solucion reinas
	 * 
	 */
    void solucionReinas(void);
	void dibujoReina(int fila, int columna);
		
};