/***********************************************************************
 * Module:  Mochila.h
 * Author:  camilo Orrico Y morales Marley
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Declaration of the class Mochila
 ***********************************************************************/

#if !defined(__MochilaVoraz_Mochila_h)
#define __MochilaVoraz_Mochila_h

class Mochila
{
public:
   int getPeso(void);
   void setPeso(int newPeso);
   int getValor(void);
   void setValor(int newValor);
   float getIndice(void);
   Mochila(int, int);
   void setIndice(float newIndice);
   ~Mochila();
   void ingresarDatos(void);
protected:
private:
   int peso;
   int valor;
   float indice;


};

#endif