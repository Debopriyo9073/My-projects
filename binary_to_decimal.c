#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,i=0,dec=0;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		dec=dec+(r*pow(2,i));
		i++;
	}
	printf("the decimal number is %d",dec);
	return 0;
}
