#include<stdio.h>
#include<conio.h>
void main()
{
 int cid,amt,uc,n,res,i;
 float amtchrg;
 double pu,sc,nap;
 char cname;
 clrscr();
 printf("Enter all the values:");
 scanf("%d",&n);
 printf("customer id:\ncustomer name:\nunit:\namount charge:\nper unit:\nsurcharge amt:\nnet amt paid:\n");
 scanf("%d%c%d%f%lf%lf%lf",&cid,&cname,&uc,&amtchrg,&pu,&sc,&nap);
 printf("%d\n",amt);
 switch(n)
 {
  case 1:if(i<=199)
	 {
	  printf("%d%c%d%f%lf%lf%lf",cid,cname,uc,amtchrg,pu,sc,nap);
	  printf("upto 199 @1.20");
	  break;
	 }
	 else
	 {
	  printf("invalid");
	  break;
	 }
  case 2:if(i<=400)
	 {
	  printf(">200 &<400 @1.50");
	  break;
	 }
	 else
	 {
	  printf("invalid");
	  break;
	 }
  case 3:if(i<=600)
	 {
	  printf(">400 &<600 @1.80");
	  break;
	 }
	 else
	 {
	  printf("invalid");
	  break;
	 }
  case 4:if(i>600)
	 {
	  printf(">600 @2.00");
	  break;
	 }
	 else
	 {
	  printf("invalid");
	  break;
	 }
  default:printf("Invalid option");
 }
}
