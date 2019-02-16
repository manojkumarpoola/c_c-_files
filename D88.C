#include<stdio.h>
#include<conio.h>
void main()
{
 int amt;
 int tt=0,fh=0,th=0,oh=0,f=0,t=0,ten=0;
 clrscr();
 printf("Enter the amount:");
 scanf("%d",&amt);
 if(amt>=2000)
 {
  tt=amt/2000;
  amt=amt%2000;
 }
 if(amt<2000&&amt>=500)
 {
  fh=amt/500;
  amt=amt%500;
 }
 if(amt<500&&amt>=200)
 {
  th=amt/200;
  amt=amt%200;
 }
 if(amt<200&&amt>=100)
 {
  oh=amt/100;
  amt=amt%100;
 }
 if(amt<100&&amt>=50)
 {
  f=amt/50;
  amt=amt%50;
 }
 if(amt<50&&amt>=20)
 {
  t=amt/20;
  amt=amt%20;
 }
 if(amt<20&&amt>=10)
 {
  ten=amt/10;
  amt=amt%10;
 }
 printf("2000=%d,500=%d,200=%d,100=%d,50=%d,20=%d,10=%d,paise=%d",tt,fh,th,oh,f,t,ten,amt);
 getch();
}
