#include<stdio.h>
#include<conio.h>
struct convertion
{
	int inch,feet,res;	
};
void con(struct convertion s)
{
    s.res=s.inch+s.feet;
    printf("%d",s.res);
}
int main()
{
	struct convertion sc;
	printf("Enter the two distances:");
	scanf("%d",&sc.inch);
	scanf("%d",&sc.feet);
	con(sc);
	return 0;
}

