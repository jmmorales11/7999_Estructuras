/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 2 de Febrero de 2023 21:17:59
 * Purpose: Cuadrado Magico
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file Cubo.h
 * @author Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * @brief 
 * @version 0.1
 * @date 2023-02-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#if !defined(__Cubo_Magico_Cubo_h)
#define __Cubo_Magico_Cubo_h

class Cubo
{
public:
/**
 * @brief Funcion llenar cuadrado
 * 
 * @param a 
 * @param c 
 * @param d 
 */
   virtual void llenar(int a, int c, int d)=0;
   /**
    * @brief Funcion mostrar matriz
    * 
    * @param a 
    */
   virtual void mostrar(int a)=0;
   /**
    * @brief Funcion suma
    * 
    * @param a 
    * @param b 
    * @param c 
    */
   virtual void suma(int a, int b, int c)=0;

protected:
private:

};

#endif