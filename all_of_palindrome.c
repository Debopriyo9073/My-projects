#include<stdio.h>
int main()
{
	int i,num,rev,dig=0;
	for(i=1;i<=10000;i++)
	{
		num=i; //120 //121
		while(num>0) //120>0 | 12>0 | 1>0 || 121>0 | 12>0|1>0
		{	
			rev=num%10; //0 | 2 | 1 || 1|2|1
			dig=dig*10+rev; //0 | 2 |21 || 121|1212|12121
			num=num/10; //12 | 1 | 0||12||1|0
		}
		if(i==dig) //120==21 |121==12121
		{
			printf("\n %d",dig);
		}
		dig=0;
	}
	return 0;
}
