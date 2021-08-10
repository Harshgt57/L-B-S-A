int add(){
union REGS in, out;
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
FILE *fp;
int i,j,n;
struct student s1;
system("cls");
printf("How many Record you want to add\n");
scanf("%d",&n);
fp=fopen("student.txt","ab+");
if(fp==NULL)
{
printf("\nCannot open file");
exit(1);
}
for(i=0;i<n;i++)
{                    /*
fp=fopen("student.txt","ab");
if(fp==NULL)
{
printf("\nCannot open file");
exit(1);
}                      */
printf("Enter ADMINISID ");
scanf("\n%d",&stu[i].adminid);
//s1.adminid=stu[i].adminid;
printf("\nEnter Name ");
fflush(stdin);
scanf("%[^\n]s",stu[i].name);
//strcpy(s1.name,stu[i].name);
printf("\nEnter Year of ADMISSION ");
scanf("%d",&stu[i].year);
//s1.year=stu[i].year;
printf("\nEnter Branch ");
fflush(stdin);
scanf("%[^\n]s",stu[i].branch);
//strcpy(s1.branch,stu[i].branch);
printf("\nEnter EmailID ");
fflush(stdin);
scanf("%[^\n]s",stu[i].emailid);
//strcpy(s1.emailid,stu[i].emailid);
printf("\nEnter Library Dues ");
fflush(stdin);
scanf("%[^\n]s",stu[i].library);
//strcpy(s1.library,stu[i].library);
printf("\nEnter FEES DUES ");
scanf("%d",&stu[i].fees);
//s1.fees=stu[i].fees;
printf("\nACADMEIC PERFORMANCE");
printf("\n1st Sem ");
scanf("%d",&stu[i].sem1);
//s1.sem1=stu[i].sem1;
printf("\n2nd Sem ");
scanf("%d",&stu[i].sem2);
//s1.sem2=stu[i].sem2;
printf("\n3rd Sem ");
scanf("%d",&stu[i].sem3);
//s1.sem3=stu[i].sem3;
printf("\n4th Sem ");
scanf("%d",&stu[i].sem4);
//s1.sem4=stu[i].sem4;
printf("\n5th Sem ");
scanf("%d",&stu[i].sem5);
//s1.sem5=stu[i].sem5;
printf("\n6th Sem ");
scanf("%d",&stu[i].sem6);
//s1.sem6=stu[i].sem6;
printf("\n7th Sem ");
scanf("%d",&stu[i].sem7);
//s1.sem7=stu[i].sem7;
printf("\n8th Sem ");
scanf("%d",&stu[i].sem8);
//s1.sem8=stu[i].sem8;
printf("\nExtra Curricular Achievements ");
printf("\nEnter 1st Achievements ");
fflush(stdin);
scanf("%[^\n]s",stu[i].eca1);
//strcpy(s1.eca1,stu[i].eca1);
printf("\nEnter 2nd Achievements ");
fflush(stdin);
scanf("%[^\n]s",stu[i].eca2);
//strcpy(s1.eca2,stu[i].eca2);
printf("\nEnter 3rd Achievements ");
fflush(stdin);
scanf("%[^\n]s",stu[i].eca3);
//strcpy(s1.eca3,stu[i].eca3);
printf("\nEnter 4th Achievements ");
fflush(stdin);
scanf("%[^\n]s",stu[i].eca4);
//strcpy(s1.eca4,stu[i].eca4);
printf("\nEnter 5th Achievements ");
fflush(stdin);
scanf("%[^\n]s",stu[i].eca5);
//strcpy(s1.eca5,stu[i].eca5);
printf("\nEnter Image address ");
fflush(stdin);
scanf("%[^\n]s",stu[i].image);
//scanf(s1.image,stu[i].image);
//fwrite(&s1,sizeof(struct student),1,fp);
//fputs("\n",fp);
//fclose(fp);
}
fwrite(stu,sizeof(struct student),n,fp);
fclose(fp);
printf("\nLOADING...\n");
for(j=0;j<80;j++){
printf("%c",219);
delay(120);
}
//fclose(fp);
printf("\nData is stored successfully...\n");
//fclose(fp);
getch();
return 0;
}