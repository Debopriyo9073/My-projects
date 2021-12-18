#include<stdio.h>
int main()
{
	int a=4,b=3,c;
	c=a^b;
	b=c^a;
	a=b^c;
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);
	
	return 0;
}
