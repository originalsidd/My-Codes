#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *link;
};

void push(struct node *s, int n){
	int x;
	struct node *temp;
	scanf("%d",&x);
	s->element=n;
	s->link=->link;
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

void display(int stack[], int *top){
	for (int i=0;i<=*top;i++)
		printf("%d ",stack[i]);
	printf("<<TOP");
	printf("\n");
}

int main(){
	int max_size;
	struct node *ptr=(node*) malloc(sizeof(struct node));
	ptr->link=NULL;
	printf("Enter size of stack: ");
	scanf("%d",&max_size);

	while (1){
		int a;
		printf("\nEnter-\n1 to push\n2 to pop\n3 to display\n4 to exit\n->");
		scanf("%d",&a);
		if (a==1)
			push(ptr,max_size);
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
