#include <stdio.h>

void display(int a[]) {
	int i;
    printf("Array: ");
	for (i=0;i<5;i++)
	    printf("%d ",a[i]);	
}

int main(void) {
    int i,a[5];
    printf("Enter Array: ");
	for (i=0;i<5;i++)
	    scanf("%d",&a[i]);
	display(a);
	return 1;
}

