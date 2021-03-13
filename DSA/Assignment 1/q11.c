#include <stdio.h>

int fibo(int n)
{
    if (n==1)
        return 0;
    else if (n==2)
    	return 1;
    else
    	return fibo(n-1) + fibo(n-2);
}

int main(void) {
    int i,n,res;
    scanf("%d",&n);
    for (i=1;i<n+1;i++){
		res=fibo(i);
		printf("%d ",res);	
	}
	return 1;
}

