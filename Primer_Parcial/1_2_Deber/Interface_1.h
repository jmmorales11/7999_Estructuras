/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: viernes, 28 de octubre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Ingresar_Interface_1_h)
#define __Ingresar_Interface_1_h

class Interface_1
{
public:
   virtual char ingresoflotantes(char msj)=0;
   virtual char ingresoDouble(char msj)=0;
   virtual char ingresoChar(char msj)=0;

protected:
private:

};

#endif
