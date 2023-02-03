/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 2 de Febrero de 2023 21:17:59
 * Purpose: Cuadrado Magico
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file CuboMagico.h
 * @author Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * @brief 
 * @version 0.1
 * @date 2023-02-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#if !defined(__Cubo_Magico_CuboMagico_h)
#define __Cubo_Magico_CuboMagico_h

class CuboMagico
{
public:
/**
 * @brief Obtener el objecto Cuadrado 
 * 
 * @return int** 
 */
   int** getCuadrado(void);
   /**
    * @brief Insertar el objecto Cuadrado
    * 
    * @param newCuadrado 
    */
   void setCuadrado(int** newCuadrado);
   /**
    * @brief Constructor
    * 
    * @param a 
    */
   CuboMagico(int** a);
   /**
    * @brief Destructor
    * 
    */
   ~CuboMagico();

protected:
private:
   int** cuadrado;


};

#endif