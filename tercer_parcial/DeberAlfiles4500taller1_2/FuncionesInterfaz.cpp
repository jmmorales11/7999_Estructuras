#include "FuncionesInterfaz.h"
#include <windows.h>
#include <graphics.h>
#include <math.h>
void FuncionesInterfaz::encerarTablero(void){
	for(int i=0;i<DIMENSION;i++){
		this->reina->validar[i]=new bool[DIMENSION];
		this->reina->tablero[i]=new char[DIMENSION];
		for(int j=0;j<DIMENSION;j++){
			*(*(this->reina->validar+i)+j)=false;
			*(*(this->reina->tablero+i)+j)='*';
		}
	}
}


void FuncionesInterfaz::crearArchivo(void){
	this->archivo.open("exaustivo.txt",fstream::out);
	this->archivo<<"solucion"<<DIMENSION<<"*"<<DIMENSION<<endl<<endl;
	this->reina->contador=0;
}

void FuncionesInterfaz::bloquear(int x, int y){
	int aux1,aux2;
	aux2=y;
	aux1=0;
	while(aux1<DIMENSION){//vertical
		*(*(this->reina->validar+aux1)+aux2)=true;
		aux1++;
	}
	aux2=0;
	aux1=x;
	while(aux2<DIMENSION){//horizontal
		*(*(this->reina->validar+aux1)+aux2)=true;
		aux2++;
	}
	aux2=y;//diagonal
	aux1=x;
	while(aux1>0&&aux2>0){
		aux1--;
		aux2--;
	}
	
	while (aux1 < DIMENSION && aux2 < DIMENSION) { //FALTABA
        *(*(this->reina->validar+aux1)+aux2)=true; //FALTABA
        aux1++; //FALTABA
        aux2++; //FALTABA
    	}
		aux2=y;
		aux1=x;
		while(aux1<DIMENSION && aux2>0){
			aux1++;
			aux2--;
		}
		if (x + y >= DIMENSION) { //FALTABA
            aux1--;
            aux2++;
        } //FALTABA
        while(aux1>=0 && aux2<DIMENSION){
			*(*(this->reina->validar+aux1)+aux2)=true;
			aux1--;
			aux2++;
		}
}

void FuncionesInterfaz::bloquearR(int x, int y){
	int aux1,aux2;
	aux2=y;
	aux1=0;
	while(aux1<DIMENSION){//vertical
	cout<<aux1<<aux2<<endl;
		*(*(this->reina->validar+aux1)+aux2)=true;
		aux1++;
	}
	aux2=0;
	aux1=x;
	while(aux2<DIMENSION){//horizontal
		*(*(this->reina->validar+aux1)+aux2)=true;
		aux2++;
	}
	aux2=y;//diagonal
	aux1=x;
	while(aux1>0&&aux2>0){
		aux1--;
		aux2--;
	}
	
	while (aux1 < DIMENSION && aux2 < DIMENSION) { //FALTABA
        *(*(this->reina->validar+aux1)+aux2)=true; //FALTABA
        aux1++; //FALTABA
        aux2++; //FALTABA
    	}
		aux2=y;
		aux1=x;
		while(aux1<DIMENSION && aux2>0){
			aux1++;
			aux2--;
		}
		if (x + y >= DIMENSION) { //FALTABA
            aux1--;
            aux2++;
        } //FALTABA
        while(aux1>=0 && aux2<DIMENSION){
			*(*(this->reina->validar+aux1)+aux2)=true;
			aux1--;
			aux2++;
		}
}

void FuncionesInterfaz::mostrar(void){

	this->reina->contador++;
	this->archivo<<"solucion N "<<this->reina->contador<<endl;
	cout<<"solucion N "<<this->reina->contador<<endl;
	cout<<endl;
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if((i+j)%2==0){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0| BACKGROUND_INTENSITY);
				}
				else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15|0);
				}
				if (*(*(this->reina->tablero+i)+j)=='R'){
					dibujoReina(i,j);
				}
			this->archivo<<*(*(this->reina->tablero+i)+j)<<" ";
			cout<<*(*(this->reina->tablero+i)+j)<<" ";
		}
		this->archivo<<endl;
		cout<<endl;
	}
	this->archivo<<endl;
	cout<<endl;
}

