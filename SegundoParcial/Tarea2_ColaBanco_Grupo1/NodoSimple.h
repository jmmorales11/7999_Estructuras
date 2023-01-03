/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 19/12/2022
FECHA DE MODIFICACIÓN: 19/12/2022
Grupo1-Gestión banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#if !defined(__Class_Diagram_1_NodoSimple_h)
#define __Class_Diagram_1_NodoSimple_h

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Persona.cpp"
#pragma once
class NodoSimple
{
public:
   NodoSimple(Persona *objP, NodoSimple *);
   ~NodoSimple();
   NodoSimple *getSiguiente(void);
   void setSiguiente(NodoSimple *newSiguiente);
   Persona* getObjP(void);
   void setObjP(Persona *newObjP);

protected:
private:
   NodoSimple *siguiente;
   Persona *objP;


};

#endif