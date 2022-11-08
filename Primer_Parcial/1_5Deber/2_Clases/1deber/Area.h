/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Martes, 08 de nombre de 2022 21:17:59
 * Purpose: Areas de las figuras
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Area_h)
#define __Class_Diagram_1_Area_h

class Area
{
public:
   float getLado(void);
   void setLado(float newLado);
   double getBase(void);
   void setBase(double newBase);
   float getAltura(void);
   void setAltura(float newAltura);
   float getPI(void);
   void setPI(float newPI);
   int getRadio1(void);
   void setRadio1(int newRadio1);
   float getRadio2(void);
   void setRadio2(float newRadio2);
   double getCuadrado(void);
   void setCuadrado(double newCuadrado);
   double getRectangulo(void);
   void setRectangulo(double newRectangulo);
   double getCirculo(void);
   void setCirculo(double newCirculo);
   double getOvalo(void);
   void setOvalo(double newOvalo);
   double getTriangulo(void);
   void setTriangulo(double newTriangulo);
   Area(float lado, double base, float altura, int radio1, float radio2, double cuadrado, double rectangulo, double circulo, double ovalo, double triangulo);
   ~Area();
   void ingresar(Area obj);

   double calcularArea(int radio);//circulo
   double calcularArea(float base, float altura);//triangulo
   double calcularArea(float altura, int base);//rectangulo
   double calcularArea(int radio1, float radio2,float pi);//ovalo
   double calcularArea(double lado);//cuadrado

protected:
private:
   float lado;
   double base;
   float altura;
   float PI;
	int radio1;
   float radio2;
   double cuadrado;
   double rectangulo;
   double circulo;
   double ovalo;
   double triangulo;


};

#endif
