/***********************************************************************
 * Module:  CuboMagico.cpp
 * Author:  Jeimy
 * Modified: miércoles, 1 de febrero de 2023 18:19:30
 * Purpose: Implementation of the class CuboMagico
 ***********************************************************************/

#include "CuboMagico.h"
#pragma once
////////////////////////////////////////////////////////////////////////
// Name:       CuboMagico::getCuadrado()
// Purpose:    Implementation of CuboMagico::getCuadrado()
// Return:     int**
////////////////////////////////////////////////////////////////////////

int** CuboMagico::getCuadrado(void)
{
   return cuadrado;
}

////////////////////////////////////////////////////////////////////////
// Name:       CuboMagico::setCuadrado(int** newCuadrado)
// Purpose:    Implementation of CuboMagico::setCuadrado()
// Parameters:
// - newCuadrado
// Return:     void
////////////////////////////////////////////////////////////////////////

void CuboMagico::setCuadrado(int** newCuadrado)
{
   cuadrado = newCuadrado;
}

////////////////////////////////////////////////////////////////////////
// Name:       CuboMagico::CuboMagico(int** a)
// Purpose:    Implementation of CuboMagico::CuboMagico()
// Parameters:
// - a
// Return:     
////////////////////////////////////////////////////////////////////////

CuboMagico::CuboMagico(int** a)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       CuboMagico::~CuboMagico()
// Purpose:    Implementation of CuboMagico::~CuboMagico()
// Return:     
////////////////////////////////////////////////////////////////////////

CuboMagico::~CuboMagico()
{
   // TODO : implement
}