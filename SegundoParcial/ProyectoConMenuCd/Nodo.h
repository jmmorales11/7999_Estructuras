/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 19 de Enero de 2023 21:17:59
 * Purpose: Grafico del Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
/**
 * @file Nodo.h
 * @author Marley Morales y Camilo Orrico (caorrico@espe.edu.ec)
 * @brief 
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <string>
#include <unordered_map>

using namespace std;
class Nodo {
private:
    unordered_map<char, Nodo*> hijos;	
	bool finalDePalabra;
	string palabra;
public:
    /**
     * @brief Obtener el objecto Hijos 
     * 
     * @return unordered_map<char, Nodo*> 
     */
    unordered_map<char, Nodo*> getHijos();
    /**
     * @brief Insertar el objecto Hijos
     * 
     * @param newHijos 
     */
    void setHijos(unordered_map<char, Nodo*> newHijos);
    /**
     * @brief Obtener el objecto Final Palabra
     * 
     * @return true 
     * @return false 
     */
    bool getFinalPalabra();
    /**
     * @brief Obtener el objecto Palabra
     * 
     * @return string 
     */
    string getPalabra();
    /**
     * @brief Insertar el objecto Final Palabra
     * 
     * @param newFinalPalabra 
     */
    void setFinalPalabra(bool newFinalPalabra);
    /**
     * @brief Insertar el objecto Palabra
     * 
     * @param newPalabra 
     */
    void setPalabra(string newPalabra);

};
