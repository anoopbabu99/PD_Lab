#include<stdio.h>
#include<stdlib.h>

void enqueue(int list[],int num);
int dequeue(int list[]);
void print(int list[]);

int size;
int n=0;

void main(){
	int ch;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int list[size];
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
				poped=dequeue(list);
				if(poped!=1324998){
					printf("%d\n",poped);}
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
	if(n==size){
		printf("OVERFLOW");
	}
	else{
		list[n]=num;
		n++;
	}
}

int dequeue(int list[]){
	if(n==0){
		printf("EMPTY");
		return 1324998;
	}
	else{
		int pnum=list[0];
		for(int i=0;i<n-1;i++){
			list[i]=list[i+1];
		}
		n--;
		return pnum;
	}
}

void print(int list[]){
	if(n==0){
		printf("EMPTY");
	}
	else{
		for(int i=0;i<n;i++){
			printf("%d ",list[i]);
		}
	}
}
