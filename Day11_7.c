#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	char *p;
	int o=0,c=0,i;
	printf("Enter the string:");
	scanf("%s",str);
	p=str;
	while(*p!='\0')
	{
		if((*p)=='a' || (*p)=='e' || (*p)=='i' || (*p)=='o' ||(*p)=='u')
		o++;
		else
		c++;
		p++;
	}
	printf("\n No.of Ovels is %d and No.of Consonents is:%d",o,c);
	return 0;
}

