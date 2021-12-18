#include<stdio.h>
int main()
{
	int n,k,index,ar[15],dp[15],ap[15],marge_index=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	
	for(index=0;index<n;index++)
	{
		printf("The value of the first number is: ");
		scanf("%d",&ar[index]);
	}
	printf("How many numbers: ");
	scanf("%d",&k);
	for(index=0;index<k;index++)
	{
		printf("The value of the second number is: ");
		scanf("%d",&dp[index]);
	}
	for(index=0;index<n;index++)
	{
		ap[marge_index]=ar[index];
		marge_index++;
	}
	for(index=0;index<k;index++)
	{
		ap[marge_index]=dp[index];
		marge_index++;
	}
	for(index=0;index<marge_index;index++)
	{
		printf("\n the value of the %d index are %d",index,ap[index]);
	}
	return 0;
}
