/***********************************************************************
 * Module:  Reina.h
 * Author:  Jeimy
 * Modified: viernes, 27 de enero de 2023 8:58:41
 * Purpose: Declaration of the class Reina
 ***********************************************************************/

#if !defined(__tablero_Reina_h)
#define __tablero_Reina_h

class Reina
{
public:
   bool getValidar__(void);
   void setValidar__(bool newValidar__);
   char getTablero__(void);
   void setTablero__(char newTablero__);
   bool getArchivo(void);
   void setArchivo(bool newArchivo);
   int getContador(void);
   void setContador(int newContador);
   int getN(void);
   void setN(int newN);
   Reina(int n1);
   ~Reina();

protected:
private:
   bool validar__;
   char tablero__;
   bool archivo;
   int contador;
   int n;


};

#endif