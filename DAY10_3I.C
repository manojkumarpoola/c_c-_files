#include<stdio.h>
#include<conio.h>
void main()
{
 int i,first,last,mid,n,search,a[100];
 clrscr();
 printf("Enter no of elements\n");
 scanf("%d",&n);
 printf("Enter integers\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter value to find\n");
 scanf("%d",&search);
 first=0;
 last=n-1;
 mid=(first+last)/2;
 while(first<=last)
 {
  if(a[mid]<search)
  first=mid+1;
  else if(a[mid]==search)
  {
   printf("%d found at location %d\n",search,mid+1);
   break;
  }
  else
  last=mid-1;
  mid=(first+last)/2;
 }
 if(first>last)
 printf("Not found!%d isn't present in the list\n",search);
 getch();
}