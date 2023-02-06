#include "FuncionesCubo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
using namespace std;

void FuncionesCubo::suma(int a, int b,int c){
	int suma=0;
	for (int i=0; i<a*a; i++){
		suma=suma+b;
		b+=c;		
	}
	cout<<endl;
	cout<<"Suma "<< suma/a<<endl;
}

void FuncionesCubo::llenar(int dimension, int numInicial, int patron){
	int inicial=0,t=0,num2=0,inicial2=0,k=0,j=0,a=0;
	a=2*dimension-1;
	inicial=(a-1)/2;
	t=((a+1)/2);
	num2=(a-inicial-1)/2;
	inicial2=inicial;
	for(int g=0;g<dimension;g++){
		j=g;
		k=g;
		for(int i=inicial;i>=j;i--){
			*(*(this->cubo->getCuadrado()+i)+k)=numInicial;
			if(k<(inicial2-num2)){
				*(*(this->cubo->getCuadrado()+i)+(k+t))=numInicial;
			}
			if(k>(inicial2+num2)){
				*(*(this->cubo->getCuadrado()+i)+(k-t))=numInicial;
			}
			if(i>(inicial2+num2)){
				*(*(this->cubo->getCuadrado()+(i-t))+k)=numInicial;
			}
			if(i<(inicial2-num2)){
				*(*(this->cubo->getCuadrado()+(i+t))+k)=numInicial;
			}
			k++;
			numInicial+=patron;
		}
		inicial++;
	}	
}


void FuncionesCubo::mostrar(int dimension){

	int inicial=0,num1=0,num2=0,a;
	bool val;
	a=2*dimension-1;
	inicial=(a-1)/2;
	num1=((a+1)/2);
	num2=(a-inicial-1)/2;
	int aux=0, aux1=0;
	for(int g=0;g<a;g++){
		printf("\n\t");
		for(int h=0;h<a;h++){	
			if(h>=(inicial-num2)&&h<=(inicial+num2)&&g<=(inicial+num2)&&g>=(inicial-num2)){
				printf("\t%d",*(*(this->cubo->getCuadrado()+g)+h));	
				val=true;
				dibujarNum(dimension,aux,aux1, *(*(this->cubo->getCuadrado()+g)+h));
				aux+=1;
			}else{
				val=false;
			}
		}
		if(aux==dimension){
		aux=0;
		aux1+=1;		
		}
	}
}

void FuncionesCubo::llenar2(int dimension, int numInicial, int patron){
	for (int i=0;i<dimension;i++){
		
		for(int j=0 ; j<dimension;j++){
			*(*(this->cubo->getCuadrado()+i)+j)=numInicial;
			numInicial+=patron;
		}
	}
	int p1=0, pf=dimension-1, auf=0;
	for (int i=0;i<dimension/2;i++){
		for(int j=0;j<dimension;j++){
			for (int k=0;k<dimension;k++){
				if (j==pf&& k==pf){
					auf=*(*(this->cubo->getCuadrado()+p1)+p1);
					*(*(this->cubo->getCuadrado()+p1)+p1)=*(*(this->cubo->getCuadrado()+j)+k);
					*(*(this->cubo->getCuadrado()+j)+k)=auf;
				}
				if (j==p1&& k==pf){
					auf=*(*(this->cubo->getCuadrado()+p1)+pf);
					*(*(this->cubo->getCuadrado()+p1)+pf)=*(*(this->cubo->getCuadrado()+pf)+p1);
					*(*(this->cubo->getCuadrado()+pf)+p1)=auf;
				}
			}
		}
		p1+=1;
		pf-=1;
	}
}
void FuncionesCubo::mostrar2(int dimension){
	int x=260;
	int y=160;
	char vecS[5];
	for (int i=0;i<dimension;i++){
		cout<<"\t";
		for(int j=0; j<dimension;j++){
			cout<<*(*(this->cubo->getCuadrado()+i)+j)<<"\t";
			sprintf(vecS, "%d",*(*(this->cubo->getCuadrado()+i)+j));
			outtextxy(x,y, vecS);
			x+=55;
		}
		x=260;
		y+=55;
		cout<<endl;
	}
}

void FuncionesCubo::dibujar(int dim){
		
		setcolor(3);
		settextstyle(3,HORIZ_DIR,6);
		outtextxy(220,1,"Cuadrado Magico");
		setcolor(15);
		settextstyle(7,HORIZ_DIR,2);
		outtextxy(200,650,"Morales Jeimy");
		outtextxy(550,650,"Orrico Camilo");
		int x=251;
		int y=151;
		int x1=301;
		int y1=201;
		char vecS[10];
		for(int i=0;i<dim;i++){
			rectangle(x,y,x1,y1);
			for(int j=0;j<dim;j++){
				rectangle(x,y,x1,y1);
			//	sprintf(vecS, "%d",*(*(this->cubo->getCuadrado()+i)+j));
			//	outtextxy(x,y, vecS);
				x+=51;
				x1+=51;
				
		}
		
		x=250;
		x1=300;
		y+=51;
		y1+=51;
	}
}


void FuncionesCubo::dibujarNum(int dim, int fila, int columna, int num){
		int x=260;
		int y=160;
		settextstyle(3,HORIZ_DIR,2);
		char vecS[5];
		for(int i=0;i<dim;i++){
			for(int j=0;j<dim;j++){
				if(i==fila && j==columna){
					sprintf(vecS, "%d",num);
					outtextxy(x,y, vecS);
					
				}	
			x+=55;
		}
		x=260;
		y+=55;
	}
}



