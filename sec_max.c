#include<stdio.h>
int main()
{
	int index,n,ar[20],max=0,s_max;
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the number: ");
		scanf("%d",&ar[index]);
	}
	max=s_max=0;
	for(index=0;index<n;index++)
	{
		if(ar[index]>max)
		{
			s_max=max;
			max=ar[index];
		}
	}
	printf("The sec highest number is:%d",s_max);
	return 0;
}
