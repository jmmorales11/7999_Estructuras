/***********************************************************************
 * Module:  Reina.cpp
 * Author:  Jeimy
 * Modified: viernes, 27 de enero de 2023 8:58:41
 * Purpose: Implementation of the class Reina
 ***********************************************************************/

#include "Reina.h"
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Reina::getValidar__()
// Purpose:    Implementation of Reina::getValidar__()
// Return:     bool
////////////////////////////////////////////////////////////////////////
Reina::Reina(int n1)
{
   this->n=n1;
   
}
Reina::Reina()
{
   
}
bool** Reina::getValidar(void)
{
   return validar;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::setValidar__(bool newValidar__)
// Purpose:    Implementation of Reina::setValidar__()
// Parameters:
// - newValidar__
// Return:     void
////////////////////////////////////////////////////////////////////////

void Reina::setValidar(bool **newValidar)
{
   validar = newValidar;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::getTablero__()
// Purpose:    Implementation of Reina::getTablero__()
// Return:     char
////////////////////////////////////////////////////////////////////////

char** Reina::getTablero(void)
{
   return tablero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::setTablero__(char newTablero__)
// Purpose:    Implementation of Reina::setTablero__()
// Parameters:
// - newTablero__
// Return:     void
////////////////////////////////////////////////////////////////////////

void Reina::setTablero(char **newTablero)
{
   tablero= newTablero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::getContador()
// Purpose:    Implementation of Reina::getContador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Reina::getContador(void)
{
   return contador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::setContador(int newContador)
// Purpose:    Implementation of Reina::setContador()
// Parameters:
// - newContador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Reina::setContador(int newContador)
{
   contador = newContador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::getN()
// Purpose:    Implementation of Reina::getN()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Reina::getN(void)
{
   return n;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::setN(int newN)
// Purpose:    Implementation of Reina::setN()
// Parameters:
// - newN
// Return:     void
////////////////////////////////////////////////////////////////////////

void Reina::setN(int newN)
{
   n = newN;
}

////////////////////////////////////////////////////////////////////////
// Name:       Reina::Reina(int n1)
// Purpose:    Implementation of Reina::Reina()
// Parameters:
// - n1
// Return:     
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
// Name:       Reina::~Reina()
// Purpose:    Implementation of Reina::~Reina()
// Return:     
////////////////////////////////////////////////////////////////////////

Reina::~Reina()
{
   // TODO : implement
}

