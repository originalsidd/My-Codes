#include <stdio.h>

void fibo(int *f1,int *f2){
    int f3;
    f3=*f1+*f2;
    *f1=*f2;
    *f2=f3;
    printf("%d ",f3);
    
}
int main(void) {
    int i,n,f1=0,f2=1;
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
	for (i=3;i<=n;i++){
	    fibo(&f1,&f2);
	}
	return 1;
}

