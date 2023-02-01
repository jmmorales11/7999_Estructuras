#include "FuncionA.h"
#include <windows.h>
#include <graphics.h>

void FuncionA::encerarTablero(){
	for(int i=0;i<MAX;i++){
		this->alfil->validar[i]=new bool[MAX];
		this->alfil->tablero[i]=new char[MAX];
		for(int j=0;j<MAX;j++){
			*(*(this->alfil->validar+i)+j)=false;
			*(*(this->alfil->tablero+i)+j)='*';
			}
	}	
}
void FuncionA::crearArchivo(){
	cout<<"Archivo"<<endl;
	this->archivo.open("exaustivoAlfiles.txt",fstream::out);
	this->archivo<<"solucion"<<this->alfil->n<<"*"<<this->alfil->n<<endl<<endl;
	this->alfil->contador=0;
}


void FuncionA::bloquear(int x, int y){
	int aux1,aux2;

	aux2=y;//diagonal
	aux1=x;
	while(aux1>0&&aux2>0){
		aux1--;
		aux2--;
	}
	while(aux1>=0 && aux2<MAX){
		*(*(this->alfil->validar+aux1)+aux2)=true;
		aux1++;
		aux2++;
		//cout<<"  diagonal "<<aux1<<" "<<aux2<<endl;
	}
	aux2=y;
	aux1=x;
	while(aux1<MAX && aux2>0){
		aux1++;
		aux2--;
	}
	if (aux1<6 && aux2 <6){
		*(*(this->alfil->validar+aux1)+aux2)=true;
	}
	
	aux1--;
	aux2++;
	
	while(aux1>=0 && aux2<MAX){
		*(*(this->alfil->validar+aux1)+aux2)=true;
		aux1--;
		aux2++;
	//	cout<<aux1<<" "<<aux2<<endl;
	}
	
	}
	void FuncionA::mostrar(){
		this->alfil->contador++;
		this->archivo<<"solucion N "<<this->alfil->contador <<endl;
		cout<<"solucion N "<<this->alfil->contador <<endl;
		cout<<endl;
		for(int i=0;i<MAX;i++){
			for(int j=0;j<MAX;j++){
				if((i+j)%2==0){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0| BACKGROUND_INTENSITY);
				}
				else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15|0);
				}
				if(	*(*(this->alfil->validar+i)+j)==true){
					circulo(i,j);
					*(*(this->alfil->tablero +i)+j)='A';
				}
				this->archivo<<*(*(this->alfil->tablero+i)+j)<<" ";
				cout<<*(*(this->alfil->tablero+i)+j)<<" ";
			}
			this->archivo<<endl;
			cout<<endl;
		}
		this->archivo<<endl;
		cout<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15|0);
	}

	void FuncionA::quitarRelleno(int x, int y){
		*(*(this->alfil->tablero +x)+y)='*';
		for(int i=0;i<MAX;i++){
			for(int j=0;j<MAX;j++){
				*(*(this->alfil->validar+i)+j)=false;
			}
		}
		for(int i=0;i<MAX;i++){
			for(int j=0;j<MAX;j++){
				if(*(*(this->alfil->tablero +i)+j)=='A')
				bloquear(i,j);
			}	
		}
	}

	
	void FuncionA::solucion(int x, int y, int n1){
		*(*(this->alfil->tablero +x)+y)='A';
		bloquear(x,y);
		if(n1==this->alfil->n){
			mostrar();
		}
	}
	void FuncionA::solucionReinas(){
		for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			solucion(i,j,1);
		}
		system("pause");
	}
		archivo.close();	
	}
	
	
	void FuncionA::solucionAlfilA(int i, int j){
			solucion(i,j,1);
		archivo.close();	
	}
	
	void FuncionA::cuadrado(){
		setcolor(3);
		settextstyle(3,HORIZ_DIR,6);
		outtextxy(200,1,"Tablero ajedrez");
		
		rectangle(199,100,709,609);
		setfillstyle(SOLID_FILL, 13);
		bar(248,150,659,559);
		
		int x=251;
		int y=151;
		int x1=301;
		int y1=201;
		for(int i=0;i<MAX;i++){
			bar(x,y,x1,y1);
			for(int j=0;j<MAX;j++){
				if ((i+j)%2==0){
					    setfillstyle(SOLID_FILL, 15);
					}else{ 
					setfillstyle(SOLID_FILL, 0);
					}
			bar(x,y,x1,y1);
			
			x+=51;
			x1+=51;
		}x=250;
		x1=300;
		y+=51;
		y1+=51;
	}

	}
    void FuncionA::circulo(int fila, int columna){
	int x=275;
	int y=172;
	int radio=20;
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			if(i==fila &&j==columna){
				setcolor(0);
				setfillstyle(11, 6);
				fillellipse(x,y, radio+5, radio);
			}
			
			x+=51;
		}
		x=275;
		y+=51;
	}

	}
	
	
	