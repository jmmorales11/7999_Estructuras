/***********************************************************************
 * Module:  Conjuntos.h
 * Author:  Jeimy
 * Modified: lunes, 20 de febrero de 2023 9:59:41
 * Purpose: Declaration of the class Conjuntos
 ***********************************************************************/
/**
 * @file Conjuntos.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "ListaDoble.cpp"

class Conjuntos
{
public:
	virtual void uniones(ListaDoble<string> *lista1, ListaDoble<string> *lista2,ListaDoble<string> *lista3)=0;
    virtual void interseccion(ListaDoble<string> *lista1, ListaDoble<string> *lista2,ListaDoble<string> *lista3)=0;
    virtual void complemento(ListaDoble<string> *lista1, ListaDoble<string> *lista2,ListaDoble<string> *lista3)=0;
    virtual void diferencia(ListaDoble<string> *lista1, ListaDoble<string> *lista2, ListaDoble<string> *lista3=0);
    virtual void diferenciaSimetrica(ListaDoble<string> *lista1, ListaDoble<string> *lista2,ListaDoble<string> *lista3)=0;

protected:
private:

};
