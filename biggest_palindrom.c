#include<stdio.h>
int main()
{
	int index=0,n,ar[50],first_index=0,last_index,inner_index,k,i,j,flag=1,length=0,max=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		printf("Enter the value of the numbers: ");
		scanf("%d",&ar[index]);
	}
	
	for(first_index=0;first_index<n;first_index++)
	{
		for(inner_index=first_index;inner_index<n;inner_index++)
		{
			if(ar[first_index]==ar[inner_index] && first_index!=inner_index)
			{
				last_index=inner_index;
				k=last_index-first_index;
				i=first_index;
				j=last_index;
				for(index=i;index<=(i+k/2);index++)
				{
					if(ar[index]!=ar[j])
					{
						flag=0;
						break;
					}
					j--;
				}
				if(flag==1)
				{
					length=last_index-first_index;
					printf("\n the found index is:%d",length+1);
					printf("\n the palindrom number is: ");
					for(index=first_index;index<=last_index;index++)
					{
						printf("%d",ar[index]);
					}
					printf("\n");
				}
				flag=1;
			}
		}
	}
	return 0;
}
