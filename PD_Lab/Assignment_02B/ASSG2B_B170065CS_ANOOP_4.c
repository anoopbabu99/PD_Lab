#include <stdio.h>
#include <stdlib.h>
struct node
{ 
	int data;
	int freq;
	struct node *link;
};
struct node *root = NULL,*temp,*p;	
void append();
void append2();
int length();

int main()
{
int n,c=1,i=0,j=0,k,m,len;
	printf("Enter the value of n: \t");
	scanf("%d",&n);
printf("Enter the elements: \t");
while(i<=n)
{
if(i==n) {append2();}
else append();
i++;
}

temp=root;

while(temp->link!=NULL)
{
if (temp->freq==0)	{temp=temp->link; continue;}
p=temp->link;
c=1;
	while(p->link!=NULL)
	{	
	if(temp->data==p->data)
	{
		c++;
		p->freq=0;
		p=p->link;
	}
	else p=p->link;
	}
temp->freq=c;
temp=temp->link;
}


temp=root;

while(temp->link!=NULL)
{
if (temp->freq==0) {temp=temp->link; continue;}
printf("Number of occurences of %d\t%d\n", temp->data, temp->freq);
temp=temp->link;
}


}
	





void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d", &temp->data);
	temp->freq=-99;
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

void append2()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=77;
	temp->freq=-99;
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




