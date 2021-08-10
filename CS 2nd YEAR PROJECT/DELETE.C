int delete1(){
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
FILE *fp1,*fp2;
int i,n;
char ch;
printf("Enter adminid which you want to delete");
scanf("%d",&n);
fp1=fopen("student.txt","rb");
fp2=fopen("copy.txt","wb");
if(fp1==NULL)
{
 perror("Cannot open file");
}
fread(stu,sizeof(struct student),10,fp1);
for(i=0;i<3;i++)
{
 if(stu[i].adminid!=n)
 {
  fwrite(&stu[i],sizeof(struct student),1,fp2);
  }
}
fclose(fp1);
fclose(fp2);
//remove("student.txt");
//rename("copy.txt","student.txt");
fp1=fopen("copy.txt","rb");
fp2=fopen("student.txt","wb");
while(ch!=EOF)
{
ch=fgetc(fp1);
fputc(ch,fp2);
}
fclose(fp1);
fclose(fp2);
printf("Record deleted successfully");
getch();
return 0;
}
