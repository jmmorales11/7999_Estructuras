/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Miercoles, 30 de nombiebre de 2022 21:17:59
 * Purpose: ROL DE PAGO
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
#include <string>
using namespace std;
class Datos1
{
public:
   string getNombre(void);
   void setNombre(string newNombre);
   string getApellido(void);
   void setApellido(string newApellido);
   int getId(void);
   void setId(int newId);
   float getSueldo(void);
   void setSueldo(float newSueldo);
   int getDiasTrabajados(void);
   void setDiasTrabajados(int newDiasTrabajados);
   int getHoras100(void);
   void setHoras100(int newHoras100);
   int getHoras50(void);
   void setHoras50(int newHoras50);
   float getPrestamo(void);
   void setPrestamo(float newPrestamo);
   Datos1(string nom,string apell, int ID, int suel, int diasT, int h100, int h50, float pres);
 	Datos1();
   ~Datos1();
   Datos1 ingresarDatos(Datos1 *obj);

protected:
private:
   std::string nombre;
   std::string apellido;
   int id;
   float sueldo;
   int diasTrabajados;
   int horas100;
   int horas50;
   float prestamo;


};

#endif
