#include "FuncionesCubo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
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
	system("cls");
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