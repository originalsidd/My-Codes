#include <stdio.h>

void insert(int *, int *, int *, int);
void del(int *, int *, int *,int);
void display(int *, int *, int *,int);

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
			del(queue,&front,&rear,max_size);
		else if (a==3)
			display(queue,&front,&rear,max_size);
		else if (a==4)
			break;
		else
			printf("Invalid Input");
	}
	return 1;
}

void insert(int queue[], int *front, int *rear, int n){
	if ((*front==0 && *rear==n-1) || (*front==*rear+1))
		printf("Overflow Error\n");
	else{
		int x;
		scanf("%d",&x);

		if (*front==-1 && *rear==-1){
			*front=0;
			*rear=0;
		}
		else if (*rear==n-1)
			*rear=0;
		else
			*rear=*rear+1;
		queue[*rear]=x;
	}
}

void del(int queue[], int *front, int *rear, int n){
	if (*front==-1 && *rear==-1)
		printf("Underflow Error\n");
	else{
		int x;
		x=queue[*front];

		if (*front==*rear){
			*front=-1;
			*rear=-1;
		}
		else if (*front==n-1)
			*front=0;
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

void display(int queue[], int *front,int *rear,int n){
	if (isempty(front,rear))
		printf("Queue is Empty");
	else{
		if (*rear>=*front){
			printf("\nFront>> ");
			for (int i=*front;i<=*rear;i++)
				printf("%d ",queue[i]);
			printf("<<Rear\n");
		}
		else{
			printf("\nFront>> ");
			for (int i=*front;i<=n-1;i++)
				printf("%d ",queue[i]);
			for (int i=0;i<=*rear;i++)
				printf("%d ",queue[i]);
			printf("<<Rear\n");

		}
	}
}
