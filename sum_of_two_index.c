#include<stdio.h>
int main()
{
	int n1,n2,marge_index=0,index,num1[20],num2[20],sum[20],num1_index=0,num2_index=0,sum_index=0,carry=0,k=10;
	printf("enter how many numbers in first array: ");
	scanf("%d",&n1);
	for(index=0;index<n1;index++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&num1[index]);
	}
	
	printf("enter how many numbers in second array: ");
	scanf("%d",&n2);
	for(index=0;index<n2;index++)
	{
		printf("enter the value of the number: ");
		scanf("%d",&num2[index]);
	}
	
	for(num1_index=n1-1,num2_index=n2-1;num1_index>=0 || num2_index>=0;num1_index--,num2_index--)
	{
		if(num1_index<0)
		{
			num1[num1_index]=0;
		}
		else if(num2_index<0)
		{
			num2[num2_index]=0;
		}
		sum[sum_index]=num1[num1_index]+num2[num2_index];
		{
			if(sum[sum_index]<=k)
			{
				sum[sum_index]=sum[sum_index]%10+carry;
				carry=sum[sum_index]/10;
			}
		}
		sum_index++;
	}
	for(index=sum_index-1;index>=0;index--)
	{
		printf("\n %d=%d",index,sum[index]);
	}
	return 0;
}
