#include<stdio.h>
#include<conio.h>
struct student
	{
		int rollno,age,marks;
		char name[15];
	};
int main()
{
	int i; char name2[15];
	struct student s[5];
	printf("Enter Students details:");
	for(i=1;i<2;i++)
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
	scanf("%s",name2);
	
	//s[i].name2[i];
	for(i=1;i<2;i++)
	{
		if(strcmp(name2,s[i].name)==0)
		{
			printf("%s\t%d\t%d\t%d",s[i].name,s[i].rollno,s[i].age,s[i].marks);
		}
		else
		printf("Record is not found\n");
	}
return 0;
}

