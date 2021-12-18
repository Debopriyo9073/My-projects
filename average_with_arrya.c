#include<stdio.h>
int average()
{
	int index,n,ar[15],sum=0,ave=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the number: ");
		scanf("%d",&ar[index]);
	}
	for(index=0;index<n;index++)
	{
		sum=sum+ar[index];
	}
	ave=sum/n;
	printf("\n the average is:%d",ave);
	return 0;
}
int main()
{
	int k;
	k=average();
	return 0;
}
