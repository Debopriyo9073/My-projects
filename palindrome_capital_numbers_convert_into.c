#include<stdio.h>
int main()
{
	char ar[100];
	int index,count=0,match=0,m_index=0,l_index=0;
	printf("Enter the string charecter: ");
	gets(ar);
	
	for(index=0;ar[index]!='\0';index++)
	{
		count=count+1;
	}
	l_index=count;
	m_index=count/2;
	
	for(index=0;ar[index]!='\0';index++)
	{
		if(ar[index]>='A' && ar[index]<='Z')
		{
			ar[index]=ar[index]+32;
		}
	}
	for(index=0;ar[index]!='\0';index++)
	{
		if(index<m_index)
		{
			if(ar[index]==ar[l_index-1])
			{
				match=1;
			}
			else
			{
				match=0;
				break;
			}
		}
		l_index--;
	}
	if(match==1)
	{
		printf("The string is palindrome");
	}
	else
	{
		printf("The string is not palindrome");
	}
	return 0;
}
