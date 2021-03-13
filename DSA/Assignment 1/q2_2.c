#include <stdio.h>

void sum(int n,int *k){
    (*k)=(*k)+n;
}

int main(void) {
	int n,i,k=0;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
	    sum(a[i],&k);
	}
	printf("%d",k);
	return 1;
}
