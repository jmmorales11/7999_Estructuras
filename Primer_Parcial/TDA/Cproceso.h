
/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: jueves, 27 de octubre de 2022 21:17:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file Cproceso.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Proceso2_Cproceso_h)
#define __Proceso2_Cproceso_h

class Cproceso
{
public:
   /**
    * @brief Obtener el objeto Num
    * 
    * @return int 
    */
   int getNum(void);
   /**
    * @brief Editar el objeto Num
    * 
    * @param newNum 
    */
   void setNum(int newNum);
   /**
    * @brief Obtener el objeto Den
    * 
    * @return int 
    */
   int getDen(void);
   /**
    * @brief Editar el objeto Den
    * 
    * @param newDen 
    */
   void setDen(int newDen);
   /**
    * @brief Constructor
    * 
    * @param nume 
    * @param deno 
    */
   Cproceso(int nume, int deno);
   /**
    * @brief Destructor
    * 
    */
   ~Cproceso();
   /**
    * @brief Funcion relacional
    * 
    * @param numer 
    * @param denom 
    * @return Cproceso 
    */
   Cproceso relacional(Cproceso numer, Cproceso denom);
   /**
    * @brief Funcion para imprimir los resultados
    * 
    * @param obj 
    * @return int 
    */
   int imprimirObj(Cproceso obj);

protected:
private:
   int num;
   int den;


};

#endif