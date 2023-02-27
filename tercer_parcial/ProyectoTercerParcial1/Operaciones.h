/**
 * @file Operaciones.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Conjuntos.h"
#include "ListaDoble.cpp"
template <typename T> 
class Operaciones
{
public:
   /**
    * @brief Constructor
    * 
   */
	Operaciones();
   /**
    * @brief Funcion union
    * 
    * @param lista1
    * @param lista2
    * @param lista3
    */
   void uniones(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   /**
    * @brief Funcion interseccion
    * 
    * @param lista1
    * @param lista2
    * @param lista3
    */
   void interseccion(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   /**
    * @brief Funcion complemento
    * 
    * @param lista1
    * @param lista2
    * @param lista3
    */
   void complemento(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   /**
    * @brief Funcion diferecia
    * 
    * @param lista1
    * @param lista2
    * @param lista3
    */
   void diferencia(ListaDoble<T> *lista1, ListaDoble<T> *lista2, ListaDoble<T> *lista3);
   /**
    * @brief Funcion diferencia simetrica
    * 
    * @param lista1
    * @param lista2
    * @param lista3
    */
   void diferenciaSimetrica(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   /**
    * @brief Funcion comparar
    * 
    * @param lista1
    * @param lista2
    * @return bool
    */
   bool comparar(ListaDoble<T> *lista1, ListaDoble<T> *lista2);
   /**
    * @brief Funcion copiar
    * 
    * @param lista1
    * @param lista2
    * @return ListaDoble<T>
    */
   ListaDoble<T> copiar(ListaDoble<T> *l1,ListaDoble<T> *l2);
   /**
    * @brief Funcion comparar
    * 
    * @return long
    */
   long obtenerTiempo();
   /**
    * @brief Funcion mostrar
    * 
    * @param lista1
    * @param lista2
    */
   void mostrar(ListaDoble<T> *lista);
protected:
private:
	
	

};
