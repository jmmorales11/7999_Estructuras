/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: viernes, 28 de octubre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file Interface_1.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Ingresar_Interface_1_h)
#define __Ingresar_Interface_1_h

class Interface_1
{
public:
   /**
    * @brief Ingreso de datos flotantes
    * 
    * @param msj 
    * @return char 
    */
   virtual char ingresoflotantes(char msj)=0;
   /**
    * @brief Ingreso de datos reales
    * 
    * @param msj 
    * @return char 
    */
   virtual char ingresoDouble(char msj)=0;
   /**
    * @brief Ingreso de datos caracter
    * 
    * @param msj 
    * @return char 
    */
   virtual char ingresoChar(char msj)=0;
   /**
    * @brief Ingreso de datos enteros
    * 
    * @param msj 
    * @return char 
    */
   virtual char ingresarDatosEnteros(char msj)=0;
protected:
private:

};

#endif
