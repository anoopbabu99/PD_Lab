#include <stdio.h>
#include <stdlib.h>
struct node
{ 
	int data;
	struct node *link;
};
struct node *root = NULL;

void reverse(struct node *A, int len);	
void append();
void display();

int main()
{
	int n,i=0,j=0,k,m;
	struct node *A;
	printf("Enter the value of n: \t");
	scanf("%d",&n);
	printf("Enter the elements: \t");
		while(i<n)
		{
			append();
			i++;
		}
A=root;
reverse(A,n);
display();
}


void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d", &temp->data);
	temp->link=NULL;
	if(root==NULL)
		{
		root=temp;
		}
	else
		{
		struct node *p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
		}
}

void reverse(struct node *A, int len)	
{
	int i,j,k,temp;
	struct node *p,*q;
	i=0; 
	j=len-1;
	p=A;
	q=A;
		while(i<j)
		{
			k=0;
				while(k<j)
				{
					q=q->link;
					k++;
				}
			temp=p->data;
			p->data=q->data;
			q->data=temp;
		i++;
		j--;
		p=p->link;
		q=A;
		}
}
			


void display()
{
	struct node *temp,*p;
	
	temp=root;
	p=root;
	
	if(temp==NULL)
	printf("empty list\n");
	else
	{
		printf("The elements of the list:\t");
		while(temp!=NULL)
		{	
		if(temp->link==NULL)
		printf("%d", temp->data);
		else printf("%d,", temp->data);
		temp=temp->link;
		}
		printf("\n");
	}
}





