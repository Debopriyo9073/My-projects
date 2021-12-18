#include<stdio.h>
int index()
{
	int index,n,ar[15],k;
	printf("enter the number: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("enter the vale of the number: ");
		scanf("%d",&ar[index]);
	}
	
	printf("enter the number: ");
	scanf("%d",&k);
	for(index=0;index<n;index++)
	{
		if(ar[index]==k)
		printf("the number is %d and it's index value is: %d",ar[index],index);
	}
	return 0;
}
int main()
{
	int k;
	k=index();
	return 0;
}
