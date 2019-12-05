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
int main()
{
int n,i=0,c=0;
struct node *temp,*p,*q;
	printf("Enter the value of n: \t");
	scanf("%d",&n);
printf("Enter the elements:\t");
while(i<n)
	{
	append();
	i++;
 	}

i=0;
p=root;
temp=root;

while(i<n&&p->link!=NULL)
{
temp=p;
temp=temp->link;
	while(temp!=NULL)
	{
		if(p->data==temp->data)
		{
			temp->data=-99;
			temp=temp->link;		
		}
		else temp=temp->link;
	}
	
p=p->link;
i++;	
}


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
		while(temp->link!=NULL)
		{
			if(temp->data==-99)
			{
					p=root;
					while(p->link!=temp){p=p->link;}
					
					p->link=temp->link;
					temp->link=NULL;
					free(temp);	
					temp=p->link;	
			}
			else
			{
					if(temp->link==NULL)
					printf("%d", temp->data);
					else printf("%d  ", temp->data);
					temp=temp->link;
			}
		}
		printf("\n");
	}
}













		

