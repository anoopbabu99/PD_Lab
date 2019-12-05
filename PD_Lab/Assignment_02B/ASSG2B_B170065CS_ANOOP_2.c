#include <stdio.h>
#include <stdlib.h>
struct node
{ 
	int data;
	struct node *link;
};
struct node *root = NULL;	
void append();
int length();

int main()
{
int n,i=0,j=0,k,m,len;
	printf("Enter the value of n: \t");
	scanf("%d",&n);
printf("Enter the elements: \t");
while(i<n)
{
append();
i++;
}
	
	printf("Enter the value of k: \t");
	scanf("%d",&k);
len=length();
if(k>len)
	{printf("invalid location\n"); return 0;}
m=len-k;

struct node *temp;
temp=root;
if(temp==NULL)
	{printf("empty list\n"); return 0;}
else
	{
	while(j<m)
	{
		temp=temp->link;
		j++;
	}
	}
	if(k>3) printf("The %dth element from the end of the linked list is %d\n",k,temp->data);
	if(k==3) printf("The %drd element from the end of the linked list is %d\n",k,temp->data);
	if(k==2) printf("The %dnd element from the end of the linked list is %d\n",k,temp->data);
	if(k==1) printf("The %dst element from the end of the linked list is %d\n",k,temp->data);
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

