#include <stdio.h>
unsigned long fact1(int n)
{
	unsigned long f=1;
	int i;
	for(i=n;i>=1;i--)
		f*=i;
	return f;
}

int main()
{
	int n;
	unsigned long f;
	printf("Enter n: ");
	scanf("%d",&n);
	f=fact1(n);
	printf("The factorial of %d is %lu",n,f);
	return 1;

}
