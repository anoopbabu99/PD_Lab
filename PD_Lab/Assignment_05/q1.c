#include<stdio.h>
#include<stdlib.h>

void push(int list[],int num);
int pop(int list[]);
void print(int list[]);
int n=0;
int size;

void main(){
	int ch;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int list[size];
	while(1){
		printf("\n");
		printf("-----------------------------------------\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Print\n");
		printf("4. Exit\n");

		printf("Enter choice: ");
		scanf("%d",&ch);

		int num,poped;

		switch(ch){
			case 1:
				printf("Enter element: ");
				scanf("%d",&num);
				push(list,num);
				break;
			case 2:
				poped=pop(list);
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

void push(int list[],int num){
	if(n==size){
		printf("OVERFLOW");
	}
	else{
		list[n]=num;
		n++;
	}
}

int pop(int list[]){
	if(n==0){
		printf("EMPTY");
		return 1324998;
	}
	else{
		n--;
		return list[n];
	}
}

void print(int list[]){
	if(n==0){
		printf("EMPTY");
	}
	else{
		for(int i=n-1;i>=0;i--){
			printf("%d ",list[i]);
		}
	}
}
