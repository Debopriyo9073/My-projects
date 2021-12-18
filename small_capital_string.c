#include<stdio.h>
int main()
{
	char ar[100];
	int index;
	printf("Enter the string charecter: ");
	gets(ar);
	
	for(index=0;ar[index]!='\0';index++)
	{
		if(ar[index]>='a' && ar[index]<='z')
		{
			ar[index]=ar[index]-32;
		}
	}
	
	printf("The capital number of the string ch is: %s",ar);
	return 0;
}
