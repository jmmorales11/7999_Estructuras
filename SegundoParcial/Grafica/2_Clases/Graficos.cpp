#include <graphics.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() 
{ 

int gd = DETECT;
int gm;
int x1=100;
int y1=100;
int x2=110;
int y2=200;
int arreglo[5]= {10,1,1,5,1};
initgraph(&gd, &gm,"C:\\TC\\8GI");
setcolor(GREEN);
//rectangle(x1,y1,x2,y2); 
//rectangle(x1,y1+10,x2,y2);
char vecS[10];
for(int i =0;i<=4;i++){
y1=(((10/arreglo[i])*10)+20);	
sprintf(vecS,"%d",arreglo[i]);
rectangle(x1,y1,x2,y2);
outtextxy(x1,210,vecS);
delay(1000);
x1+=15;

x2+=15;

}

getch(); 
closegraph();
}

