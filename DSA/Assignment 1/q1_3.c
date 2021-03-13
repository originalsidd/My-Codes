#include <stdio.h>

void fact3(int n)
{
	unsigned long f=1;
	int i;
	for(i=n;i>=1;i--)
		f*=i;
	printf("The factorial is %lu",f);
}

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	fact3(n);
	return 1;
}
