int admindis12(int eid,char ad[])
{
struct admind{
int employeeid;
char name[25];
char emailid[25];
char designation[10];
char image[15];
};struct admind as[10];
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
FILE *fp;
int gd=DETECT,gm,i,j,ad1,eid1;
char ad2[25],c;
//char c;
//clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(4);
settextstyle(0,0,2);
outtextxy(0,50,"LOADING...");
printf("\n\n\n\n");
for(i=0;i<80;i++){
printf("%c",219);
delay(120);
}
//perror("cannot");
system("cls");
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(0,0,4);
outtextxy(0,0,"ADMINISTRATOR DETAIL");
fp=fopen("adbook.txt","rb");
if(fp==NULL){
perror("Cannot open File");
getch();
//exit(1);
}
//perror("cannot1");
/*
system("cls");
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(0,0,4);
outtextxy(0,0,"ADMINISTRATOR DETAIL");     */
//perror("cannot open file");
for(i=0;i<7;i++)
printf("\n");
fread(as,sizeof(struct admind),10,fp);
//perror("cannot open file");
for(i=0;i<10;i++){
if((as[i].employeeid==eid)&&(strcmp(as[i].name,ad)==0)){
printf("\nName -> %s",as[i].name);
printf("\nEmailid -> %s",as[i].emailid);
printf("\nDesignation -> %s",as[i].designation);
ShowBMP(300,50,as[i].image);
break;
}
}
if(i==10){
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(0,0,2);
outtextxy(0,100,"INVALID USERNAME OR EMPLOYEEID :(");
settextstyle(0,0,1);
outtextxy(100,150,"PLEASE CHECK AND TRY AGAIN");
delay(4000);
exit(1);
}
//initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(11);
settextstyle(0,0,1);
outtextxy(0,310,"WHAT OPERATION YOU WANT TO PERFORM IN STUDENT DATABASE");
setcolor(14);
settextstyle(0,0,1);
outtextxy(0,320,"1.Display Record");
outtextxy(0,330,"2.Add New Record");
outtextxy(0,340,"3.Modify Record");
outtextxy(0,350,"4.Delete Record");
setcolor(11);
settextstyle(0,0,1);
outtextxy(0,360,"Enter Your Choice");
for(i=0;i<13;i++){
printf("\n");       }
printf("->");
scanf("%d",&j);
switch(j){
case 1:
//adddata();
studisplay12();
break;
case 2:
add();
//printf("2");
break;
case 3:

modify1();
//printf("3");
break;
case 4:
delete1();
//printf("4");
break;
default:
setcolor(4);
//settextstyle(0,0,1);
outtextxy(0,380,"ENTERED WRONG CHOICE...(:");
break;
}
fclose(fp);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(0,0,2);
outtextxy(0,150,"WANT TO GO IN ADMINISTRATOR PORTAL?Y/N");
setcolor(11);
settextstyle(0,0,1);
outtextxy(0,180,"ENTER YOUR CHOICE");
printf("\n\n\n\n\n\n\n\n\n\n\n\n->");
fflush(stdin);
scanf("%c",&c);
if(c=='Y')
{
//perror("CANNOT OPEN");
/*
strcpy(ad2,ad);
eid1=eid;                 */
admindis12(eid,ad);
}
else
{
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(1,0,3);
outtextxy(100,100,"THANK YOU");
settextstyle(8,0,2);
outtextxy(100,170,"Have a nice day!!!");
delay(1000);
exit(1);
}
getch();
return 0;
}
