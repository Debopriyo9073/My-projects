#include<stdio.h>
int main()
{
	int n,i,index,first_index,inner_index,last_index,j,k,match=0,ar[20];
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	
	for(first_index=0;first_index<n;first_index++)
	{
		printf("Enter the value of the number: ");
		scanf("%d",&ar[first_index]);
	}
	
	for(first_index=0;first_index<n;first_index++)
	{
		for(inner_index=first_index+1;inner_index<n;inner_index++)
		{
			if(ar[first_index]==ar[inner_index])
			{
				last_index=inner_index;
				k=last_index-first_index;
				i=first_index;
				
				for(index=0;index<=k+1/2;index++)
				{
					if(ar[i]==ar[last_index])
					{
						match=1;
					}
					else
					{
						match=0;
						break;
					}
					i++;
					last_index--;
				}
				if(match==1)
				{
					printf("\nThe size of palindrome number is:%d",k+1);
					printf("\nThe palindrome number is:\n");
					for(j=first_index;j<inner_index+1;j++)
					{
						printf("%d",ar[j]);
					}	
				}
			}
		}
	}
	return 0;
}	
