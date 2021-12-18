#include<stdio.h>
int main()
{
	char ar[100],dp[100],sum[100];
	int index,index1,index2,length1=0,length2=0,carry=0,marge_index=0;
	
	printf("Enter the first number: ");
	gets(ar);
	
	printf("Enter the second number: ");
	gets(dp);

	for(index1=0;ar[index1]!='\0';index1++)
	{
		ar[index1]=ar[index1]-48;
		//printf("ar:%d",ar[index1]);
	}
	for(index2=0;ar[index2]!='\0';index2++)
	{
		dp[index2]=dp[index2]-48;
		//printf("dp:%d",dp[index2]);
	}
	
	length1=strlen(ar);
	length2=strlen(dp);
	index1=index2=0;
	for(index1=length1,index2=length2;index1>=0 || index2>=0;index1--,index2--)
	{
		sum[marge_index]=ar[index1]+dp[index2]+carry;
		if(sum[marge_index]>9 && sum[marge_index]==10)
		{
			carry=1;
			sum[marge_index]=sum[marge_index]-10;
		}
		else
		{
			carry=0;
		}
		marge_index++;
	}
	if(carry==1)
	{
		sum[marge_index]=carry;
		marge_index++;
	}
	for(index=marge_index-1;index>0;index--)
	{
		printf("%d",sum[index]);
	}
	return 0;
}
