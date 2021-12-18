#include<stdio.h>
int main()
{
	int n,i,j,index,count=1,ar[20],k=0,match=0;
	printf("enter how many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&ar[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(index=0;index<k;index++)
		{
			if(ar[index]==ar[i])
			{
				match=1;
			}
		}
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				count++;
				ar[k]=ar[i];
				k++;
			}
		}
		if(match==0)
		{
			printf("\n %d occurs %d times",ar[i],count);
		}
		count=1;
		match=0;
	}
	return 0;
}
