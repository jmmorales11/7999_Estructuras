/***********************************************************************
 * Module:  Proceso.h
 * Author:  Fernando
 * Modified: miércoles, 1 de febrero de 2023 11:01:39
 * Purpose: Declaration of the class Proceso
 ***********************************************************************/

#if !defined(__Class_Diagram_2_Proceso_h)
#define __Class_Diagram_2_Proceso_h

class Proceso
{
public:
   virtual void llenar(int a, int b)=0;
   virtual void mostrar(int a, int b)=0;

protected:
private:

};

#endif