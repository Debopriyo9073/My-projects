#include<stdio.h>
int number()
{
	int i,n,ar[15],max=0,min=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value of the numbers: ");
		scanf("%d",&ar[i]);
	}
	
	max=ar[0];
	min=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]>max)
		max=ar[i];
		if(ar[i]<min)
		min=ar[i];
	}
	printf("\n The maximum value is:%d",max);
	printf("\n The minimum value is:%d",min);
	return 0;
}
int main()
{
	int k;
	k=number();
	return 0;
}
