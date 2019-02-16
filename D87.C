#include<stdio.h>
#include<conio.h>
void main()
{
 int x;
 float y;
 clrscr();
 printf("Total distance in km:\n");
 scanf("%d",&x);
 printf("Fuel ltr:\n");
 scanf("%f",&y);
 printf("Avg con:%.3f\n",x/y);
 printf("\n");
 getch();
}