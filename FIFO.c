#include<stdio.h>
int main()
{
	int option,push,index=0,ar[20],i,match=0;
	
	while(1)
	{
		printf("\n 1.Push:");
		printf("\n 2.Pop:");
		printf("\n 3.Print:");
		printf("\n 4.Exit:");
		printf("\n Enter your option: ");
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
			for(i=0;i<index;i++)
			{
				ar[i]=ar[i+1];
			}
			index--;
		break;
		case 3:
			for(i=0;i<index;i++)
			{
				printf("\n the print value of %d array is:%d",i,ar[i]);
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
