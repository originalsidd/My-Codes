#include <stdio.h>

unsigned long fact2()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	unsigned long f=1;
	for(i=n;i>=1;i--)
		f*=i;
	return f;
}

int main()
{
	unsigned long f;
	f=fact2();
	printf("The factorial is %u",f);
	return 1;
}
