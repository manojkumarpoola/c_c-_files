#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,mt=0,kg=0,hg=0,g=0;
 clrscr();
 printf("Enter the weight\n");
 scanf("%d",&n);
 if(n>=1000000)
 {
  mt=n/1000000;
  n=n%1000000;
 }
 if(n<1000000 && n>=1000)
 {
  kg=n/1000;
  n=n%1000;
 }
 if(n<1000 && n>=100)
 {
  hg=n/100;
  n=n%100;
 }
 if(n<100 && n>=1)
 {
  g=n/1;
 }
 printf("Metric ton=%d,kilogram=%d,hectagram=%d,gram=%d",mt,kg,hg,g);
 getch();
}
