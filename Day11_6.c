#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr[10],n,i,l;
	printf("Enter the no.of arr elements:");
	scanf("%d",&n);
	//n=(int*)malloc(n*sizeof(int));
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	l=arr[0];
	for(i=1;i<n;i++)
	{
		if(l<arr[i])
		l=arr[i];
	}
	printf("\n largest value is:%d ",l);
	return 0;
}

