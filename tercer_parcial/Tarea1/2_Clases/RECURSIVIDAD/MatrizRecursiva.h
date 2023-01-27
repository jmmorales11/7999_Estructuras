	#define MAX 2
template<typename T>
class MatrizRecursiva{
	public:
		void setDato(T m);
		T getDato() ;
		void setMatriz(T m);
		T getMatriz() ;
		void setFilas(T f);
		T getFilas() const;
		void setColumnas(T c);
		T getColumnas() const;
		T sumaRecursivaMatrices(T mat1[MAX][MAX], T mat2[MAX][MAX], T f, T c, T **Matriz,MatrizRecursiva funcion);
		void ingresarMatriz(T matriz[MAX][MAX],T, T);
		void ingresarMatrizRecursividad(T num,T **Matriz);
		void mostrarMatrizRecursiva(T  mat[MAX][MAX]);
		void imprimirMatriz(T**matriz, T filas, T columnas);
		T multiplicacionRecursivaMatrices(T mat1[MAX][MAX], T mat2[MAX][MAX], T f, T c, T **Matriz, MatrizRecursiva funcion);
	private:
		T matriz[MAX][MAX];
		T filas;
		T columnas;
		T dato;
};
