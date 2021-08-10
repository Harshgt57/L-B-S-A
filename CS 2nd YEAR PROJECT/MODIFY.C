int modify1(){
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
/*
struct student{
int adminid;
char name[20];
int year;
char branch[5];
char emailid[50];
char library[10];
int fees;
int sem1;
int sem2;
int sem3;
int sem4;
int sem5;
int sem6;
int sem7;
int sem8;
char eca1[50];
char eca2[50];
char eca3[50];
char eca4[50];
char eca5[50];
char image[20];
};struct student stu[10];
*/
struct student s1;
FILE *fp1,*fp2;
int gd=DETECT,gm,x,i,choice,m;
char a[50],ch;
fp1=fopen("student.txt","rb");
fp2=fopen("copy.txt","wb");
if(fp1==NULL)
{
perror("Cannot open file");
exit(1);
}
//printf("Enter Adminid Which you want to modify");
//scanf("%d",&ad);
printf("ENTER ADMISSION-ID OF STUDENT WHICH YOU WANT TO MODIFY\n->");
scanf("%d",&m);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
ShowBMP(360,100,"adim.BMP");
setcolor(13);
settextstyle(0,0,2);
outtextxy(0,50,"What You Want To Modify In Student Data");
setcolor(11);
settextstyle(0,0,1);
outtextxy(0,70,"1.NAME");
outtextxy(0,85,"2.YEAR");
outtextxy(0,100,"3.BRANCH");
outtextxy(0,115,"4.EMAILID");
outtextxy(0,130,"5.LIBRARY DUES");
outtextxy(0,145,"6.FEES DUES");
outtextxy(0,160,"7.SEM1");
outtextxy(0,175,"8.SEM2");
outtextxy(0,190,"9.SEM3");
outtextxy(0,205,"10.SEM4");
outtextxy(0,220,"11.SEM5");
outtextxy(0,235,"12.SEM6");
outtextxy(0,250,"13.SEM7");
outtextxy(0,265,"14.SEM8");
outtextxy(0,280,"15.EXTRA CURRICULAR ACTIVITIES 1");
outtextxy(0,295,"16.EXTRA CURRICULAR ACTIVITIES 2");
outtextxy(0,310,"17.EXTRA CURRICULAR ACTIVITIES 3");
outtextxy(0,325,"18.EXTRA CURRICULAR ACTIVITIES 4");
outtextxy(0,340,"19.EXTRA CURRICULAR ACTIVITIES 5");
outtextxy(0,355,"20.IMAGE ADDRESS");
setcolor(4);
settextstyle(0,0,1);
outtextxy(0,370,"ENTER YOUR CHOICE");
for(i=0;i<24;i++)
printf("\n");
printf("  ");
outtextxy(0,390,"->");
scanf("%d",&choice);
//fread(stu,sizeof(struct student),9,fp1);
 /*
for(i=0;i<9;i++){
if(stu1[i].adminid!=adminid){
fwrite(stu1,sizeof(struct student),1,fp2);
}
else
{
k=i;
}
}
if(i==9)
printf("no record"); */
//fread(stu,sizeof(struct student),10,fp1);
switch(choice){
case 1:
printf("UPDATED Name ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,a);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 2:
printf("Enter New YEAR ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=x;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
//printf("Year");
break;
case 3:
printf("Enter UPDATED BRANCH ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,a);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}

break;
case 4:
printf("Enter UDPDATED EMAILID ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(stu,sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,a);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 5:
printf("UPDATE LIBRARY DUES ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,a);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 6:
printf("UPDATE FEES DUES ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=x;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 7:
printf("UPDATE SEM 1 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=x;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 8:
printf("UPDATE SEM2 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=x;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 9:
printf("UPDATE SEM3 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=x;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 10:
printf("UPDATE SEM4 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=x;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 11:
printf("UPDATE SEM5 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=x;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 12:
printf("UPDATE SEM6 MARKS ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=x;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 13:
printf("UPDATE SEM7 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=x;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 14:
printf("UPDATE SEM8 MARKS ->");
fflush(stdin);
scanf("%d",&x);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=x;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 15:
printf("UPDATE EXTRA CURRICULAR ACTIVITIES 1 ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,a);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 16:
printf("UPDATE EXTRA CURRICULAR ACTIVITIES 2 ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,a);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 17:
printf("UPDATE EXTRA CURRICULAR ACTIVITIES 3 ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,a);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 18:
printf("UPDATE EXTRA CURRICULAR ACTIVITIES 4 ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,a);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 19:
printf("UPDATE EXTRA CURRICULAR ACTIVITIES 5 ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,a);
strcpy(s1.image,stu[i].image);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
case 20:
printf("UPDATE Image address ->");
fflush(stdin);
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
{
fread(&stu[i],sizeof(struct student),1,fp1);
if(stu[i].adminid!=m)
{
fwrite(&stu[i],sizeof(struct student),1,fp2);
}
else
{
s1.adminid=stu[i].adminid;
strcpy(s1.name,stu[i].name);
s1.year=stu[i].year;
strcpy(s1.branch,stu[i].branch);
strcpy(s1.emailid,stu[i].emailid);
strcpy(s1.library,stu[i].library);
s1.fees=stu[i].fees;
s1.sem1=stu[i].sem1;
s1.sem2=stu[i].sem2;
s1.sem3=stu[i].sem3;
s1.sem4=stu[i].sem4;
s1.sem5=stu[i].sem5;
s1.sem6=stu[i].sem6;
s1.sem7=stu[i].sem7;
s1.sem8=stu[i].sem8;
strcpy(s1.eca1,stu[i].eca1);
strcpy(s1.eca2,stu[i].eca2);
strcpy(s1.eca3,stu[i].eca3);
strcpy(s1.eca4,stu[i].eca4);
strcpy(s1.eca5,stu[i].eca5);
strcpy(s1.image,a);
fwrite(&s1,sizeof(struct student),1,fp2);
}
}
break;
}
fclose(fp1);
fclose(fp2);
fp1=fopen("copy.txt","rb");
fp2=fopen("student.txt","wb");
while(ch!=EOF)
{
ch=fgetc(fp1);
fputc(ch,fp2);
}
fclose(fp1);
fclose(fp2);
remove("copy.txt");
printf("RECORD UPDATED SUCCESSFULLY");
getch();
return 0;
}