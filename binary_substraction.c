#include<stdio.h>
#include<math.h>
int main()
{
	int no1,no2,n1=0,n2=0,bin1=0,bin2=0,sub=0,borrow=0,r,k=1,dec1=0,dec2=0,m=0,n=0,i,j;
	printf("Enter 1st number: ");
	scanf("%d",&no1);
	printf("Enter 2nd number: ");
	scanf("%d",&no2);
	i=no1;
	j=no2;
	while(i>0)
	{
		r=i%10;
		i=i/10;
		dec1=dec1+(r*pow(2,m));
		m++;
	}
	while(j>0)
	{
		r=j%10;
		j=j/10;
		dec2=dec2+(r*pow(2,n));
		n++;
	}
	if(dec1>dec2)
	{
		bin1=no1;
		bin2=no2;
	}
	else
	{
		bin1=no2;
		bin2=no1;
	}
		while(bin1!=0 || bin2!=0)
	{
		n1=bin1%10;
		n2=bin2%10;
		if(borrow==1)
		{
			if(n2==0)
			{
				n2=n2+borrow;
				borrow=0;
			}
			else
			{
				n2=0;
				borrow=1;
			}
		}
		if(borrow==1)
		{
			if(n1==0 && n2==0)
			{
				r=0;
				borrow=1;
			}
			else if(n1==1 && n2==0)
			{
				r=1;
				borrow=1;
			}
			else if(n1==0 && n2==1)
			{
				r=1;
				borrow=1;
			}
			else if(n1==1 && n2==1)
			{
				r=0;
				borrow=1;
			}
		}
		else
		{
			if(n1==0 && n2==0)
			{
				r=0;
				borrow=0;
			}
			else if(n1==1 && n2==0)
			{
				r=1;
				borrow=0;
			}
			else if(n1==0 && n2==1)
			{
				r=1;
				borrow=1;
			}
			else if(n1==1 && n2==1)
			{
				r=0;
				borrow=0;
			}
		}
		sub=sub+(r*k);//1//11
		k=k*10;
		bin1=bin1/10;
		bin2=bin2/10;
	}
	printf("the subtraction of the binary number is:%d",sub);
	printf("\n 1.%d, 2.%d",dec1,dec2);
	printf("\n 1.%d, 2.%d",bin1,bin2);
	return 0;
}
