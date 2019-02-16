#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20];
 int n,i,small,s_small;
 clrscr();
 printf("Enter the no of elements\n");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 small=s_small=a[0];
 for(i=0;i<n;i++)
 {
  if(small>a[i])
  {
   s_small=small;
   small=a[i];
  }
  else if(s_small>a[i] && a[i]!=small)
  {
   s_small=a[i];
  }
 }
 printf("\nsecond smallest number in an array:%d\n",s_small);
 getch();
}
