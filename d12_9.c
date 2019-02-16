#include<stdio.h>
#include<conio.h>
struct date
{
	int d,m,y;
};
int main()
{
	struct date e[10];
	printf("Enter the date:");
	printf("\nEnter the day:");
	scanf("%d",&e[0].d);
	printf("Enter the month:");
	scanf("%d",&e[0].m);
	printf("Enter the year:");
	scanf("%d",&e[0].y);
	printf("\n\nEnter the date to check:");
	printf("\nEnter the day:");
	scanf("%d",&e[1].d);
	printf("Enter the month:");
	scanf("%d",&e[2].m);
	printf("Enter the year:");
	scanf("%d",&e[3].y);
	if((e[0].d-e[1].d)==0 && (e[0].m-e[1].m)==0 && (e[0].y-e[1].y)==0)
	printf("\nDates are equal");
	else
	printf("\nDates not are equal");
	return 0;
}
	
	
