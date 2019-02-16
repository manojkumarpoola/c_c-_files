#include<stdio.h>
#include<conio.h>
void main()
{
 int EID,hrs,sal;
 clrscr();
 printf("Employee ID:\n");
 scanf("%d",&EID);
 printf("No of hours:\n");
 scanf("%d",&hrs);
 printf("For one day salary:\n");
 scanf("%sal",&sal);
 sal=sal*hrs;
 printf("EID=%d\n sal=%.2lf\n",EID,sal);
 getch();
}