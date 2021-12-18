#include<stdio.h>
int main()
{
	int n,d,r=0;
	printf("\n enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
	}
	if(r*10+d)
	printf("\n the number is palindrome");
	else
	printf("\n the number is not palindrome");
	return 0;
}
