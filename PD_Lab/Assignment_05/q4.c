#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* root=NULL;

void push(int num);
void pop();
void print();


void main(){
	int ch;
	while(1){
		printf("\n");
		printf("-----------------------------------------\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");

		printf("Enter choice: ");
		scanf("%d",&ch);

		int num,poped;

		switch(ch){
			case 1:
				printf("Enter element: ");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				print();
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

void push(int num){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		struct node* p=root;
		while(p->link!=NULL){
			p=p->link;
		}
		p->link=temp;
	}
}

void pop(){
	if(root==NULL){
		printf("EMPTY");
	}
	else{
		struct node* p=root;
		if(p->link==NULL){
			printf("%d ",p->data);
			root=NULL;
		}
		else{
			while(p->link->link!=NULL){
				p=p->link;
			}
		struct node* q=p->link;
		printf("%d",q->data);
		p->link=NULL;
		free(q);
		}
	}
}

void print(){
	if(root==NULL){
		printf("EMPTY");
	}
	else{
		struct node* temp=root;
		int n=1;
		while(temp->link!=NULL){
			temp=temp->link;
			n++;
		}
		for(int i=0;i<n;i++){
			temp=root;
			for(int j=n-1-i;j>0;j--){
				temp=temp->link;
			}
			printf("%d ",temp->data);
		}
	}
}
