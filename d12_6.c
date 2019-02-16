#include<stdio.h>
#include<conio.h>
struct arth
{
	int a,b;	
};
void arithmetic(struct arth s)
{
    
    printf("Addition:%d\nSubtraction:%d\nMul:%d\nDivision:%g",s.a+s.b,s.a-s.b,s.a*s.b,s.a/s.b);
}
int main()
{
	struct arth sc;
	printf("Enter the two numbers:");
	scanf("%d",&sc.a);
	scanf("%d",&sc.b);
	arithmetic(sc);
	return 0;
}

