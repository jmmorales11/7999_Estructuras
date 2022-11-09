/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: martes, 8 de noviembre de 2022 18:55:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Area_h)
#define __Class_Diagram_1_Area_h

class Area
{
public:
   /**
    * @brief Obtener objeto Lado
    * 
    * @return float 
    */
   float getLado(void);
   /**
    * @brief Ingreso objeto Lado
    * 
    * @param newLado 
    */
   void setLado(float newLado);
   /**
    * @brief Obtener objeto Base
    * 
    * @return double 
    */
   double getBase(void);
   /**
    * @brief Ingreso objeto Base
    * 
    * @param newBase 
    */
   void setBase(double newBase);
   /**
    * @brief Obtener objeto Altura
    * 
    * @return float 
    */
   float getAltura(void);
   /**
    * @brief Ingreso objeto Altura
    * 
    * @param newAltura 
    */
   void setAltura(float newAltura);
   /**
    * @brief Obtener objeto PI
    * 
    * @return float 
    */
   float getPI(void);
   /**
    * @brief Ingreso objeto PI
    * 
    * @param newPI 
    */
   void setPI(float newPI);
   /**
    * @brief Obtener objeto Radio1
    * 
    * @return int 
    */
   int getRadio1(void);
   /**
    * @brief Ingreso objeto Radio1
    * 
    * @param newRadio1 
    */
   void setRadio1(int newRadio1);
   /**
    * @brief Obtener objeto Radio2
    * 
    * @return float 
    */
   float getRadio2(void);
   /**
    * @brief Ingreso objeto Radio2 
    * 
    * @param newRadio2 
    */
   void setRadio2(float newRadio2);
   /**
    * @brief Obtener objeto Cuadrado
    * 
    * @return double 
    */
   double getCuadrado(void);
   /**
    * @brief Ingreso objeto Cuadrado
    * 
    * @param newCuadrado 
    */
   void setCuadrado(double newCuadrado);
   /**
    * @brief Obtener objeto Rectangulo
    * 
    * @return double 
    */
   double getRectangulo(void);
   /**
    * @brief Ingreso objeto Rectangulo
    * 
    * @param newRectangulo 
    */
   void setRectangulo(double newRectangulo);
   /**
    * @brief Obtener objeto Circulo
    * 
    * @return double 
    */
   double getCirculo(void);
   /**
    * @brief Ingreso objeto Circulo
    * 
    * @param newCirculo 
    */
   void setCirculo(double newCirculo);
   /**
    * @brief Obtener objeto Ovalo
    * 
    * @return double 
    */
   double getOvalo(void);
   /**
    * @brief Ingreso objeto Ovalo
    * 
    * @param newOvalo 
    */
   void setOvalo(double newOvalo);
   /**
    * @brief Obtener objeto Triangulo
    * 
    * @return double 
    */
   double getTriangulo(void);
   /**
    * @brief Ingreso objeto Triangulo
    * 
    * @param newTriangulo 
    */
   void setTriangulo(double newTriangulo);
   /**
    * @brief Constructor
    * 
    * @param lado 
    * @param base 
    * @param altura 
    * @param radio1 
    * @param radio2 
    * @param cuadrado 
    * @param rectangulo 
    * @param circulo 
    * @param ovalo 
    * @param triangulo 
    */
   Area(float lado, double base, float altura, int radio1, float radio2, double cuadrado, double rectangulo, double circulo, double ovalo, double triangulo);
   /**
    * @brief Destructor
    * 
    */
   ~Area();
   /**
    * @brief Ingreso de datos
    * 
    * @param obj 
    */
   void ingresar(Area obj);
   /**
    * @brief calcular el area del circulo
    * 
    * @param radio 
    * @return double 
    */
   double calcularArea(int radio);//circulo
   /**
    * @brief calcular el area del triangulo
    * 
    * @param base 
    * @param altura 
    * @return double 
    */
   double calcularArea(float base, float altura);//triangulo
   /**
    * @brief calcular el area del rectangulo
    * 
    * @param altura 
    * @param base 
    * @return double 
    */
   double calcularArea(float altura, int base);//rectangulo
   /**
    * @brief calcular el area del ovalo
    * 
    * @param radio1 
    * @param radio2 
    * @param pi 
    * @return double 
    */
   double calcularArea(int radio1, float radio2,float pi);//ovalo
   /**
    * @brief calcular el area del cuadrado
    * 
    * @param lado 
    * @return double 
    */
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
