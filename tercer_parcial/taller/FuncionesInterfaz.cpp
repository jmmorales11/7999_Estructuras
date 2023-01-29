#include "FuncionesInterfaz.h"


void FuncionesInterfaz::encerarTablero(void){
	for(int i=0;i<this->reina->getN();i++){
		this->reina->getValidar()[i]=new bool[this->reina->getN()];
		this->reina->getTablero()[i]=new char[this->reina->getN()];
		for(int j=0;j<this->reina->getN();j++){
			*(*(this->reina->getValidar()+i)+j)=false;
			*(*(this->reina->getValidar()+i)+j)='*';
		}
	}
}


void FuncionesInterfaz::crearArchivo(void){
	archivo.open("exaustivo.txt",fstream::out);
	archivo<<"solucion"<<this->reina->getN()<<"*"<<this->reina->getN()<<endl<<endl;
	this->reina->setContador(0);
}

void FuncionesInterfaz::bloquear(int x, int y){
	int aux1,aux2;
	aux2=y;
	aux1=0;
	while(aux1<this->reina->getN()){//vertical
		*(*(this->reina->getValidar()+aux1)+aux2)=true;
		aux1++;
	}
	aux2=0;
	aux1=x;
	while(aux2<this->reina->getN()){
		*(*(this->reina->getValidar()+aux1)+aux2)=true;
		aux2++;
	}
	aux2=y;//diagonal
	aux1=x;
	while(aux1>0&&aux2>0){
		aux1--;
		aux2--;
	}
	aux2=y;
	aux1=x;
	while(aux1<this->reina->getN() && aux2>0){
		aux1++;
		aux2--;
	}
	aux1--;
	aux2++;
	while(aux1>=0 && aux2<this->reina->getN()){
		*(*(this->reina->getValidar()+aux1)+aux2)=true;
		aux1--;
		aux2++;
	}
}

void FuncionesInterfaz::mostrar(void){
	this->reina->setContador(this->reina->getContador()+1);
	archivo<<"solucion N "<<this->reina->getContador()<<endl;
	cout<<endl;
	for(int i=0;i<this->reina->getN();i++){
		for(int j=0;j<this->reina->getN();j++){
			archivo<<*(*(this->reina->getTablero()+i)+j)<<" ";
			cout<<*(*(this->reina->getTablero()+i)+j)<<" ";
		}
		archivo<<endl;
		cout<<endl;
	}
	archivo<<endl;
	cout<<endl;
}

void FuncionesInterfaz::quitarRelleno(int x, int y){
	*(*(this->reina->getTablero() +x)+y)='*';
	for(int i=0;i<this->reina->getN();i++){
		for(int j=0;j<this->reina->getN();j++){
			*(*(this->reina->getValidar() +i)+j)=false;
		}
			}
	for(int i=0;i<this->reina->getN();i++){
		for(int j=0;j<this->reina->getN();j++){
			if(*(*(this->reina->getTablero()  +i)+j)=='R')
			bloquear(i,j);
		}	
	}
}

void FuncionesInterfaz::solucion(int x, int y, int n1){
	*(*(this->reina->getTablero() +x)+y)='R';
	bloquear(x,y);
	if(n1==this->reina->getN() ){
		mostrar();
	}else{
		for(int i=0;i<this->reina->getN() ;i++){
			if(*(*(this->reina->getValidar()  +i )+ y+1)==false){
				solucion(i,y+1,n1+1);
			}
		}
	}
	quitarRelleno(x,y);	
}

void FuncionesInterfaz::solucionReinas(void){
	for(int i=0;i<this->reina->getN() ;i++){
		solucion(i,0,1);
	}
	archivo.close();
}