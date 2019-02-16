#include<stdio.h>
#include<conio.h>
void main()
{
 int a1[10],a2[20],i,n;
 clrscr();
 printf("Enter no of elements:\n");
 scanf("%d",&n);
 printf("Enter the values:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a1[i]);
 }
 for(i=0;i<n;i++)
 {
  a2[i]=a1[i];
 }
 printf("The array elements is:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a1[i]);
 printf("\nThe copied array is:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a2[i]);
 getch();
}