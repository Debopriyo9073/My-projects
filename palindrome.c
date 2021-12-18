#include<stdio.h>
int main()
{
	int n,no,r,d=0,i;
	printf("enter the number");
	scanf("%d",&n);
	no=n;
	while(no>0)
	{
		r=no%10;
		d=d*10+r;
		no=no/10;
	}
	if(n==d)
		printf("it is a palindrome number");
	else
		printf("it is not a palindrome number");

	return 0;
}
