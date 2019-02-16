#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20];
 int n,i,large,s_large;
 clrscr();
 printf("Enter the no of elements\n");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 large=s_large=a[0];
 for(i=0;i<n;i++)
 {
  if(large<a[i])
  {
   s_large=large;
   large=a[i];
  }
  else if(s_large<a[i] && a[i]!=large)
  {
   s_large=a[i];
  }
 }
 printf("\nsecond largest number in an array:%d\n",s_large);
 getch();
}
