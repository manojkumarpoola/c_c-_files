#include<stdio.h>
#include<conio.h>
struct studentinfo1
{
	int rlnum,age,marks;
	char name[20];
};
int main()
{
	struct studentinfo1 s;
	printf("\nEnter the student info:");
	printf("\nEnter the roll number:");
	scanf("%d",&s.rlnum);
	printf("\nEnter the name:");
	scanf("%s",s.name);
	printf("\nEnter the age:");
	scanf("%d",&s.age);
	printf("\nEnter the marks:");
	scanf("%d",&s.marks);
	printf("\n");
	printf("Roll.no\tName\t\tAge\tMarks");
	printf("\n%d\t%s\t%d\t%d",s.rlnum,s.name,s.age,s.marks);
	printf("\nSize of the structure is:%d",sizeof(s));
	return 0;
}
