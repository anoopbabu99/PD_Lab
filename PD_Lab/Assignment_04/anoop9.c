#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* root=NULL;

void append(int num){
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

void display(){
	struct node* temp;
	temp=root;
	if(temp==NULL){
		printf("Empty list\n");
	}
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
}

void selectionSort(){
	struct node* temp,*p,*q;
	temp=root;
	int i=0,k,t;
	while(temp->link!=NULL){
		p=temp;
		q=temp->link;
			while(q!=NULL)
			{
				if(p->data>q->data)
				{
				p=q;
				}
			q=q->link;
			}
			if(p!=temp)
			{
				t=temp->data;
				temp->data=p->data;
				p->data=t;
			}
		k=i;
		printf("Iteration %d:\t",i+1);
		display();
		printf("\n");
		i=k;
		i++;
		temp=temp->link;
	}
}


void main(){

FILE *fs,*ft;
fs=fopen("9_1.txt","r");
ft=fopen("9_2.txt","w");
int n=0;
int list[1000];
int num;
while(fscanf(fs,"%d",&num)==1){
	append(num);
	n++;
}
selectionSort(list,n);

printf("Sorted list is: ");
display();

fclose(fs);
fclose(ft);

}
