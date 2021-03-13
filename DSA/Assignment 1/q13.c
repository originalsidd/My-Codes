#include <stdio.h>

void insert(int queue[], int *front, int *rear, int n){
	if (*rear==n-1)
		printf("Overflow Error\n");
	else{
		int x;
		scanf("%d",&x);

		if (*front==-1 && *rear==-1){
			*front=0;
			*rear=0;
		}
		else{
			*rear=*rear+1;
		}
		queue[*rear]=x;
	}
}

void del(int queue[], int *front,int *rear){
	if (*front==-1 && *rear==-1)
		printf("Underflow Error\n");
	else{
		int x;
		x=queue[*front];

		if (*front==*rear){
			*front=-1;
			*rear=-1;
		}
		else{
			*front=*front+1;
		}
		printf("The deleted value is %d\n",x);

	}
}

int isempty(int *front,int *rear){
	if (*front==-1 && *rear==-1)
		return 1;
	return 0;
}

void display(int queue[], int *front,int *rear){
	if (isempty(front,rear))
		printf("\nQueue is Empty\n");
	else{
		printf("\nFront>> ");
		for (int i=*front;i<=*rear;i++)
			printf("%d ",queue[i]);
		printf("<<Rear\n");
	}
}


int main(){
	int max_size;
	int front=-1,rear=-1;
	printf("Enter size of queue: ");
	scanf("%d",&max_size);
	int queue[max_size];
	while (1){
		int a;
		printf("\nEnter-\n1 to insert\n2 to delete\n3 to display\n4 to exit\n->");
		scanf("%d",&a);
		if (a==1)
			insert(queue,&front,&rear,max_size);
		else if (a==2)
			del(queue,&front,&rear);
		else if (a==3)
			display(queue,&front,&rear);
		else if (a==4)
			break;
		else
			printf("Invalid Input");
	}
	return 1;
}
