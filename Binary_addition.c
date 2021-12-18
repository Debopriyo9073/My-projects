#include<stdio.h>
#include<math.h>
int main()
{
	int no1,no2,r,k=1,sum=0,carry=0;
	printf("Enter first number: ");
	scanf("%d",&no1);
	printf("Enter second number: ");
	scanf("%d",&no2);
	
	while(no1!=0 || no2!=0)
	{
		r=(no1%10 + no2%10)+carry;
		if(r==0)
		{
			r=0;
			carry=0;
		}
		else if(r==1)
		{
			r=1;
			carry=0;
		}
		else if(r==2)
		{
			r=0;
			carry=1;
		}
		else if(r==3)
		{
			r=1;
			carry=1;
		}
		sum=sum+(r*k);
		k=k*10;
		no1=no1/10;
		no2=no2/10;
	}
	if(carry==1)
	{
		sum=sum+(carry*k);
	}
//	printf("The sum of two number:%d",carry);
//	printf("\n 1.%d",k);
	printf("\n The binary addition is:%d",sum);
	return 0;
}
