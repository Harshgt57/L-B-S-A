union REGS in, out;
int aid,eid;
char sd[20],ad[20];
void detectmouse1 ()
{
in.x.ax = 0;
int86 (0X33,&in,&out);
if (out.x.ax == 0)
printf ("\n Mouse Fail To Initialize");
else
printf ("\n Mouse Succesfully Initialize");
}


void detectmouse2()
{
in.x.ax = 0;
int86 (0X33,&in,&out);
if (out.x.ax == 0)
printf ("\n Mouse Fail To Initialize");
else
printf ("\n Mouse Succesfully Initialize");
}

void showmousegraphics1 ()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
ShowBMP(200,80,"stuimage.bmp");
printf("\n");
setcolor(14);
settextstyle(0,0,3.9);
outtextxy(40,50,"WELCOME TO STUDENT PORTAL");
printf("\n");
delay(300);
setbkcolor(0);//color for graph
settextstyle(0,0,1);
outtextxy(200,340,"Enter ADMINID");
outtextxy(200,370,"Enter Name");
for(j=0;j<20;j++)
printf("\n");
for(j=0;j<25;j++)
printf(" ");
printf("->");
//printf("Enter ADMINID ");
scanf("%d",&aid);
printf("\n");
for(j=0;j<25;j++)
printf(" ");
//printf("Enter NAME ");
printf("->");
fflush(stdin);
scanf("%[^\n]s",sd);
delay(800);
button1(8,250,200,280,222,"Submit",24,6);
setcolor(8);
in.x.ax = 1;
int86 (0X33,&in,&out);
getch();
closegraph ();
}
void showmousegraphics2()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
ShowBMP(200,80,"admin.bmp");
printf("\n");
setcolor(14);
settextstyle(0,0,3.9);
outtextxy(40,50,"WELCOME TO ADMINISTRATOR PORTAL");
printf("\n");
delay(300);
setbkcolor(0);//color for graph
settextstyle(0,0,1);
outtextxy(200,340,"Enter EMPLOYID");
outtextxy(200,370,"Enter Name");
for(j=0;j<20;j++)
printf("\n");
for(j=0;j<25;j++)
printf(" ");
printf("->");
//printf("Enter ADMINID ");
scanf("%d",&eid);
printf("\n");
for(j=0;j<25;j++)
printf(" ");
//printf("Enter NAME ");
printf("->");
fflush(stdin);
scanf("%[^\n]s",ad);
delay(800);
button2(8,250,200,280,222,"Submit",24,6);
setcolor(8);
in.x.ax = 1;
int86 (0X33,&in,&out);
getch();
closegraph ();
}


int button1(int color,int x,int y,int x2,int y2,char caption[20],int cx,int cy)
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
setcolor(14);
//printf("see you");
studisplay1(aid,sd);
delay(300);
}
}
return(0);
}
int button2(int color,int x,int y,int x2,int y2,char caption[20],int cx,int cy)
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
setcolor(14);
//printf("see you");
admindis1(eid,ad);
delay(300);
}
}
return(0);
}
int display(){
int choice;
int gd=DETECT,gm,i,j;
system("cls");
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=0;i<7;i++)
printf("\n");
setcolor(11);
settextstyle(0,0,2);
outtextxy(17,100,"WHO ARE YOU?");
printf("\n");
setcolor(14);
settextstyle(0,0,1);
outtextxy(20,120,"->1.STUDENT");
printf("\n");
outtextxy(20,140,"->2.ADMINISTRATOR");
printf("\n");
setcolor(3);
settextstyle(0,0,1);
outtextxy(20,160,"Enter Your Choice");
printf("\n   ->");
scanf("%d",&choice);

switch(choice){
case 1:
system("cls");
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
detectmouse1();
showmousegraphics1();
//FILE *fr;
break;
case 2:
system("cls");
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
detectmouse2();
showmousegraphics2();
//printf("Administrator");
//Enter database (FINALADM)
//DISPLAY file (FINALDIS)
break;
default:
printf("   Entered wrong choice");
delay(500);
exit(1);
break;
}
getch();
return 0;
}