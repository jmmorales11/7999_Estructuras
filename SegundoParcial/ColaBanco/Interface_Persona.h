/***********************************************************************
 * Module:  Interface_Persona.h
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 9:06:55
 * Purpose: Declaration of the class Interface_Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Interface_Persona_h)
#define __Class_Diagram_1_Interface_Persona_h

class Interface_Persona
{
public:
   virtual float calcularTSalidaTEntrada(int TEntrada, int TSalida)=0;
   virtual float tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio)=0;
   virtual float tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior)=0;
   virtual int generarTiempoRandom(int min, int max, int anterior)=0;
   virtual float timpoCajero(int tiempoLlegada, int tiempoSalida)=0;

protected:
private:

};

#endif
