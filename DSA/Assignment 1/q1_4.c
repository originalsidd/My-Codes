#include <stdio.h>

void fact4()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	unsigned long f=1;
	for(i=n;i>=1;i--)
		f*=i;
	printf("The factorial is %u",f);
}

int main()
{
	fact4();
	return 1;
}
