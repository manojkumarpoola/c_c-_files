#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
 float radius,perimeter,area;
 clrscr();
 printf("Enter the Radius of a circle:\n");
 scanf("%f",&radius);
 perimeter=2*PI*radius;
 area=PI*radius*radius;
 printf("Perimeter of circle:%f\n",perimeter);
 printf("Area of circle:%f\n",area);
 getch();
}