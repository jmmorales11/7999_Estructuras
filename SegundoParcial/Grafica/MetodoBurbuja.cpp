#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void dibujarCuadros(int arr[], int n, int i1, int i2) {
int x1 = 50;
int x2 = 150;
int x3 = 100;
int x4 = 200;
char vecS[10];

for (int i = 0; i < n; i++) {
	// Establecemos el color de los cuadros intercambiados
	if (i == i1 || i == i2) {
		setcolor(15);
	} else {
		setcolor(LIGHTBLUE);
	}
	settextstyle(0,HORIZ_DIR,2);
	outtextxy(x1 + 12, x2 + 17, "  ");
	sprintf(vecS, "%d", arr[i]);
	outtextxy(x1 + 12, x2 + 17, vecS);	
	rectangle(x1, x2, x3, x4);
	x1 += 70;
	x3 += 70;
}
}

void burbujaGrafico(int arr[], int n) {
int temp;
bool intercambio = true;

	while (intercambio) {
	intercambio = false;
		for (int i = 1; i < n; i++){
			for (int j = 0; j < n - 1; j++) {	
		  		if (arr[j] > arr[j + 1]) {
		    	// Intercambiamos los valores
		    	temp = arr[j];
		    	arr[j] = arr[j + 1];
		    	arr[j + 1] = temp;
		    	intercambio = true;
		    	dibujarCuadros(arr, n, j, j + 1);
		    	// Cambiamos el color de los cuadros intercambiados
   				delay(1000);
	  			}			
			}	
		}
	}
}

int main()
{
int gd = DETECT;
int gm;
//initgraph(&gd, &gm,"C:\TC\8GI");
initwindow(1150,500); 
int numero,nume;
char vecS[10];

settextstyle(7,HORIZ_DIR,6);

outtextxy(350,1,"Metodo burbuja");
settextstyle(7,HORIZ_DIR,2);
setcolor(15);
do{
	outtextxy(350,270,"     ");
	outtextxy(350,250,"Ingrese la cantidad de numeros:");
	cin>>numero;
	sprintf(vecS,"%d",numero);
	outtextxy(350,270,vecS);
	delay(1000);
}while(numero>15);
	outtextxy(390,270," Valido");
int arr[numero];
//Hacer el ingreso de los valores
/*
for (int i = 0; i < numero; i++) {
	outtextxy(230,300,"Ingrese numero:");
	cin>>nume;
    arr[i] = nume;
    outtextxy(230,325,">");
    sprintf(vecS,"%d",nume);
	outtextxy(250,325,vecS);
	delay(1000);
	outtextxy(230,325,"         ");
  }
*/
//Ingresa randomicamante lon n valores
for (int i = 0; i < numero; i++) {
    arr[i] = 10+rand()%(100-10);
  }
system("pause");

//int arr[] = {8, 6, 3, 1, 5, 2, 9,4,7,15,54,21,18};
int n = sizeof(arr) / sizeof(arr[0]);

dibujarCuadros(arr, n, -1, -1);
delay(1200);
burbujaGrafico(arr, n);

getch();
closegraph();
system("pause");

return 0;
}
