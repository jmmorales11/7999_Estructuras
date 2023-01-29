#include "FuncionesInterfaz.cpp"

int main(int argc, char** argv) {
	
	int n;
	cout<<"\tIngrese el numero de Reinas"<<endl;
	cin>>n;
	Reina *rei=new Reina(n);
	FuncionesInterfaz obj= new FuncionesInterfaz(rei);
	obj->solucionReinas();
	cout<<"Se creo el archivo txt"<<endl;
	return 0;
}