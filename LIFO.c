                             //LIFO//
#include<stdio.h>
int main()
{
	int option,ar[20],push,i,index=0;
	
	while(1)
	{
		printf("\n 1.Push:");
		printf("\n 2.Pop:");
		printf("\n 3.Print:");
		printf("\n 4.Exit:");
		printf("\n Enter your choice: ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1:
				printf("Enter the push value: ");
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
					printf("\n print the %d array value:%d",i,ar[i]);
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
