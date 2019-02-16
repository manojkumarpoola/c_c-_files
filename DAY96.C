#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("Enter the number:\n");
 scanf("%d",&n);
 printf("%d divisible by:\n", n);
 for(i=0;i<=11;i++)
 {
  if(n%i==0)
  printf("%d\n",i);
 }
 getch();
}
