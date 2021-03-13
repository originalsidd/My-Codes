#include <stdio.h>
static int k=0;
void sum(int n){
    
    k+=n;
    
}

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
	    sum(a[i]);
	}
	printf("%d",k);
	return 0;
}

