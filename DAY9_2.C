#include<stdio.h>
#include<conio.h>

void main()
{
 long int fact=1,ln=0,count=0,i=1,n=0;
 clrscr();
 printf("Enter the number:\n");
 scanf("%ld",&n);
 if(n==0)
 {
   fact=1;
 }
 else
 {
  for(i=1;i<=n;i++)
  {
   fact=fact*i;
  }
 }
 printf("%ld\n",fact);
 while(fact>0)
 {
  ln=fact%10;
  fact/10;
  if(ln=!0)
  {
   break;
  }
  else
  {
   count+=1;
  }
 }
 printf("Number of zeros in factorial is:%d\n",count);
 getch();
}