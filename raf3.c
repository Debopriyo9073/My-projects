#include<stdio.h>
int main()
{
	int ar[15],index=0,push,pop,option,i;
	
	while(1)
	{
		printf("\n Push: ");
		printf("\n Pop: ");
		printf("\n Print: ");
		printf("\n Exit");
		printf("Enter your choice: ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				printf("Enter the value: ");
				scanf("%d",&push);
				ar[index]=push;
				index++;
				break;
			case 2:
				ar[index--];
				break;
			case 3:
				for(i=0;i<index;i++)
				{
					printf("\n The LIFO value is:%d",ar[i]);
				}
				break;
		}
		if(option==4)
		{
			break;
		}
	}
	return 0;
}
