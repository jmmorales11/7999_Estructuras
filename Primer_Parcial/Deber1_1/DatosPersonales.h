/***********************************************************************
 * Module:  DatosPersonales.h
 * Author:  Jeimy
 * Modified: jueves, 27 de octubre de 2022 18:47:31
 * Purpose: Declaration of the class DatosPersonales
 ***********************************************************************/

#if !defined(__Class_Diagram_2_DatosPersonales_h)
#define __Class_Diagram_2_DatosPersonales_h
#include <string>
class DatosPersonales
{
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   int getAnoActual(void);
   void setAnoActual(int newAnoActual);
   int getAnoNacimiento(void);
   void setAnoNacimiento(int newAnoNacimiento);
   int getEdad(void);
   void setEdad(int newEdad);
   DatosPersonales(std::string cedu, std::string nom, std::string ape, int yearA, int yearN);
   ~DatosPersonales();
   DatosPersonales calcularEdad(DatosPersonales objEdad);
   void imprimir(DatosPersonales obj);

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   int anoActual;
   int anoNacimiento;
   int edad;


};

#endif
