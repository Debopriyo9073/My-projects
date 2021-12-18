#include<stdio.h>
int main()
{
	int n,index,max=0,s_max=0,ar[15];
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the numbers: ");
		scanf("%d",&ar[index]);
	}
	
	for(index=0;index<n;index++)
	{
		if(ar[index]>max)
		{
			max=ar[index];
		}
	}
	for(index=0;index<n;index++)
	{
		if(max==ar[index])
		{
			ar[index]=0;
		}
	}
	
	for(index=0;index<n;index++)
	{
		if(ar[index]>s_max)
		{
			s_max=ar[index];
		}
	}
	printf("\n the sec max number is:%d",s_max);
	return 0;
}
