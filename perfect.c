#include<stdio.h>
 int main()
 {
 	int i,num,sum=0;
 	printf("enter a number: ");
 	scanf("%d",&num);
 	for(i=1;i<num;i++)
 	{
 		if(num%i==0)
 		sum=sum+i;
	}
	if(sum==num)
		printf("it is a perfect number");
	else
		printf("it is not a perfect number");
	return 0;
 }
