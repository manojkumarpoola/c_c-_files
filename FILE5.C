#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fs;
 char c[25];
 int len;
 clrscr();
 fs=fopen("strwrite.c","w");
 if(fs==NULL)
 {
   printf("cant open\n");
   exit(0);
 }
 printf("Enter some strings\n");
// len=strlen(c);
 fgets(c,24,fs);
 while(strlen(gets(c))>0)
 {
  fputs(c,fs);
  fputs("\n",fs);
 }
 fclose(fs);
}