#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\n sum of all digits of a perticular number is %d",sum);
	return 0;
}
