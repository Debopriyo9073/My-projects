#include<stdio.h>
int main()
{
	int n,index,ar[15],even_ar[15],odd_ar[15],even_index=0,odd_index=0; 
	printf("How many numbers: ");
	scanf("%d",&n);
	
	for(index=0;index<n;index++)
	{
		printf("The value of the number is: ");
		scanf("%d",&ar[index]);
	}
	

	for(index=0;index<n;index++)
	{
		printf("\n %d= %d",index,ar[index]);
	} 
	for(index=0;index<n;index++)
	{
		if(ar[index]%2==0)
		{
			even_ar[even_index]=ar[index];
			even_index++;
		}
		else
		{
			odd_ar[odd_index]=ar[index];
			odd_index++;
		}
	}
	for(index=0;index<even_index;index++)
	{
		printf("\n even numbers are:%d",even_ar[index]);
	}
	for(index=0;index<odd_index;index++)
	{
		printf("\n odd numbers are:%d",odd_ar[index]);
	}
	return 0;
}
