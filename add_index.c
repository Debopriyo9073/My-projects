#include<stdio.h>
int main()
{
	int index,n,j,ar[15],k;
	printf("Enter how many number: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the numbers: ");
		scanf("%d",&ar[index]);
	}
	printf("enter the index number: ");
	scanf("%d",&j);
	
	printf("\n enter the value: ");
	scanf("%d",&k);
	for(index=(n-1);index>=j;index--)
	{
		ar[index+1]=ar[index];
	}
	ar[j]=k;
	n++;
	for(index=0;index<n;index++)
	{
		printf("\n %d= %d",index,ar[index]);
	}
	return 0;
}
