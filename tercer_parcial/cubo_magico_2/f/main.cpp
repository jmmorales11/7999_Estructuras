#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "CuboMagico.cpp""
#include <iostream>

int main(int argc, char** argv) {
	int **cuadrado, dim,num;
	printf("Ingrese la dimension ");
	scanf("%d",&dim);
	num=2*dim-1;
	cuadrado=(int**)calloc(num,sizeof(int*));
	for(int i=0;i<num;i++){
		*(cuadrado+i)=(int *)calloc(num,sizeof(int));
	}
	CuboMagico cubo=CuboMagico(cuadrado);
	cubo.llenar(num,num);
	cubo.mostrar(num,num);
	system("pause");
	return 0;
}