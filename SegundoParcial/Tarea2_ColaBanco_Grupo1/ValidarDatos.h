/***********************************************************************
 * Module:  Templates.h
 * Author:  Ariel Guevara, David Cantuña
 * Modified: domingo, 30 de octubre de 2022 12:39:07
 * Purpose: Declaration of the class Templates
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Templates_h)
#define __Class_Diagram_2_Templates_h

class ValidarDatos
{
public:
int validarEntero(const std::string& mensaje );
float validarDoubles(const std::string& mensaje);
std::string validarLetras(const std::string& mensaje);
protected:
private:

};

#endif
