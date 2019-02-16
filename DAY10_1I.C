#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],pos,i,n,value;
 clrscr();
 printf("Enter the size of array:\n");
 scanf("%d",&n);
 printf("Enter elements in the ascending order:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the location to insert on value\n");
 scanf("%d",&pos);
 printf("Enter the value to insert:\n");
 scanf("%d",&value);
 for(i=n-1;i>=pos;i--)
 a[i+1]=a[i];
 a[pos-1]=value;
 printf("After inserting the list:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 getch();
}
