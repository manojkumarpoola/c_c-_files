#include<stdio.h>
#include<conio.h>
struct stdinfo5
{
	int rn,c,m,p;
	char name[20];
};
int main()
{
	struct stdinfo5 s[50];
	int i,n;
	float a,d,pc;
	printf("Enter the no.of records:");
	scanf("%d",&n);
	printf("Enter the std info");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the roll number:");
		scanf("%d",&s[i].rn);
		printf("Enter the nsme:");
		scanf("%s",s[i].name);
		printf("Enter the chemistary marks:");
		scanf("%d",&s[i].c);
		printf("Enter the maths marks:");
		scanf("%d",&s[i].m);
		printf("Enter the physics marks:");
		scanf("%d",&s[i].p);
	}
	printf("\n\naverage marks are\n");
	printf("Roll no.\tName\t\tChem\tMaths\tPhys\tpercent");
	for(i=0;i<n;i++)
	{
		a=s[i].c+s[i].m+s[i].p;
		d=a/300;
		pc=d*100;
		printf("\n%d\t%s\t\t%d\t%d\t%d\t%g",s[i].rn,s[i].name,s[i].c,s[i].m,s[i].p,pc);
	}
	return 0;
}
