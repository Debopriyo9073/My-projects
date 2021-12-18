#include<stdio.h>
int main()
{
	int i,n,no,r,even=0,odd=0;
	printf("enter the number: ");
	scanf("%d",&n);
	no=n;
	while(no>0)
	{
		r=no%10;
		if(i%2==0)
		{
			even=even+r;
		}
		else
		{
			odd=odd+r;
		}
		no=no/10;
		i++;
	} 
	if(even==odd)
		printf("the number is dividible by 11");
	else
		printf("the number is not divisible by 11");
	return 0;
}
