#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Main1.h"

void encerar(int *vec,int t){
	int i;
	for(i=0;i<t;i++){
		*vec=0;
		*(vec++);
	}
}
void procesar(int *vec,int t){
	int i,e=5;
	for(i=0;i<t;i++){
		*vec=(*(&(*vec))) * e;
		*(vec++);
	}
}
void imprimir(int *vec,int t){
	int i;
	for(i=0;i<t;i++){
		printf("%d ",*(&(*vec)));
		*(vec++);
	}	
}
void ingresar(int *vec,int t){
	int i;
	for(i=0;i<t;i++){
		scanf("%d",*(&vec)+i);
	}
}
