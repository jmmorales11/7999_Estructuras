/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Martes, 08 de nombre de 2022 21:17:59
 * Purpose: Areas de las figuras
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#if !defined(__Class_Diagram_1_SobrecargaOperador_h)
#define __Class_Diagram_1_SobrecargaOperador_h

class SobrecargaOperador
{
public:
   float getCuadrado(void);
   void setCuadrado(float newCuadrado);
   float getLado(void);
   void setLado(float newLado);
   float getTriangulo(void);
   void setTriangulo(float newTriangulo);
   float getBase(void);
   void setBase(float newBase);
   float getAltura(void);
   void setAltura(float newAltura);
   float getRectangulo(void);
   void setRectangulo(float newRectangulo);
   float getCirculo(void);
   void setCirculo(float newCirculo);
   float getRadio(void);
   void setRadio(float newRadio);
   SobrecargaOperador(float cuadrado, float lado, float triangulo,float altura, float base, float rectangulo, float circulo, float radio);
   ~SobrecargaOperador();
   SobrecargaOperador calcular_cuadrado(SobrecargaOperador obj);
   SobrecargaOperador calculartriangulo(SobrecargaOperador obj);
   SobrecargaOperador calcularCirculo(SobrecargaOperador obj);
   SobrecargaOperador calcularRectangulo(SobrecargaOperador obj);
   void ingresar(SobrecargaOperador obj);
   void imprimir(SobrecargaOperador obj);
   SobrecargaOperador operator *(SobrecargaOperador obj);

protected:
private:
   float cuadrado;
   float lado;
   float triangulo;
   float base;
   float altura;
   float rectangulo;
   float circulo;
   float radio;


};

#endif
