int studisplay1(int aid ,char sd[]){
struct student{
int adminid;
char name[20];
int year;
char branch[5];
char emailid[25];
char library[3];
int fees;
int sem1;
int sem2;
int sem3;
int sem4;
int sem5;
int sem6;
int sem7;
int sem8;
char eca1[25];
char eca2[10];
char eca3[10];
char eca4[10];
char eca5[10];
char image[15];
};struct student stu[10];

FILE *fr;
int gd=DETECT,gm,i,j,n;
//system("cls");
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(4);
settextstyle(0,0,2);
outtextxy(0,50,"LOADING...");
printf("\n\n\n\n");
for(i=0;i<80;i++){
printf("%c",219);
delay(120);}
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(0,0,3);
outtextxy(0,50,"STUDENT DETAILS");
printf("\n\n\n\n\n\n");
fr=fopen("student.txt","rb");
if(fr==NULL)
{
perror("\nCannot open file");
//exit(1);
}
fread(stu,sizeof(struct student),10,fr);
for(i=0;i<10;i++)
{
if((stu[i].adminid==aid)&&(strcmp(stu[i].name,sd)==0)){
printf("\nName ->%s",stu[i].name);
printf("\nYear of ADMISSION ->%d",stu[i].year);
printf("\nBranch ->%s",stu[i].branch);
printf("\nEnter EmailID ->%s",stu[i].emailid);
printf("\nEnter Library Dues ->%s",stu[i].library);
printf("\nEnter FEES DUES ->%d",stu[i].fees);
printf("\nACADMEIC PERFORMANCE");
printf("\n1st Sem ->%d",stu[i].sem1);
printf("\n2nd Sem ->%d",stu[i].sem2);
printf("\n3rd Sem ->%d",stu[i].sem3);
printf("\n4th Sem ->%d",stu[i].sem4);
printf("\n5th Sem ->%d",stu[i].sem5);
printf("\n6th Sem ->%d",stu[i].sem6);
printf("\n7th Sem ->%d",stu[i].sem7);
printf("\n8th Sem ->%d",stu[i].sem8);
printf("\nExtra Curricular Achievements ");
printf("\nEnter 1st Achievements ->%s",stu[i].eca1);
printf("\nEnter 2nd Achievements ->%s",stu[i].eca2);
printf("\nEnter 3rd Achievements ->%s",stu[i].eca3);
printf("\nEnter 4th Achievements ->%s",stu[i].eca4);
printf("\nEnter 5th Achievements ->%s",stu[i].eca5);
ShowBMP(400,150,stu[i].image);
getch();
break;
}

//printf("%d",n);
//getch();

}
fclose(fr);
if(i!=10){
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(1,0,3);
outtextxy(100,100,"THANK YOU");
settextstyle(8,0,2);
outtextxy(100,170,"Have a nice day!!!");
delay(1000);
exit(1);
}
else
{
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(14);
settextstyle(0,0,2);
outtextxy(0,100,"INVALID USERNAME OR ADMINID :(");
settextstyle(0,0,1);
outtextxy(100,150,"PLEASE CHECK AND TRY AGAIN");
delay(4000);
exit(1);
}
//getch();
return 0;
}