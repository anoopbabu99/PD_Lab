#include <stdio.h>
#include <stdlib.h>
struct node
{ 
	int data;
	struct node *link;
};
struct node *root = NULL;	
void append();
void display();
void swap();
int length();

int main()
{
int n, len, i=0;

	printf("Enter the value of n: \t");
	scanf("%d",&n);

printf("Enter the elements of the linked list: \t");

while(i<n)
	{
	append();
	i++;
 	}

swap();

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


int length()
{
int count=0;
struct node *temp;
temp=root;
while(temp!=NULL)
{
	count++;
	temp=temp->link;
}
return count;
}


void swap()
{
int i,loc=0,temp;
struct node *p=root,*q=root;
if(length()%2!=0)
{
		while (loc<length()-1)
		{
			while(i<loc)
			{
				p=p->link;
				i++;
			}
		q=p->link;
		temp= q->data;
		q->data=p->data;
		p->data=temp;
		loc=loc+2;
		}

}
else 
{
		while (loc<length())
		{
			while(i<loc)
			{
				p=p->link;
				i++;
			}
		q=p->link;
		temp= q->data;
		q->data=p->data;
		p->data=temp;
		loc=loc+2;
		}

}
}

void display()
{
	struct node *temp;
	temp=root;
	if(temp==NULL)
	printf("empty list\n");
	else
	{
		printf("Elements of the Linked List after pairwise swapping:\t");
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


	
	
	
		








