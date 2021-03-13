/*Q1.Write a Cprogram to compute the factorial of a given number under following conditions:
i) With return type With parameter
ii) With return type Without parameter
iii) Without return type with parameter
iv) Without return type without parameter */
#include <stdio.h>
unsigned long fact1(int n)
{
	unsigned long f=1;
	int i;
	for(i=n;i>=1;i--)
		f*=i;
	return f;	
}

unsigned long fact2()
{
	int n,i;
	printf("Enter n :");
	scanf("%d",&n);
	unsigned long f=1;
	for(i=n;i>=1;i--)
		f*=i;
	return f;	
}
void fact3(int n)
{
	unsigned long f=1;
	int i;
	for(i=n;i>=1;i--)
		f*=i;
	printf("The factorial is %u",f);
}
void fact4()
{
	int n,i;
	printf("Enter n :");
	scanf("%d",&n);
	unsigned long f=1;
	for(i=n;i>=1;i--)
		f*=i;
	printf("The factorial is %u",f);
}

void fact5(int n,unsigned long* f)
{
	*f=1;
	int i;
	for(i=n;i>=1;i--)
		(*f)*=i;
	
}
int main()
{
	int n;
	unsigned long f;
	printf("Enter n :");
	scanf("%d",&n);
	fact5(n,&f);
	printf("The factorial is %u",f);
	return 1;
}
