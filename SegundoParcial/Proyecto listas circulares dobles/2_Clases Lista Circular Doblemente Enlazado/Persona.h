/***********************************************************************
 * Module:  Persona.h
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 8:55:32
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h



#include <string>
#include <stdlib.h>
#pragma once
class Persona 
{
public:
   Persona(std::string ced,std::string nom,std::string apell);
   ~Persona();
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
 
   
  


protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   

};

#endif
