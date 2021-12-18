#include<stdio.h>
int main()
{
	int n,i,j,ar[20],temp=0,min=0,k;
	printf("enter how many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(ar[j]<ar[min])
			{
				min=j;
			}
		}
		temp=ar[i];
		ar[i]=ar[min];
		ar[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d=%d",i,ar[i]);
	}
	return 0;
}
