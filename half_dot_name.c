#include<stdio.h>
int main()
{
	char first_name[100],last_name[100],full_name[100];
	int index,marge_index=0;
	printf("Enter your name: ");
	gets(first_name);
	
	printf("Enter your title: ");
	gets(last_name);
	
	for(index=0;index<1;index++)
	{
		full_name[marge_index]=first_name[index];
		marge_index++;
	}
	full_name[marge_index]=' ';
	marge_index++;
	full_name[marge_index]='.';
	marge_index++;
	full_name[marge_index]=' ';
	marge_index++;
	for(index=0;last_name[index]!='\0';index++)
	{
		full_name[marge_index]=last_name[index];
		marge_index++;
	}
	printf("The full name is: ");
	full_name[marge_index]='\0';
	for(marge_index=0;full_name[marge_index]!='\0';marge_index++)
	{
		printf("%c",full_name[marge_index]);
	}
	return 0;
}
