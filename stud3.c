#include<stdio.h>
#include<conio.h>
struct student
	{
		int rollno,age,marks;
		char name[20];
	};
int main()
{
	int i;
	struct student s[15];
	printf("Enter Students details:");
	for(i=1;i<15;i++)
	{
		printf("\nname: ",i);
		scanf("%s",s[i].name);
		printf("\nRollno:");
		scanf("%d",&s[i].rollno);
		printf("\n Age:");
		scanf("%d",&s[i].age);
		printf("\n Marks:");
		scanf("%d",&s[i].marks);
	}
	printf("Name:\t\tRollno\tAge\tMarks\n");
	printf("*****\t\t******\t***\t*****\n");
	printf("%s\t\t%d\t%d\t%d",s[i].name,s[i].rollno,s[i].age,s[i].marks);
return 0;
}
