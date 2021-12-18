#include<stdio.h>
int main()
{
	int n,middle_index=0,first_index=0,k,last_index,match=0,ar[20];
	printf("enter how many number: ");
	scanf("%d",&n);
	for(first_index=0;first_index<n;first_index++)
	{
		printf("enter the value: ");
		scanf("%d",&ar[first_index]);
	}
	first_index=0;
	printf("\n enter the searched number: ");
	scanf("%d",&k);
	last_index=n;
	for(;first_index<last_index;)
	{
		middle_index=first_index+last_index/2;
		if(k==ar[middle_index])
		{
			match=1;
			printf("\n%d is present the position of %d",ar[middle_index],middle_index);
			break;
		}
		match=0;
		if(ar[middle_index]<k)
		{
			first_index=middle_index;
		}
		else
		{
			last_index=middle_index;
		}
	}
return 0;
}
