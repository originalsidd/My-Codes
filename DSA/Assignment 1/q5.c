#include <stdio.h>

void forward(int a[],int *n){
	int i;
	printf("Forward Array: ");
	for (i=0;i<*n;i++)
		printf("%d ",a[i]);
}

void reverse(int a[],int *n){
	int i;
	printf("Reverse Array: ");
	for (i=*n-1;i>=0;i--)
	    printf("%d ",a[i]);
}
int main() {
    int i,n;
    printf("Enter Array length: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array: ");
	for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	forward(a,&n); 
	printf("\n");
	reverse(a,&n);
	
	return 1;
}

