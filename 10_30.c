#include<stdio.h>
int main()
{
	int index,n,ar[15],dp[15],copy_index=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the numbers: ");
		scanf("%d",&ar[index]);
	}
	
	for(index=0;index<n;index++)
	{
		if(ar[index]>10 && ar[index]<30)
		{
			dp[copy_index]=ar[index];
			copy_index++;
		}
	}
	
	for(index=0;index<copy_index;index++)
	{
		printf("\n The value of the %d index is:%d",index,dp[index]);
	}
	return 0;
}
