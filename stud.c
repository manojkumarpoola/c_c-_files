#include<stdio.h>
#include<conio.h>
struct student
	{
		int rollno,age,marks;
		char name[20];
	};
int main()
{
	
	struct student s1;
	printf("Enter Students details:");
	printf("\nname: ");
	scanf("%s",s1.name);
	printf("\nRollno:");
	 scanf("%d",&s1.rollno);
	printf("\n Age:");
	scanf("%d",&s1.age);
	printf("\n Marks:");
	scanf("%d",&s1.marks);
	printf("size is:\n",sizeof(s1));
	printf("Name:\t\tRollno\tAge\tMarks\n");
	printf("*****\t\t******\t***\t*****\n");
	printf("%s\t\t%d\t%d\t%d",s1.name,s1.rollno,s1.age,s1.marks);
		
return 0;
}
