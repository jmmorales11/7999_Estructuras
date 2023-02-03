#include "CuboMagico.cpp"
#include "Cubo.h"
 class FuncionesCubo:public Cubo{
 	public:
 		CuboMagico *cubo;
 		FuncionesCubo(CuboMagico *cub){
 			this->cubo=cub;
		 }
		void mostrar(int);
		void llenar(int, int, int);
		void suma(int, int, int);
		void mostrar1(int);
		void llenar1(int, int, int);
		void mostrar2(int);
		void llenar2(int, int, int);
 };