#include<stdio.h>
struct customer
{
	char name[50];
	int balance;
	int customerid;
};
void main()
{
	struct customer c[10];
	int i=0,index=0,amt,match=0;
	char customer_name[50];
	int option;
	
	printf("Enter information of customer:\n");
	printf("Enter name: ");
	scanf("%s",c[i].name);
	printf("Enter bank balance: ");
	scanf("%d",&c[i].balance);
	printf("Enter customerid: ");
	scanf("%d",&c[i].customerid);
	i++;
	while(1)
	{
		printf("\n1.Create account");
		printf("\n2.Deposit cash");
		printf("\n3.Withdraw cash");
		printf("\n4.Balance cheque");
		printf("\n5.exit");
		printf("\nEnter your choice: ");
		scanf("%d",&option);
			
		switch(option)
		{
			case 1:
				printf("\nInformation of customer:\n");
				printf("Enter name of the new customer: ");
				scanf("%s",c[i].name);
				printf("Enter bank balance: ");
				scanf("%d",&c[i].balance);
				printf("Enter customer id: ");
				scanf("%d",&c[i].customerid);
				i++;
				break;
			case 2:
				printf("Enter the customer name who diposit money: ");
				scanf("%s",customer_name);
				for(index=0;index<i;index++)
				{
					if(strcmp(c[index].name,customer_name)==0)
					{
						printf("Enter the deposit amount: ");
						scanf("%d",&amt);
						c[index].balance=c[index].balance+amt;
					}
				}
				break;
			case 3:
				printf("Enter the customer name who withdraw money: ");
				scanf("%s",customer_name);
				
				for(index=0;index<i;index++)
				{
					if(strcmp(c[index].name,customer_name)==0)
					{
						printf("Enter the withdraw amount: ");
						scanf("%d",&amt);
						c[index].balance=c[index].balance-amt;
					}
				}
				
				break;
			case 4:
				printf("Displaying information of the customers:\n");
	
				for(index=0;index<i;index++)
				{
					printf("\nName: ");
					puts(c[index].name);
					printf("customerid:%d",c[index].customerid);
					printf("\nFinal balance:%d",c[index].balance);
					printf("\n");
				}
				break;	
		}
		if(option==5)
		{
			break;
		}
	}
	getch();
}
