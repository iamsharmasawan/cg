#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
int gm,gd=DETECT;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(BLUE);
float xinc,yinc;
int len,x1,y1,x2,y2,x,y,dx,dy,i;
printf("Enter the coordinates for the start of the line(x1,y1): ");
scanf("%d%d",&x1,&y1);
printf("Enter the coordinates for the end of the line(x2,y2): ");
scanf("%d%d",&x2,&y2);
dx = x2-x1;
dy = y2-y1;
len = abs(dx)>abs(dy)?abs(dx):abs(dy);
xinc = dx/len;
yinc = dy/len;
putpixel(x1,y1,WHITE);
x = x1;
y = y1;
for(i=1;i<=len;i++){
x = x + xinc;
y = y + yinc;
putpixel(x,y,WHITE);
}

printf("Performed by Hiten D");
getch();
}
