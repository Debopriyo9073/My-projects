#include<stdio.h>
int main()
{
	char full_name[100];
	int index=0,count=0;
	printf("Enter your full name: ");
	gets(full_name);
	
	for(index=0;full_name[index]!='\0';index++)
	{
		count=count+1;
	}
	printf("The charecter in the name are: %d",count);
	return 0;
}
