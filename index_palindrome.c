#include<stdio.h>
int main()
{
	int n,index,ar[15],last_index=0,mid,flag=1;
	printf("enter how many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the numbers: ");
		scanf("%d",&ar[index]);
	}
	mid=n/2;
	last_index=n-1;
	for(index=0;index<mid;index++)
	{
		if(ar[index]!=ar[last_index])
		{
			flag=0;
			printf("\n it is not a palindrom");
			break;
		}
		last_index--;
	}
	if(flag==1)
	{
		printf("\n it is palindrom");
	}
	return 0;
}
