/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: martes, 8 de noviembre de 2022 18:55:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#if !defined(__Class_Diagram_1_SobrecargaOperador_h)
#define __Class_Diagram_1_SobrecargaOperador_h

class SobrecargaOperador
{
public:
   /**
    * @brief Obtener objeto Cuadrado
    * 
    * @return float 
    */
   float getCuadrado(void);
   /**
    * @brief Ingresar objeto Cuadrado
    * 
    * @param newCuadrado 
    */
   void setCuadrado(float newCuadrado);
   /**
    * @brief Obtener objeto Lado
    * 
    * @return float 
    */
   float getLado(void);
   /**
    * @brief Ingresar objeto Lado
    * 
    * @param newLado 
    */
   void setLado(float newLado);
   /**
    * @brief Obtener objeto Triangulo
    * 
    * @return float 
    */
   float getTriangulo(void);
   /**
    * @brief Ingresar objeto Triangulo
    * 
    * @param newTriangulo 
    */
   void setTriangulo(float newTriangulo);
   /**
    * @brief Obtener objeto Base
    * 
    * @return float 
    */
   float getBase(void);
   /**
    * @brief Ingresar objeto Base
    * 
    * @param newBase 
    */
   void setBase(float newBase);
   /**
    * @brief Obtener objeto Altura
    * 
    * @return float 
    */
   float getAltura(void);
   /**
    * @brief Ingresar objeto Altura
    * 
    * @param newAltura 
    */
   void setAltura(float newAltura);
   /**
    * @brief Obtener objeto Rectangulo
    * 
    * @return float 
    */
   float getRectangulo(void);
   /**
    * @brief Ingresar objeto Rectangulo
    * 
    * @param newRectangulo 
    */
   void setRectangulo(float newRectangulo);
   /**
    * @brief Obtener objeto Circulo
    * 
    * @return float 
    */
   float getCirculo(void);
   /**
    * @brief Ingresar objeto Circulo
    * 
    * @param newCirculo 
    */
   void setCirculo(float newCirculo);
   /**
    * @brief Obtener objeto Radio
    * 
    * @return float 
    */
   float getRadio(void);
   /**
    * @brief Ingresar objeto Radio
    * 
    * @param newRadio 
    */
   void setRadio(float newRadio);
   /**
    * @brief Constructor
    * 
    * @param cuadrado 
    * @param lado 
    * @param triangulo 
    * @param altura 
    * @param base 
    * @param rectangulo 
    * @param circulo 
    * @param radio 
    */
   SobrecargaOperador(float cuadrado, float lado, float triangulo,float altura, float base, float rectangulo, float circulo, float radio);
   /**
    * @brief Destructor
    * 
    */
   ~SobrecargaOperador();
   /**
    * @brief Calcular area del cuadrado
    * 
    * @param obj 
    * @return SobrecargaOperador 
    */
   SobrecargaOperador calcular_cuadrado(SobrecargaOperador obj);
   /**
    * @brief Calcular area del triangulo
    * 
    * @param obj 
    * @return SobrecargaOperador 
    */
   SobrecargaOperador calculartriangulo(SobrecargaOperador obj);
   /**
    * @brief Calcular area del circulo
    * 
    * @param obj 
    * @return SobrecargaOperador 
    */
   SobrecargaOperador calcularCirculo(SobrecargaOperador obj);
   /**
    * @brief Calcular area del rectangulo
    * 
    * @param obj 
    * @return SobrecargaOperador 
    */
   SobrecargaOperador calcularRectangulo(SobrecargaOperador obj);
   /**
    * @brief Ingresar datos
    * 
    * @param obj 
    */
   void ingresar(SobrecargaOperador obj);
   /**
    * @brief Funcion para imprimir los datos
    * 
    * @param obj 
    */
   void imprimir(SobrecargaOperador obj);
   /**
    * @brief sobrecarga del operador *
    * 
    * @param obj 
    * @return SobrecargaOperador 
    */
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
