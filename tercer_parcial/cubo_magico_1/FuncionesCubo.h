#include "CuboMagico.cpp"
#include "Cubo.h"

class FuncionesCubo:public Cubo{

	public:
		CuboMagico *cubo;
		FuncionesCubo(CuboMagico *cub){
				this->cubo=cub;
		}
		void mostrar(int a, int b);
		void llenar(int a, int b, int c);
};