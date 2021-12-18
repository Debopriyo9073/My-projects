#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("\n Enter your name: ");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
