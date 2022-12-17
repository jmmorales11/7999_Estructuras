#include <graphics.h>
#include <conio.h>
#include <iostream>
#include<stdlib.h>
#include<time.h>
#define TAM 5
int main()
{
	// -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 //Herramientas activar
    // Inicializar el modo gráfico
    int arreglo[TAM]= {5,4,2,2,1},aux;
    int num,opc;
    int gd = DETECT, gm;
    int x1=100,y1=50,x2=x1, y2=200;
    initgraph(&gd, &gm, "");
    setlinestyle(SOLID_LINE, 1, THICK_WIDTH);
/*    line(x1, arreglo[0]*10, x2, y2);
    x1+=10;
    x2=x1;
    line(x1,arreglo[1]*10, x2, y2);
    x1+=10;
    x2=x1;
    line(x1, arreglo[2]*10, x2, y2);
    x1+=10;
    x2=x1;
    line(x1, arreglo[3]*10, x2, y2);
    x1+=10;
    x2=x1;
    line(x1, arreglo[4]*10, x2, y2);
*/
   for(int i=0;i<TAM;i++){
  	
        // Comparaciones
        for(int j=0;j<TAM-i;j++){
            // Intercambiar los elementos
            if(arreglo[j] > arreglo[j+1]){
                aux=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=aux;  
            }
            
        }
        line(x1, y1+(10*arreglo[i]), x2, y2);
            x1+=10;
            x2=x1;
    }
    setcolor(3);
    for(int i=TAM-1;i>-1;i--){
        line(x1, y1+(10*arreglo[i]), x2, y2);
        x1+=10;
        x2=x1;
    }

    // Esperar a que se pulse una tecla
    getch();

    // Cerrar el modo gráfico
    closegraph();
    return 0;
}
/*int main() 
{ 

int gd = DETECT, gm, x, y, color, angle = 0;
struct arccoordstype a,b;

initgraph(&gd, &gm,"C:\\TC\\8GI");

delay (2000);

while (angle<=360) 
{
setcolor(BLACK); 
arc(getmaxx()/2, getmaxy()/2,angle,angle+2,100); 
setcolor(RED); 
getarccoords(&a); 
circle(a.xstart, a.ystart,25); 
setcolor(BLACK);
arc(getmaxx()/2, getmaxy()/2,angle,angle+2, 150); 
getarccoords(&a);
setcolor(GREEN); 
circle(a.xstart,a.ystart,25); 
angle = angle+5; 
delay(50);
} 
getch(); 
closegraph();
}
*/
