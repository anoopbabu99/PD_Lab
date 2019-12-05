#include<stdio.h>
#include<stdlib.h>

void enqueue(int list[],int num);
void dequeue(int list[]);
void print(int list[]);

int n=0,front=-1,rear=-1;

void main(){
	int ch;
	printf("Enter the size of circular array: ");
	scanf("%d",&n);
	int list[n];
	while(1){
		printf("\n");
		printf("-----------------------------------------\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Print\n");
		printf("4. Exit\n");

		printf("Enter choice: ");
		scanf("%d",&ch);

		int num,poped;

		switch(ch){
			case 1:
				printf("Enter element: ");
				scanf("%d",&num);
				enqueue(list,num);
				break;
			case 2:
				dequeue(list);
				break;
			case 3:
				print(list);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid choice");
				break;
		}
	}
}

void enqueue(int list[],int num){
	if((front == 0 && rear == n-1) || (front == rear+1)){
		printf("OVERFLOW\n");
		return;
	}
	if (front == -1){
		front = 0;
		rear = 0;
	}
	else{
		if(rear == n-1)	
			rear = 0;
		else
			rear = rear+1;
	}
	list[rear] = num ;
}

void dequeue(int list[]){
	if (front == -1){
		printf("EMPTY\n");
		return;
	}
	printf("%d\n",list[front]);
	if(front == rear){
		front = -1;
		rear=-1;
	}
	else{	
		if(front == n-1)
			front = 0;
		else
			front = front+1;
	}
}

void print(int list[]){
	int front_pos = front,rear_pos = rear;
	if(front == -1){
		printf("EMPTY\n");
		return;
	}
	if( front_pos <= rear_pos )
		while(front_pos <= rear_pos)
		{
			printf("%d ",list[front_pos]);
			front_pos++;
		}
	else{
		while(front_pos <= n-1)
		{
			printf("%d ",list[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{
			printf("%d ",list[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
