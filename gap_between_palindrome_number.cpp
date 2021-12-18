
#include<stdio.h>
int main()
{
	int i,num,rem,dig=0,count=1;
	for(i=1;i<=10000;i++)
	{
		num=i;
		while(num>0)
		{
			rem=num%10;
			dig=dig*10+rem;
			num=num/10;
		}
		if (i==dig)
		{
			if(count%2==1)
			{
				printf("\n %d",dig);
			}
			count++;
		}
		dig=0;
	}
	return 0;
}
