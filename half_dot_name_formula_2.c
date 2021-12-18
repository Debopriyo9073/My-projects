#include<stdio.h>
int main()
{
	char full_name[100],half_name[100];
	int index=0,marge_index=0,new_index=0;
	printf("Enter your full name: ");
	gets(full_name);
	
	half_name[marge_index]=full_name[index];
	marge_index++;
	half_name[marge_index]='.';
	marge_index++;
	for(index=0;full_name[index]!='\0';index++)
	{
		if(full_name[index]==' ')
		{
			new_index=index;
		}
	}
	
	for(index=new_index+1;full_name[index]!='\0';index++)
	{
		half_name[marge_index]=full_name[index];
		marge_index++;
	}
	printf("The full name is: ");
	for(marge_index=0;half_name[marge_index]!='\0';marge_index++)
	{
		printf("%c",half_name[marge_index]);
	}
	return 0;
}
