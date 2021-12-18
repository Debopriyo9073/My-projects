#include<stdio.h>
int main()
{
	int i,j,n,ar[20],count=0;
	printf("enter how many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				count++;
			}
		}
	}
	printf("total number of duplicate elements found in the array is:%d",count);
	return 0;
}
