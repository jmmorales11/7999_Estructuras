#include "Tablero.h"
class FuncionesInterfaz:public Tablero{
	public:
		void encerarTablero(void);
		void crearArchivo(void);
		void bloquear(int x, int y);
		void mostrar(void);
		void quitarRelleno(int x, int y);
		void solucion(int x, int y, int n1);
		void solucionReinas(void);
};