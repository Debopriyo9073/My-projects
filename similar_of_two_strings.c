#include<stdio.h>
int main()
{
	char first_str[100],second_str[100];
	int index,count1=0,count2=0,match=0;
	printf("enter the first string: ");
	gets(first_str);
	
	printf("enter the second string: ");
	gets(second_str);
	
	for(index=0;first_str[index]!='\0';index++)
	{
		count1=count1+1;
	}
	for(index=0;second_str[index]!='\0';index++)
	{
		count2=count2+1;
	}
	
	if(count1==count2)
	{
		for(index=0;index<count1;index++)
		{
			if(first_str[index]==second_str[index])
			{
				match=1;
			}
			else
			{
				match=0;
				break;
			}
		}
	}
	if(match==1)
	{
		printf("Two strings are similar");
	}
	else
	{
		printf("Two strings are not similar");
	}
	return 0;
}
