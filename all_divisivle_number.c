#include<stdio.h>
int main()
{
	int i=0,num,no,even=0,odd=0,r,c=0;
	for(num=1;num<=50000;num++)
	{
		no=num;
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
		//printf("\n num:%d even:%d odd:%d ",num,even,odd);
		if(even==odd)
		{
			printf("\n %d",num);
		}
		even=0;
		odd=0;
	}
	return 0;
}
