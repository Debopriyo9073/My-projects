#include<stdio.h>
int main()
{
	char str[100];
	int i,j,co1=0,co2=0,co3=0,co4=0,co5=0,co6=0,match=0,c1,c2,c3,c4,c5,c6;
	printf("enter the charecter: ");
	gets(str);
	
	c1='(';
	c2=')';
	c3='{';
	c4='}';
	c5='[';
	c6=']';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
			co1=co1+1;
		}
		else if(str[i]==')')
		{
			co2=co2+1;
		}
		else if(str[i]=='{')
		{
			co3=co3+1;
		}
		else if(str[i]=='}')
		{
			co4=co4+1;
		}
		else if(str[i]=='[')
		{
			co5=co5+1;
		}
		else
		{
			co6=co6+1;
		}
	}
	if(co1==co2 && co3==co4 && co5==co6)
	{
		match=1;
	}
	else
	{
		match=0;
	}
	
	if(match==1)
	{
		for(i=0;str[i]!='\0';i++)
		{
			for(j=i+1;str[j]!='\0';j++)
			{
				if(str[i]==c1)
				{
					if(str[i+1]==c3 || str[i+1]==c4 || str[i+1]==c5 || str[i+1]==c6)
					{
						match=0;
						break;
					}
					else if(str[j]==c2)
					{
						if(str[j-1]==c3 || str[j-1]==c4 || str[j-1]==c5 || str[j-1]==c6)
						{
							match=0;
							break;
						}
						else
						{
							match=1;
						}
					}
				}
				else if(str[i]==c3)
				{
					if(str[i-1]==c1)
					{
						match=0;
						break;
					}
					else if(str[i+1]==c5 || str[i+1]==c2 || str[i+1]==c6)
					{
						match=0;
						break;
					}
					else if(str[j]==c4)
					{
						if(str[j+1]==c2)
						{
							match=0;
							break;
						}
						else if(str[j-1]==c5 || str[j-1]==c1 || str[j-1]==c6)
						{
							match=0;
							break;
						}
						else
						{
							match=1;
						}
					}
					else
					{
						match=1;	
					}	
				}
				else if(str[i]==c5)
				{
					if(str[i-1]==c1 || str[i-1]==c3)
					{
						match=0;
						break;
					}
					else if(str[i+1]==c2 || str[i+1]==c4)
					{
						match=0;
						break;
					}
					else if(str[j]==c6)
					{
						if(str[j+1]==c4 || str[j+1]==c2)
						{
							match=0;
							break;
						}
						else if(str[j-1]==c1 || str[j-1]==c3)
						{
							match=0;
							break;
						}
						else
						{
							match=1;
						}
					}
					else
					{
						match=1;
					}
				}
			}
			if(match==0)
			{
				break;
			}
		}
	}

	if(match==1)
	{
		printf("The string is identical");
	}
	else
	{
		printf("The string is not identical");
	}
	return 0;
}
