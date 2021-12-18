#include<stdio.h>
int main()
{
	int index,n,ar[15],k,match=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("The value of the number is: ");
		scanf("%d",&ar[index]);
	}
	
	printf("enter the removing number: ");
	scanf("%d",&k);
	for(index=0;index<n;index++)
	{
		if(k==ar[index])
		{
			match=1;
		}
		if(match==1)
		{
			ar[index]=ar[index+1];
		}
	}
	n--;
	for(index=0;index<n;index++)
	{
		printf("\n %d= %d",index,ar[index]);
	}	
	return 0;
}
