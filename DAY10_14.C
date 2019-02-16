#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,size,count=0;
 clrscr();
 printf("Enter no of elements in an array:\n");
 scanf("%d",&size);
 printf("Enter the elements of an array:",size);
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++)
  {
   if(a[i]==a[j])
   {
    count++;
    break;
   }
  }
 }
 printf("\n Total no of duplicate elements in this array=%d",count);
 getch();
}