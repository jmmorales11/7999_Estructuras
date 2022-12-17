#include <winbgim.h>

 int main()

{

 initwindow(400,300);            // Abre una ventana gráfica de  400x300 pixeles

moveto(0,0);                         // Pone el cursor en 0,0

lineto(50,50);                        // Dibuja una línea desde 0,0 hasta 50,50

while(!kbhit());                     // Espera a que el usuario presione una tecla

closegraph();                      // Cierra la ventana gráfica

return 0;

}

/*#include <graphics.h>

void dibujarRectangulo(int x1, int y1, int x2, int y2) {
   initwindow(900, 500);
   rectangle(x1, y1, x2, y2);
   
}
#include <graphics.h>

void dibujarRectangulos(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
   
   rectangle(x1, y1, x2, y2);
   rectangle(x3, y3, x4, y4);

}


int main()
{
	initwindow(500, 500);
	dibujarRectangulos(100, 100, 200, 200, 250, 250, 350, 350);

    dibujarRectangulo(165, 20, 200, 200);
    getch();
    closegraph();
    return 0;
}
*/

/*#include <graphics.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 

int main(void) 
{ 

int gdriver = DETECT, gmode, errorcode; 
int x; 
float pi=3.1416; 
float grados,y; 
grados=(2*pi)/360; 


initgraph(&gdriver, &gmode, ""); 


errorcode = graphresult(); 
if (errorcode != grOk) 
{ 
printf("Graphics error: %s\n", grapherrormsg(errorcode)); 
printf("Press any key to halt:"); 
getch(); 
exit(1); 
} 

for(x=0;x<360;x++){ 

y=sin(x*grados); 
y=y*100; 

putpixel(x+100,y+100,5); 
} 


getch(); 
closegraph(); 
return 0; 
} */

 /*plotear un rectangulo utilizando unicamente
  puntos conocidos los vertices opuestos*/
/* #include<conio.h>
 #include<stdio.h>
 #include<graphics.h>
 void Rectangulo(int x1,int y1,int x2,int y2)
 {
  int i,aux;
  if(x1>x2)
   {
    aux=x1;
    x1=x2;
    x2=aux;
   }
  if(y1>y2)
   {
    aux=y1;
    y1=y2;
    y2=aux;
   }
  for(i=x1;i<=x2;i++)
  {
   putpixel(i ,y1 ,YELLOW);
   putpixel(i, y2, YELLOW);
  }
  for(i=y1;i<=y2;i++)
  {
   putpixel(x1 ,i ,CYAN);
   putpixel(x2, i,CYAN);
  }
 }

 int main()
 {
  int x1,y1,x2,y2,i,gd,gn,aux;
  gn=DETECT;
  initgraph(&gn, &gd, "d:\\borlandc\\bgi");
  printf("1er vertice <x1,y1>:"),scanf("%d %d",&x1,&y1);
  printf("2do vertice <x2,y2>:"),scanf("%d %d",&x2,&y2);
  cleardevice(); //clrscr();
  Rectangulo(x1,y1,x2,y2);
  x1=0, x2=getmaxx();
  y1=0, y2=getmaxy();
  Rectangulo(x1,y1,x2,y2);
  Rectangulo(50,60,290,350);
  if(x1>x2)
   {
    aux=x1;
    x1=x2;
    x2=aux;
   }
  if(y1>y2)
   {
    aux=y1;
    y1=y2;
    y2=aux;
   }
  for(i=x1;i<=x2;i++)
  {
   putpixel(i ,y1 ,YELLOW);
   putpixel(i, y2, YELLOW);
  }
  for(i=y1;i<=y2;i++)
  {
   putpixel(x1 ,i ,CYAN);
   putpixel(x2, i,CYAN);
  }
  getch();closegraph();
  return 0;
 }
*/
