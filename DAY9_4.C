#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10],t;
 int i,j;
 clrscr();
 printf("Enter the name:\n");
 scanf("%s",&a);
 for(i=0;a[i]!=0;i++)
 {
  for(j=i;a[j]!=0;j++)
  {
   if(a[i]>a[j])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
  }
 }
 printf("%s",a);
 getch();
}