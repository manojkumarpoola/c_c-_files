#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fs;
 char c[30];
 fs=fopen("strwrite.c","r");
 if(fs==NULL)
 {
  printf("cant open\n");
 }
 while(fgets(c,25,fs)!=NULL)
 {
  
   printf("%s",c);

 }
 fclose(fs);
}
