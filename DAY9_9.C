#include<stdio.h>
#include<conio.h>
void main()
{
 int bin=1,p,n=0,rw,r;
 clrscr();
 printf("Enter the no of rows do u want:");
 scanf("%d",&rw);
 printf("\n Pascal triangle\n");
 while(n<rw)
 {
  for(p=40-3*n;p>0;--p)
  printf(" ");
  for(r=0;r<=n;r++)
  {
   if((r==0)||(n==0))
   bin=1;
   else
   bin=(bin*(n-r+1))/r;
   printf("%6d",bin);
  }
  printf("\n");
  ++n;
 }
 getch();
}