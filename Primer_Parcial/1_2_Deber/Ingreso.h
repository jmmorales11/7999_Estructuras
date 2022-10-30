/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: viernes, 28 de octubre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Ingresar_Ingreso_h)
#define __Ingresar_Ingreso_h

#include "Interface_1.h"

class Ingreso : public Interface_1
{
public:
   char ingresoflotantes(char msj);
   char ingresoDouble(char msj);
   char ingresoChar(char msj);

protected:
private:

};

#endif
