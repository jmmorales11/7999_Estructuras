#include "FuncionesCubo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
void FuncionesCubo::llenar(int a, int p, int patron){
	int x=0,t=0,s=0,d=0,k=0,j=0;
	x=(a-1)/2;
	t=((a+1)/2);
	s=(a-x-1)/2;
	d=x;
	for(int g=0;g<((a+1)/2);g++){
		j=g;
		k=g;
		for(int i=x;i>=j;i--){
			*(*(this->cubo->getCuadrado()+i)+k)=p;
			if(k<(d-s)){
				*(*(this->cubo->getCuadrado()+i)+(k+t))=p;
			}
			if(k>(d+s)){
				*(*(this->cubo->getCuadrado()+i)+(k-t))=p;
			}
			if(i>(d+s)){
				*(*(this->cubo->getCuadrado()+(i-t))+k)=p;
			}
			if(i<(d-s)){
				*(*(this->cubo->getCuadrado()+(i+t))+k)=p;
			}
			k++;
			p+=patron;
		}
		x++;
	}	
}
void FuncionesCubo::mostrar(int a, int b){
	cout<<a<<"  "<<b<<"MOSTRAR"<<endl;
	int x=0,t=0,s=0;
	x=(b-1)/2;
	t=((a+1)/2);
	s=(a-x-1)/2;
	for(int g=0;g<a;g++){
		printf("\n\t");
		for(int h=0;h<b;h++){	
			if(h>=(x-s)&&h<=(x+s)&&g<=(x+s)&&g>=(x-s)){
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

void FuncionesCubo::llenar1(int dimension, int p, int patron){
	int x=0,t=0,s=0,d=0,k=0,j=0,a=0;
	a=2*dimension-1;
	x=(a-1)/2;
	t=((a+1)/2);
	s=(a-x-1)/2;
	d=x;
	for(int g=0;g<dimension;g++){
		j=g;
		k=g;
		for(int i=x;i>=j;i--){
			*(*(this->cubo->getCuadrado()+i)+k)=p;
			if(k<(d-s)){
				*(*(this->cubo->getCuadrado()+i)+(k+t))=p;
			}
			if(k>(d+s)){
				*(*(this->cubo->getCuadrado()+i)+(k-t))=p;
			}
			if(i>(d+s)){
				*(*(this->cubo->getCuadrado()+(i-t))+k)=p;
			}
			if(i<(d-s)){
				*(*(this->cubo->getCuadrado()+(i+t))+k)=p;
			}
			k++;
			p+=patron;
		}
		x++;
	}	
}
void FuncionesCubo::mostrar(int dimension){
	int x=0,t=0,s=0,a;
	a=2*dimension-1;
	x=(a-1)/2;
	t=((a+1)/2);
	s=(a-x-1)/2;
	for(int g=0;g<a;g++){
		printf("\n\t");
		for(int h=0;h<a;h++){	
			if(h>=(x-s)&&h<=(x+s)&&g<=(x+s)&&g>=(x-s)){
				cout<<*(*(this->cubo->getCuadrado()+g)+h)<<endl;	
			}
		}
	}
}



void FuncionesCubo::llenar2(int dimension, int p, int patron){
	for (int i=0;i<dimension;i++){
		
		for(int j=0 ; j<dimension;j++){
			*(*(this->cubo->getCuadrado()+i)+j)=p;
			p+=patron;
		}
	}
	int p1=0, pf=dimension-1, aux=0;
	for (int i=0;i<dimension/2;i++){
		for(int j=0;j<dimension;j++){
			for (int k=0;k<dimension;k++){
				if (j==pf&& k==pf){
					aux=*(*(this->cubo->getCuadrado()+p1)+p1);
					*(*(this->cubo->getCuadrado()+p1)+p1)=*(*(this->cubo->getCuadrado()+j)+k);
					*(*(this->cubo->getCuadrado()+j)+k)=aux;
				}
				if (j==p1&& k==pf){
					aux=*(*(this->cubo->getCuadrado()+p1)+pf);
					*(*(this->cubo->getCuadrado()+p1)+pf)=*(*(this->cubo->getCuadrado()+pf)+p1);
					*(*(this->cubo->getCuadrado()+pf)+p1)=aux;
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