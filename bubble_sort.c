#include<stdio.h>
int main()
{
	int n,i,j,temp,ar[20];
	printf("enter how many number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value: ");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;	
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",ar[i]);
	}
	return 0;
}
