#include<stdio.h>
int main()
{
	int i,j,n,ar[20],temp=0;
	printf("how many number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&ar[i]);
	}
	
	j=n-1;
	for(i=0;i<=n-1;i++)
	{
		if(j>=n/2)
		{
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
		printf("\n the reverse order of the %d array is:%d",i,ar[i]);
		j--;
	}
	return 0;
}
