#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fs;
 char c='y';
 struct emp
 {
  char nam[25];
  int age,sal;
 };
 struct emp e;

 fs=fopen("emprec.DAT","w");
 if(fs==NULL)
 {
  printf("cant open\n");
  
 }
 while(c=='y')
 {
  printf("Enter name,age and sal\n");
  scanf("%s %d %d",e.nam,&e.age,&e.sal);
  fprintf(fs,"%s %d %d",e.nam,e.age,e.sal);
  printf("\nAdd another record (y/n)");
  c=getche();
 }
 fclose(fs);
}
