#include<stdio.h>
#include<conio.h>
void main()
{
 int d,m,a,b,c,d2,s;
 int y;
 int mcode[]={0,3,3,6,1,4,6,2,5,0,3,5};
 char day[]={'s','m','t','w','t','f','s','\0'};
 clrscr();
 printf("Enter the day,month\n");
 scanf("%d%d",&d,&m);
 printf("Enter the year:\n");
 scanf("%d",&y);
 a=d+y;
 b=y/4;
 c=mcode[m--];
 d2=0;
 s=(a+b+c+d2)%7;
 printf("%s",day[s]);
 getch();
}