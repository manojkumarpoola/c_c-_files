#include<stdio.h>
#include<conio.h>
void main()
{
 int length,width,perimeter,area;
 clrscr();
 printf("Enter the Length of Rectangle:\n");
 scanf("%d",&length);
 printf("Enter the Width of Rectangle:\n");
 scanf("%d",&width);
 perimeter=2*(length+width);
 area=length*width;
 printf("Perimeter of Rectangle:%d\n",perimeter);
 printf("Area of Rectangle:%d",area);
 getch();
}
