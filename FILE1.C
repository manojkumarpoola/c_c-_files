#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fp;
 char c;//character
 clrscr();
 fp=fopen("file1.c","r");
 if(fp==NULL)
 {
  printf("cant open file\n");
  exit(0);
 }
 while(2)
 {
  fgets(c,fp);
  if(c==EOF)
  break;
  printf("%c",c);
 }
 fclose(fp);
}
