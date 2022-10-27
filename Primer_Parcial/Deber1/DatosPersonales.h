/***********************************************************************
 * Module:  DatosPersonales.h
 * Author:  Jeimy
 * Modified: miércoles, 26 de octubre de 2022 21:23:59
 * Purpose: Declaration of the class DatosPersonales
 ***********************************************************************/

#if !defined(__Class_Diagram_2_DatosPersonales_h)
#define __Class_Diagram_2_DatosPersonales_h

class DatosPersonales
{
public:
   char getCedula(void);
   void setCedula(char newCedula);
   char getNombre(void);
   void setNombre(char newNombre);
   char getApellido(void);
   void setApellido(char newApellido);
   int getAnoActual(void);
   void setAnoActual(int newAnoActual);
   int getAnoNacimiento(void);
   void setAnoNacimiento(int newAnoNacimiento);
   int getEdad(void);
   void setEdad(int newEdad);
   DatosPersonales(char cedu, char nom, char ape, int yearA, int yearN);
   ~DatosPersonales();
   DatosPersonales calcularEdad(int anoP, int anon);
   void imprimir(void);

protected:
private:
   char cedula;
   char nombre;
   char apellido;
   int anoActual;
   int anoNacimiento;
   int edad;


};

#endif