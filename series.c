#include<stdio.h>
int main()
{
	long i,a=1,b=0,c=0;
	for(i=1;i<=100;i++)
	{
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
