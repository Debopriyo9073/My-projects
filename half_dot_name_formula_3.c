#include<stdio.h>
int main()
{
	char full_name[100],half_name[100];
	int index=0,marge_index=0,count=0,last_index=0,k=0;
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
			last_index=last_index+1;
		}
	}
	k=last_index;
	last_index=0;
	for(index=0;full_name[index]!='\0';index++)
	{
		count=0;
		if(full_name[index]==' ' && k-1>last_index)
		{
			count=1;
			last_index=last_index+1;
		}
		if(count==1)
		{
			half_name[marge_index]=full_name[index+1];
			marge_index++;
			half_name[marge_index]='.';
			marge_index++;
		}
	}
	count=0;
	last_index=0;
	for(index=0;full_name[index]!='\0';index++)
	{
		if(full_name[index]==' ')
		{
			last_index=last_index+1;
			if(last_index==k)
			{
				count=1;
			}
		}
		if(count==1)
		{
			half_name[marge_index]=full_name[index+1];
			marge_index++;
		}
	}
	printf("The full name is: ");
	for(marge_index=0;half_name[marge_index]!='\0';marge_index++)
	{
		printf("%c",half_name[marge_index]);
	}
	return 0;
}
