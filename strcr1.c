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
	scanf("\n%d %s %d %d",&s1.rollno,s1.name,&s1.age,&s1.marks);
		printf("\n%d\t%s\t%d\t%d",s1.rollno,s1.name,s1.age,s1.marks);
		
return 0;
}
