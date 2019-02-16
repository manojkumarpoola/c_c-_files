#include<stdio.h>
#include<conio.h>
struct customer
{
	char name[20];
	int acno,bal;
};
int main()
{
	struct customer c[100];
	int i,n,j;
	printf("\nEnter the number of customer:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%d customer info\n",i+1);
		printf("Enter the Name:");
		scanf("%s",c[i].name);
		printf("Enter the ac number:");
		scanf("%d",&c[i].acno);
		printf("Enter the balance:");
		scanf("%d",&c[i].bal);
	}
	printf("\n\n Name \t\t Ac No. \t Bal");
	for(i=0;i<n;i++)
	{
		printf("\n %s\t\t%d\t%d",c[i].name,c[i].acno,c[i].bal);	
	}
	printf("\n\nBalance below 200");
	for(i=0;i<n;i++)
	{
		j=c[i].bal;
		if(j<200)
		printf("\n %s\t\t%d\t%d",c[i].name,c[i].acno,c[i].bal);
	}
	printf("\n\nBalance more than 10000");
	for(i=0;i<n;i++)
	{
		j=c[i].bal;
		if(j>10000)
		printf("\n %s\t\t%d\t%d",c[i].name,c[i].acno,(c[i].bal+100));
	}
	return 0;
}
