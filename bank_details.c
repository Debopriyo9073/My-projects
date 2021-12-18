#include<stdio.h>
struct customer
{
	char name[50];
	int customerid;
	int balance;	
};
void main()
{
	struct customer c[10];
	int i=0,index=0,amt;
	int id;
	int option;
	
	while(1)
	{
		printf("\n 1.Create account: ");
		printf("\n 2.Deposit: ");
		printf("\n 3.Withdraw: ");
		printf("\n 4.Print: ");
		printf("\n 5.Exit: ");
		printf("\n Enter your choice: ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				printf("\nInformation of the customer:\n");
				printf("Enter the name of the new customer: ");
				scanf("%s",c[i].name);
				printf("Enter the customerid: ");
				scanf("%d",&c[i].customerid);
				printf("Enter the balance: ");
				scanf("%d",&c[i].balance);
				i++;
				
				break;
			case 2:
				printf("Enter the customer id who deposit money: ");
				scanf("%d",&id);
				
				for(index=0;index<i;index++)
				{
					if(c[index].customerid==id)
					{
						printf("Enter the deposit amount: ");
						scanf("%d",&amt);
						c[index].balance=c[index].balance+amt;
					}
				}
				break;
			case 3:
				printf("Enter the customer id who withdraw money: ");
				scanf("%d",&id);
				
				for(index=0;index<i;index++)
				{
					if(c[index].customerid==id)
					{
						printf("Enter the withdraw amount: ");
						scanf("%d",&amt);
						c[index].balance=c[index].balance-amt;
						if(c[index].balance<=0)
						{
							printf("The balance has not available in your account");
							c[index].balance=c[index].balance+amt;
						}
					}
				}
				break;
			case 4:
				for(index=0;index<i;index++)
				{
					printf("\n Name: ");
					puts(c[index].name);
					printf("Customerid:%d",c[index].customerid);
					printf("\nBalance:%d",c[index].balance);
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
