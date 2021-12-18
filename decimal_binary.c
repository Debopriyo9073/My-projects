#include<stdio.h>
int main()
{
	int n,r,bin=0,i=1;
	printf("enter a decimal number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		bin=bin+(r*i);
		i=i*10;
		n=n/2;
	}
	//printf(" the number %d",i);
	printf("the binary number is %d",bin);
	return 0;
}
