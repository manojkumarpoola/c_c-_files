#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,sum=0;
  clrscr();
  printf("Enter the array elements\n");
  for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
   sum=sum+a[i];
  }
  printf("Sum of all elements of array:%d",sum);
  getch();
}