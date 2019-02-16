#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fs;
 //char c='y';
 struct emp
 {
  char nam[25];
  int age,sal;
 };
 struct emp e;
 fs=fopen("emprec.DAT","r");
 if(fs==NULL)
 {
  printf("cant open\n");
  exit(0);
 }
 while(fscanf(fs,"%s %d %d",e.nam,&e.age,&e.sal)!=EOF)
 {
  printf("%s %d %d",e.nam,e.age,e.sal);
 }
 fclose(fs);
}
