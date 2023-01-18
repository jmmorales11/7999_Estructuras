/***********************************************************************
 * Module:  Persona.h
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 8:55:32
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

#include "Interface_Persona.h"
#include "Fecha.cpp"
#include <string>
#include <stdlib.h>
class Persona : public Interface_Persona
{
public:
   Persona(std::string ced,std::string nom,std::string apell,Fecha *eda);
   ~Persona();
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   Fecha* getEdad(void);
   void setEdad(Fecha *newEdad);
   void ingresoDatos(Persona *obj);
   //Tiempo de espera
   float calcularTSalidaTEntrada(int TEntrada, int TSalida);
   float tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio);
   float tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior);
   float generarTiempoRandom(int min, int max);
   float timpoCajero(int tiempoLlegada, int tiempoSalida);
   int generarTiempoRandom(int min, int max, int anterior);

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   Fecha *edad;

};

#endif
