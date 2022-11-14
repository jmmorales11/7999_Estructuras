template <class T>
class Matriz{
	public:
		void setDato(T n);
		T getDato() const;
	
		Matriz(T **matriz1,T **matriz2,T fila1,T columna1,T fila2,T columna2);
		~Matriz();
		void ingresarMatriz(T **matriz, T filas, T columnas);
   		void sumaMatriz(T **matriz1, T filas, T columnas, T **matriz2);
   		void multiplicarMatriz(T **matrizA,T **matrizB, T fA, T cA, T fB, T cB);
   		void imprimirMatriz(T **matriz, T filas, T columnas);
   		T sumaRecursivaMatrices(T **matriz1, T **matriz2, T f, T c,Matriz funcion);
		
	private:
		T dato;

		
};
