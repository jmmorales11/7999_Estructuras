 /*plotear un rectangulo utilizando unicamente
  puntos conocidos los vertices opuestos*/
 #include<conio.h>
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

 void main()
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
 }

