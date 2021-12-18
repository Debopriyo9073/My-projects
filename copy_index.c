#include<stdio.h>
int main()
{
	int n,index,ar[15],dp[15];
	printf("How many numbers: ");
	scanf("%d",&n);
	
	for(index=0;index<n;index++)
	{
		printf("The value of the number is: ");
		scanf("%d",&ar[index]);
	}
	
	for(index=0;index<n;index++)
	{
			dp[index]=ar[index];
	}
	for(index=0;index<n;index++)
	{
		printf("\n The elememts shorted in the first array are %d= %d",index,ar[index]);
	}
	
	
	for(index=0;index<n;index++)
	{
		printf("\n The elememts shorted in the second array are %d= %d",index,dp[index]);
	}
	return 0;
}
