#include <stdio.h>

int min(int a[],int *n){
    int i,m1=a[0];
    for (i=0;i<*n;i++){
        if (m1>a[i])
            m1=a[i];
    }
    return m1;
}

int max(int a[],int *n){
    int i,m2=a[0];
    for (i=0;i<*n;i++){
        if (m2<a[i])
            m2=a[i];
    }
    return m2;
}

int main() {
    int i,n,mn,mx;
    scanf("%d",&n);
    int a[n];
	for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	mn=min(a,&n);
	mx=max(a,&n);
	printf("Max: %d",mx);
	printf("\nMin: %d",mn);
	return 0;
}

