#include<stdio.h>
#include<conio.h>
void main()
{
 float x1,y1,x2,y2,dis;
 clrscr();
 printf("Enter x1 value:\n");
 scanf("%f",&x1);
 printf("Enter y1 value:\n");
 scanf("%f",&y1);
 printf("Enter x2 value:\n");
 scanf("%f",&x2);
 printf("Enter y2 value:\n");
 scanf("%f",y1);
 dis=((x2-x1)*(x2-x1)+(y2-y1)(y2-y1));
 printf("%f",dis);
 getch();
}