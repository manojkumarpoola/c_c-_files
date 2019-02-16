#include<stdio.h>
#include<conio.h>
void main()
{
 int d,y,w;
 clrscr();
 d=1250;
 y=d/365;
 w=(d%365)/7;
 d=d-((y*365)+(w*7));
 printf("years:%d\n",y);
 printf("weeks:%d\n",w);
 printf("days:%d\n",d);
 getch();
}