void FuncionesInterfaz::mostrarReina(void){

	this->reina->contador++;
	this->archivo<<"solucion N "<<this->reina->contador<<endl;
	cout<<"solucion N "<<this->reina->contador<<endl;
	cout<<endl;
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if((i+j)%2==0){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0| BACKGROUND_INTENSITY);
				}
				else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15|0);
				}
				if(	*(*(this->reina->validar+i)+j)==true){
					reinaB(i,j);
					*(*(this->reina->tablero+i)+j)='R';
			}
			this->archivo<<*(*(this->reina->tablero+i)+j)<<" ";
			cout<<*(*(this->reina->tablero+i)+j)<<" ";
		}
		this->archivo<<endl;
		cout<<endl;
	}
	this->archivo<<endl;
	cout<<endl;

}

void FuncionesInterfaz::quitarRelleno(int x, int y){
	*(*(this->reina->tablero +x)+y)='*';
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			*(*(this->reina->validar +i)+j)=false;
		}
			}
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if(*(*(this->reina->tablero  +i)+j)=='R')
			bloquear(i,j);
		}	
	}
}

void FuncionesInterfaz::solucion(int x, int y, int n1){
	*(*(this->reina->tablero +x)+y)='R';
	bloquear(x,y);
	if(n1==this->reina->n){
		mostrar();
	}else{
		for(int i=0;i<this->reina->n ;i++){
			if(*(*(this->reina->validar +i )+ y+1)==false){
				solucion(i,y+1,n1+1);
			}
		}
	}
	quitarRelleno(x,y);	
}

void FuncionesInterfaz::solucionReinas(void){
	for(int i=2;i<DIMENSION ;i++){
		for(int j=0;j<DIMENSION;j++){
			solucion(i,j,1);
		}
	}
	archivo.close();
}

void FuncionesInterfaz::solucionRB(int x, int y, int n1){
	*(*(this->reina->tablero +x)+y)='R';
		bloquearR(x,y);
		if(n1==this->reina->n){
			cout<<"SolucionRB"<<endl;
			mostrarReina();
		}
}

void FuncionesInterfaz::solucionReinasB(int i, int j){
	solucionRB(i,j,1);
	archivo.close();
}

void FuncionesInterfaz::dibujoReina(int fila, int columna){
	int x=250;
	int y=150;
	int x1=301;
	int y1=200;
	int aux2=50;
	int aux3=50;
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if(i==fila &&j==columna){
			readimagefile("reina.jpg",x,y,x1,y1);
		//	setfillstyle(SOLID_FILL, 6);
		//  fillellipse(x,y, 5, 10);
		//  fillellipse(x,y+aux, 10, 15);
		//  bar(x1,y+aux1,x1+aux,y1);
		   }
		   	x+=aux2;
		   	x1+=aux2;
		}
		x=251;
		x1=301;
		y+=aux3;
		y1+=aux3;
	}

	}
	void FuncionesInterfaz::reinaB(int fila, int columna){
	int x=250;
	int y=150;
	int x1=301;
	int y1=200;
	int aux2=50;
	int aux3=50;
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if(i==fila &&j==columna){
			readimagefile("reina.jpg",x,y,x1,y1);
		//	setfillstyle(SOLID_FILL, 6);
		//  fillellipse(x,y, 5, 10);
		//  fillellipse(x,y+aux, 10, 15);
		//  bar(x1,y+aux1,x1+aux,y1);
		   }
		   	x+=aux2;
		   	x1+=aux2;
		}
		x=251;
		x1=301;
		y+=aux3;
		y1+=aux3;
	}

	}
	/////////////////////////////////////////
	void FuncionesInterfaz::caballo(int fila, int columna){
		caballoS(fila,columna,1);
		archivo.close();
		
	}
	
	void FuncionesInterfaz::caballoS(int x ,int y, int n1){
		*(*(this->reina->tablero +x)+y)='C';
		BolquearCaballo(x,y);
		if(n1==this->reina->n){
			mostrarCaballo();
		}
	}
	
	void FuncionesInterfaz::mostrarCaballo(void){
	
	this->reina->contador++;
	this->archivo<<"solucion N "<<this->reina->contador<<endl;
	cout<<endl;
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if((i+j)%2==0){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0| BACKGROUND_INTENSITY);
				}
				else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15|0);
				}
				if(	*(*(this->reina->validar+i)+j)==true){
					dibujocaballo(i,j);
					*(*(this->reina->tablero+i)+j)='C';
			}
			this->archivo<<*(*(this->reina->tablero+i)+j)<<" ";
			cout<<*(*(this->reina->tablero+i)+j)<<" ";
		}
		this->archivo<<endl;
		cout<<endl;
	}
	this->archivo<<endl;
	cout<<endl;

}

