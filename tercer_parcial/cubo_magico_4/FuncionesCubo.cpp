#include "FuncionesCubo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
void FuncionesCubo::llenar(int dim, int numInicial, int patron){
	int inicial=0,num1=0,num2=0,inicial2=0,k=0,j=0;
	inicial=(dim-1)/2;
	num1=((dim+1)/2);
	num2=(dim-inicial-1)/2;
	inicial2=inicial;
	for(int i=0;i<((dim+1)/2);i++){
		j=i;
		k=i;
		for(int g=inicial;g>=j;g--){
			*(*(this->cubo->getCuadrado()+g)+k)=numInicial;
			if(k<(inicial2-num2)){
				*(*(this->cubo->getCuadrado()+g)+(k+num1))=numInicial;
			}
			if(k>(inicial2+num2)){
				*(*(this->cubo->getCuadrado()+g)+(k-num1))=numInicial;
			}
			if(g>(inicial2+num2)){
				*(*(this->cubo->getCuadrado()+(g-num1))+k)=numInicial;
			}
			if(g<(inicial2-num2)){
				*(*(this->cubo->getCuadrado()+(g+num1))+k)=numInicial;
			}
			k++;
			numInicial+=patron;
		}
		inicial++;
	}	
}
void FuncionesCubo::mostrar(int a){
	int inicial=0,num2=0;
	inicial=(a-1)/2;
	num2=(a-inicial-1)/2;
	for(int g=0;g<a;g++){
		printf("\n\t");
		for(int h=0;h<a;h++){	
			if(h>=(inicial-num2)&&h<=(inicial+num2)&&g<=(inicial+num2)&&g>=(inicial-num2)){
				printf("\t%d",*(*(this->cubo->getCuadrado()+g)+h));	
			}
		}
	}
}
void FuncionesCubo::suma(int a, int b,int c){
	int suma=0;
	for (int i=0; i<a*a; i++){
		suma=suma+b;
		b+=c;		
	}
	cout<<endl;
	cout<<"Suma "<< suma/a<<endl;
}

void FuncionesCubo::llenar1(int dimension, int numInicial, int patron){
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
void FuncionesCubo::mostrar1(int dimension){
	int inicial=0,num1=0,num2=0,a;
	a=2*dimension-1;
	inicial=(a-1)/2;
	num1=((a+1)/2);
	num2=(a-inicial-1)/2;
	for(int g=0;g<a;g++){
		printf("\n\t");
		for(int h=0;h<a;h++){	
			if(h>=(inicial-num2)&&h<=(inicial+num2)&&g<=(inicial+num2)&&g>=(inicial-num2)){
				printf("\t%d",*(*(this->cubo->getCuadrado()+g)+h));	
			}
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
	for (int i=0;i<dimension;i++){
		cout<<"\t";
		for(int j=0; j<dimension;j++){
			cout<<*(*(this->cubo->getCuadrado()+i)+j)<<"\t";
		}
		cout<<endl;
	}
}