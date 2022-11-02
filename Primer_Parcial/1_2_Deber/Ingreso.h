/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: viernes, 28 de octubre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file Ingreso.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Ingresar_Ingreso_h)
#define __Ingresar_Ingreso_h

#include "Interface_1.h"

class Ingreso : public Interface_1
{
public:
   /**
    * @brief Igreso de datos flotantes
    * 
    * @param msj 
    * @return char 
    */
   char ingresoflotantes(char msj);
   /**
    * @brief Ingreso de datos reales
    * 
    * @param msj 
    * @return char 
    */
   char ingresoDouble(char msj);
   /**
    * @brief Ingreso de datos caracter
    * 
    * @param msj 
    * @return char 
    */
   char ingresoChar(char msj);
   /**
    * @brief Ingreso de datos enteros
    * 
    * @param msj 
    * @return char 
    */
   char ingresarDatosEnteros(char msj);
protected:
private:

};

#endif
