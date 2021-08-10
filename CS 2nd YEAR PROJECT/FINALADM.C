#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<share.h>
#include "image2.c"
struct admind{
int employeeid;
char name[25];
char emailid[25];
char designation[10];
char image[15];
};struct admind as[10];
void main(){
FILE *fp;
int i,n;
clrscr();
fp=fopen("adbook.txt","wb");
if(fp==NULL){
perror("Cannot open File");
exit(1);
}
printf("How many records you want to enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter employeeid ");
scanf("%d",&as[i].employeeid);
printf("\nEnter name ");
fflush(stdin);
scanf("%[^\n]s",as[i].name);
printf("\nEnter emailid ");
fflush(stdin);
scanf("%[^\n]s",as[i].emailid);
printf("\nEnter designation ");
fflush(stdin);
scanf("%[^\n]s",as[i].designation);
printf("\nEnter Image address ");
fflush(stdin);
scanf("%[^\n]s",as[i].image);
}
fwrite(as,sizeof(struct admind),n,fp);
printf("data successfully");
fclose(fp);
getch();
}