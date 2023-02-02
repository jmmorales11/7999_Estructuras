#include "FuncionesCubo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

void FuncionesCubo::llenar(int num, int patron, int dim){
	
	for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            *(*(this->cubo->getCuadrado()+i)+j) = num;
            num = num+patron;
        }
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