void FuncionesInterfaz::BolquearCaballo(int x, int y){

	*(*(this->reina->validar+x)+y)=true;
	//abajo
	if(x<6){
		*(*(this->reina->validar+x+2)+y+1)=true;
		*(*(this->reina->validar+x+2)+y-1)=true;
	}
	if (x>1){
		//Arriba
	*(*(this->reina->validar+x-2)+y-1)=true;  
	*(*(this->reina->validar+x-2)+y+1)=true;
	}
	
	if (y>1){
		//IZQUIERDO
		*(*(this->reina->validar+x-1)+y-2)=true;
		*(*(this->reina->validar+x+1)+y-2)=true;
	}
	
	if(y<6){
		//Drecha
		*(*(this->reina->validar+x+1)+y+2)=true;
		*(*(this->reina->validar+x-1)+y+2)=true;
	}
	
}

void FuncionesInterfaz::dibujocaballo(int fila, int columna){
	int x=250;
	int y=150;
	int x1=301;
	int y1=200;
	int aux2=50;
	int aux3=50;
	for(int i=0;i<DIMENSION;i++){
		for(int j=0;j<DIMENSION;j++){
			if(i==fila &&j==columna){
			readimagefile("caballo.jpg",x,y,x1,y1);
		//	setfillstyle(SOLID_FILL, 6);
		//  fillellipse(x,y, 5, 10);
		//  fillellipse(x,y+aux, 10, 15);
		//  bar(x1,y+aux1,x1+aux,y1);
		   }
		   	x+=aux2;
		   	x1+=aux2;
		}
		x=251;
		x1=301;
		y+=aux3;
		y1+=aux3;
	}

	}
	
	void FuncionesInterfaz::ejes(){
		settextstyle(3,0,1);
		outtextxy(890,435,"Elementos");
		settextstyle(3,1,1);
		outtextxy(800,180,"O");
		outtextxy(800,200,"p");
		outtextxy(800,220,"e");
		outtextxy(800,240,"r");
		outtextxy(800,260,"a");
		outtextxy(800,280,"c");
		outtextxy(800,300,"i");
		outtextxy(800,320,"o");
		outtextxy(800,340,"n");
		outtextxy(800,360,"e");
		outtextxy(800,380,"s");
		line(850,400,850,150);
		line(850,400,1100,400);
	}
	void FuncionesInterfaz::LineaRoja(){
		setcolor(4);
		outtextxy(1090,380,"O(log n )");
		line(850,399,1100,398);
	}
	void FuncionesInterfaz::LineaA(){
		
	}
	
	void FuncionesInterfaz::graficarBigHoraSuperLineal(){
	setcolor(GREEN);
	line(850,400,1100,225);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(WHITE);
//	outtextxy(950,200,nombreFuncion);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(GREEN);
	outtextxy(1100,225,"O(nlogn)");
}
void FuncionesInterfaz::graficarBigTiempoLineal(){
	setcolor(MAGENTA);
	line(850,400,1100,350);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(WHITE);
//	outtextxy(950,390,nombreFuncion);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
	setcolor(MAGENTA);
	outtextxy(1100,350,"O(n)");
}

void FuncionesInterfaz::dibujarBigOExponecialCeleste(){
		int x, y;
	    double a = 20;
	    for (x = 0; x <= 38; x++)
	    {
	        y = 415 - a * pow(2, x / 10.0);
	        putpixel(x+850, y, CYAN);
	    }
	    setcolor(CYAN);
		outtextxy(838,120,"O(n!)");
	}
	void FuncionesInterfaz::dibujarBigOExponecialAzul(){
		int x2, y2;
	    double c = 8;
	    for (x2 = 0; x2 <=100; x2++)
	    {
	        y2 = 400 - c * pow(2, x2 / 20.0);
	        putpixel(x2+850, y2, BLUE);
	    }
	    setcolor(BLUE);
		outtextxy(970,150,"O(n^2)");
	}
	void FuncionesInterfaz::dibujarBigOExponecialNaranja(){
		int x1, y1;
	    double b = 15;
	    for (x1 = 0; x1 <= 54; x1++)
	    {
	        y1 = 414 - b * pow(2, x1 / 13.0);
	        putpixel(x1+850, y1, 6);
	    }
	    setcolor(6);
		outtextxy(888,125,"O(2^n)");
	}