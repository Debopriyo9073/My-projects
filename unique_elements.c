#include<stdio.h>
int main()
{
	int i,j,ar[20],n,match=0,k=0,index;
	printf("enter how many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&ar[i]);
	}
	
	printf("The unique elements found in the array are: ");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(ar[i]==ar[j])
			{
				match=1;
				ar[k]=ar[i];
				k++;
			}
		}
		for(index=0;index<k;index++)
		{
			if(ar[index]==ar[i])
			{
				match=1;
			}
		}
		if(match==0)
		{
			printf("%d,",ar[i]);
		}
		match=0;
	}
	return 0;
}
