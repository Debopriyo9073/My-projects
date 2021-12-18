#include<stdio.h>
int main()
{
	int i,n,no,sum=0;
	for(n=1;n<=10000;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			sum=sum+i;
		}
		if(sum==n)
		printf("%d,",n);
	}
	return 0;
}
