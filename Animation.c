#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{ int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);
printf("\n\nDownloading....\nBy Sawan Sharma");
rectangle(100,300,400,400);
setcolor(GREEN);
for(i=0;i<=300;i++)
{
 rectangle(100+i,300,400,400);
 delay(20);
 }
 if(i>=300)
{ cleardevice(); }
 settextstyle(6,0,5);
 outtextxy(100,100,"Download Complete");
 getch();
closegraph();
}
