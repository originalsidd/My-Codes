#include <stdio.h>


int sum(int a[],int *n){
	int i,sum=0;
	for (i=0;i<*n;i++)
	    sum+=a[i];
	
	return sum;   	
}

int main() {
    int i,n,res;
    scanf("%d",&n);
    int a[n];
	for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	res=sum(a,&n);
	printf("Sum: %d",res);
	  
	return 1;
}

