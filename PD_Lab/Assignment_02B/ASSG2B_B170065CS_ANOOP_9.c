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
int length();

int main()
{
struct node *temp;
int n, len, i=0,k,c=0;

	printf("Enter the value of n: \t");
	scanf("%d",&n);

printf("Enter the elements of the linked list: \t");

while(i<n)
	{
	append();
	i++;
 	}

printf("Enter the element to be searched: \t");
scanf("%d",&k);

len=length();

temp=root;
for(i=1; i<len+1; i++)
{
if(temp->data==k)
{printf("Element found at node: \t%d\n",i);
c++;
temp=temp->link;}
else temp=temp->link;
}

if(c==0) printf("Integer not found\n");



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
