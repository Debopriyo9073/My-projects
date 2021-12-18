#include<stdio.h>
int main()
{
	int i,sum_index=0,n,ar[20];
	printf("enter how many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		ar[sum_index]=ar[sum_index]+ar[i+1];
	}
	printf("the sum of the index is:%d",ar[sum_index]);
	return 0;
}
