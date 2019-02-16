#include<stdio.h>
#include<conio.h>
struct studentinfo2
{
	char rln[10],name[20];
	int age;
};
int main()
{
	struct studentinfo2 s2[10];
	int i,n;
	printf("\nEnter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%d student info\n",i+1);
		printf("\nEnter the roll number:");
		scanf("%s",s2[i].rln);
		printf("Enter the Name:");
		scanf("%s",s2[i].name);
		printf("Enter the age:");
		scanf("%d",&s2[i].age);
	}
	printf("\n\nRoll.No\tName\t\t\tAge");
	for(i=0;i<n;i++)
	{
		if(i==1)
		printf("\n%s\t%s\t\t\t%d",s2[i].rln,s2[i].name,s2[i].age);	
	}
	return 0;
}
