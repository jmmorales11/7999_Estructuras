/***********************************************************************
 * Module:  Mochila.cpp
 * Author:  camilo Orrico Y Morales Jeimy
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Implementation of the class Mochila
 ***********************************************************************/

#if !defined(__MochilaVoraz_Mochila_h)
#define __MochilaVoraz_Mochila_h

class Mochila
{
public:
   double getPeso(void);
   void setPeso(double newPeso);
   double getValor(void);
   void setValor(double newValor);
   double getIndice(void);
   Mochila(double, double);
   ~Mochila();
   void ingresarDatos(void);
protected:
private:
   double peso;
   double valor;
   double indice;


};

#endif