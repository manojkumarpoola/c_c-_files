#include<stdio.h>
#include<conio.h>
struct studentinfo3
{
	char rln[10],name[20],addr[20],nm[20];
	int age,marks;
};
int main()
{
	struct studentinfo3 s3[100];
	struct studentinfo3 ss;
	char nm[20];
	int i,n,j;
	printf("\nEnter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%d student info\n",i+1);
		printf("\nEnter the roll number:");
		scanf("%s",s3[i].rln);
		printf("Enter the Name:");
		scanf("%s",s3[i].name);
		printf("Enter the age:");
		scanf("%d",&s3[i].age);
		printf("Enter the address:");
		scanf("%s",s3[i].addr);
		printf("Enter the marks:");
		scanf("%d",&s3[i].marks);
	}
	printf("\n\n Roll.No \t Name \t\t Age \t Address \t Marks");
	for(i=0;i<n;i++)
	{
		printf("\n %s \t\t %s \t\t\t %d \t %s \t\t %d",s3[i].rln,s3[i].name,s3[i].age,s3[i].addr,s3[i].marks);	
	}
	printf("\n\nEnter the name to be search:");
	scanf("%s",ss.nm);
	printf("\n\n Roll.No \t Name \t\t Age \t\tAddress \t \tMarks");
	for(j=0;j<n;j++)
	{
		if(strcmp(s3[j].name,ss.nm)==0)
		printf("\n %s \t\t %s \t\t %d \t %s \t\t %d",s3[j].rln,s3[j].name,s3[j].age,s3[j].addr,s3[j].marks);
	}
	return 0;
}
