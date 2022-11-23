////////NUEVO
template <typename T>
class Matrices{
	public:
		Matrices(T **mat1,T filas,T columnas);
	//	void multiplicacionMatrices(Matrices mat);
	//	void encerarMatriz();
	//	void llenarMatrizRandom();
	//	void imprimirMatriz(Matrices mat);
	//	void pedirDatos();
		/////////////////////
		void ingresarMatriz(Matrices mat);
		void multiplicacionRecursivaMatrizA(T**,T**,T**,T);
		void multiplicacionRecursivaMatrizB(T**,T**,T**,T,T);
		void multiplicacionRecursiva(T**,T**,T**,T,T,T);
		
		//getters y setters de los atributos de la clase
		T** getMat1();
		T** getMat2();
		T** getMatR();
		T getFilas; T getColumnas();
		void setMat1(T** );
		void setMat2(T** );
		void setMatR(T** );
		void setFa(T); void setFb(T); void setCa(T); void setCb(T); void setK(T);
		Matrices pruebaMultiplicacion(Matrices mat, T num);
		
	private:
		//atributos de la clase	
		T **mat1,**mat2,**matR, filas, columnas;
};
