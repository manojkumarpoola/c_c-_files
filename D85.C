#include<stdio.h>
#include<conio.h>
void main()
{
 double w1,w2,c1,c2,avg;
 clrscr();
 printf("Enter weights w1 and w2 values:");
 scanf("%lf%lf",&w1,&w2);
 printf("Enter cost c1 and c2 values:\n");
 scanf("%lf%lf",&c1,&c2);
 avg=((w1*c1)+(w2*c2))/(c1+c2);
 printf("%lf",avg);
 getch();
}