#include<stdio.h>
int main()
{
	char str[100],vowel[10]="aeiouAEIOU";
	int i,j,count=0;
	printf("Enter the string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;vowel[j]!='\0';j++)
		{
			if(str[i]==vowel[j])
			{
				count=count+1;
				break;
			}
		}
	}
	printf("Total number of chrecter in the string is:%d",count);
	return 0;
}
