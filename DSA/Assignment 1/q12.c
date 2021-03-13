#include <stdio.h>

void push(int stack[], int *top, int n){
	if (*top==n-1)
		printf("Overflow Error\n");
	else{
		int x;
		scanf("%d",&x);
		*top=*top+1;
		stack[*top]=x;
	}
}

void pop(int stack[], int *top){
	if (*top==-1)
		printf("Underflow Error\n");
	else{
		int x;
		x=stack[*top];
		printf("The popped value is %d\n",x);
		*top=*top-1;
	}
}
int isempty(int *top){
	if (*top==-1)
		return 1;
	return 0;
}
void display(int stack[], int *top){
	printf("\n");
	if (isempty(top))
		printf("Stack is Empty\n");
	else{
		for (int i=0;i<=*top;i++)
			printf("%d ",stack[i]);
		printf("<<TOP\n");
	}
}

int main(){
	int max_size;
	int top=-1;
	printf("Enter size of stack: ");
	scanf("%d",&max_size);
	int stack[max_size];
	while (1){
		int a;
		printf("\nEnter-\n1 to push\n2 to pop\n3 to display\n4 to exit\n->");
		scanf("%d",&a);
		if (a==1)
			push(stack,&top,max_size);
		else if (a==2)
			pop(stack,&top);
		else if (a==3)
			display(stack,&top);
		else if (a==4)
			break;
		else
			printf("Invalid Input");
	}
	return 1;
}
