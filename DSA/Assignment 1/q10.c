#include <stdio.h>

int main(){
	int i,n,sum=0;
	int *arr;
	printf("Enter n: ");
	scanf("%d",&n);
	
	arr=(int *)malloc(n*sizeof(int));
	
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
		sum += *(arr+i);
	}
	
	printf("Sum of the %d numbers: %d",n,sum);
	
	arr=realloc(arr,(n+2)*sizeof(int));
	
	printf("\n\nEnter 2 more numbers: ");
	for(i=0;i<2;i++){
		scanf("%d",arr+n+i);
		sum += *(arr+n+i);
	}
	printf("Sum of the %d numbers: %d",n+2,sum);
	
	return 1;
}
