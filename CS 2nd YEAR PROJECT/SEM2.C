#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<share.h>
#include "image2.c"
#include "SECPAGE.c"
#include "studis.c"
#include "FINALDIS.c"
#include "DELETE.c"
#include "MODIFY.c"
#include "student1.c"
#include "studis1.c"
#include "AD1.c"
union REGS in, out;  /*
int aid,eid;
char sd[20],ad[20];*/
void detectmouse ()
{
in.x.ax = 0;
int86 (0X33,&in,&out);
if (out.x.ax == 0)
printf ("\n Mouse Fail To Initialize");
else
printf ("\n Mouse Succesfully Initialize");
}
void showmousetext ()
{
in.x.ax = 1;
int86 (0X33,&in,&out);
}
void showmousegraphics ()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
ShowBMP(200,150,"logo.bmp");
printf("\n");
setcolor(14);
settextstyle(0,0,4);
outtextxy(0,50,"WELCOME TO G.L.BAJAJ");
printf("\n");
setcolor(4);
settextstyle(0,0,4);
outtextxy(85,100,"FIND YOUR SPARK");
delay(300);
setbkcolor(0);//color for graph
settextstyle(0,0,0);
button(8,200,200,280,222,"Click to Start",17,6);
setcolor(8);
in.x.ax = 1;
int86 (0X33,&in,&out);
getch();
closegraph ();
}

int rect(int color,int x,int y,int x2,int y2)
{
int i,j;
for(i=x;i<x2;i++)
for(j=y;j<y2;j++)
putpixel(i,j,color);
return(0);
}

int button(int color,int x,int y,int x2,int y2,char caption[20],int cx,int cy)
{
int z;
setcolor(10);
rectangle(x+50,y+200,x2+100,y2+200);
rect(color,x+50,y+200,x2+100,y2+200);
setcolor(14);
outtextxy(x+cx+45,y+cy+200,caption);
in.x.ax=0;

int86(0x33,&in,&in);
in.x.ax=1;
int86(0x33,&in,&in);
while((!kbhit()))
{
in.x.ax=3;
x=in.x.cx;
y=in.x.dx;
int86(0x33,&in,&in);
if(x>241 && x<371 && y>399 && y<423 && in.x.bx ==1)
{
setbkcolor(13);
display();
}
}
return(0);
}
void main()
{
int i,x;
int gdrive=DETECT,gmode;
initgraph(&gdrive,&gmode,"C:\\TURBOC3\\BGI");
//setbkcolor(13);
detectmouse();
showmousegraphics();
getch();
}