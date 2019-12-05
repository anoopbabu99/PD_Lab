#include <stdio.h>
#include <stdlib.h>
struct node
{ 
	int data;
	struct node *link;
};
struct node *root1 = NULL;
struct node *root2 = NULL;
struct node *root3 = NULL;

void append1();
void append2();
void append3();
void display1();
void display2();
void display3();

int main()
{
	int n,i=0,j=0,k,m;
	struct node *temp1, *temp2, *temp3;
	printf("Enter the value of n: \t");
	scanf("%d",&n);
	printf("Enter the value of m: \t");
	scanf("%d",&m);
if(n==0&&m==0)
{printf("\nmerged list is empty\n"); return 0;}

	printf("Enter the elements or the linked list A: \t");


		while(i<n)
		{
			append1();
			i++;
		}i=0;


if(n!=0&&m==0)
{temp1=root1; 
while(temp1->link!=NULL)
	{
		if((temp1->data)>(temp1->link->data))
		{
			printf("input is unsorted\n"); return 0;		
		}
else temp1=temp1->link;
	}
display1(); return 0;}

	printf("Enter the elements or the linked list B: \t");

		while(i<m)
		{
			append2();
			i++;
		}i=0;



if(n==0&&m!=0)
{temp2=root2;
while(temp2->link!=NULL)
	{
		if((temp2->data)>(temp2->link->data))
		{
			printf("input is unsorted\n"); return 0;		
		}
else temp2=temp2->link;
	}
display2(); return 0;}



		while(i<m+n)
		{
			append3();
			i++;
		}i=0;


temp1=root1; 
temp2=root2; 
while(temp1->link!=NULL)
	{
		if((temp1->data)>(temp1->link->data))
		{
			printf("input is unsorted\n"); return 0;		
		}
else temp1=temp1->link;
	}
while(temp2->link!=NULL)
	{
		if((temp2->data)>(temp2->link->data))
		{
			printf("input is unsorted\n"); return 0;		
		}
else temp2=temp2->link;
	}




printf("\nThe merged list is: \t");

temp1=root1; 
temp2=root2; 
temp3=root3;
	
	while(temp3!=NULL)
	{
		if(temp1->data>temp2->data)
		{
			temp3->data=temp2->data;
			temp2=temp2->link;
			temp3=temp3->link;
			if(temp2==NULL)
			{
				while(temp3!=NULL)
				{
				temp3->data=temp1->data;
				temp1=temp1->link;
				temp3=temp3->link;
				} 
			}
		}
		else if(temp1->data<temp2->data)
		{
			temp3->data=temp1->data;
			temp1=temp1->link;
			temp3=temp3->link;
			if(temp1==NULL)
			{
				while(temp3!=NULL)
				{
				temp3->data=temp2->data;
				temp2=temp2->link;
				temp3=temp3->link;
				} 
			}
		}
		else if(temp1->data==temp2->data)
		{
			temp3->data=temp1->data;
			temp3=temp3->link;
			temp1=temp1->link;
			temp3->data=temp2->data;
			temp3=temp3->link;
			temp2=temp2->link;
			if(temp1==NULL)
			{
				while(temp3!=NULL)
				{
				temp3->data=temp2->data;
				temp2=temp2->link;
				temp3=temp3->link;
				} 
			}
			if(temp2==NULL)
			{
				while(temp3!=NULL)
				{
				temp3->data=temp1->data;
				temp1=temp1->link;
				temp3=temp3->link;
				} 
			}
		}
	}

display3();
}


void append1()
{
	struct node *temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	scanf("%d", &temp1->data);
	temp1->link=NULL;
	if(root1==NULL)
		{
		root1=temp1;
		}
	else
		{
		struct node *p;
		p=root1;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp1;
		}
}

void append2()
{
	struct node *temp2;
	temp2=(struct node*)malloc(sizeof(struct node));
	scanf("%d", &temp2->data);
	temp2->link=NULL;
	if(root2==NULL)
		{
		root2=temp2;
		}
	else
		{
		struct node *p;
		p=root2;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp2;
		}
}

void append3()
{
	struct node *temp3;
	temp3=(struct node*)malloc(sizeof(struct node));
	temp3->data=0;
	temp3->link=NULL;
	if(root3==NULL)
		{
		root3=temp3;
		}
	else
		{
		struct node *p;
		p=root3;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp3;
		}
}

void display1()
{
	struct node *temp1,*p;
	
	temp1=root1;
	p=root1;
	printf("The merged list is:\t");
	if(temp1==NULL)
	printf("empty list\n");
	else
	{
		while(temp1!=NULL)
		{	
		if(temp1->link==NULL)
		printf("%d", temp1->data);
		else printf("%d,", temp1->data);
		temp1=temp1->link;
		}
		printf("\n");
	}
}

void display2()
{
	struct node *temp2,*p;
	
	temp2=root2;
	p=root2;
	printf("The merged list is:\t");
	if(temp2==NULL)
	printf("empty list\n");
	else
	{
		while(temp2!=NULL)
		{	
		if(temp2->link==NULL)
		printf("%d", temp2->data);
		else printf("%d,", temp2->data);
		temp2=temp2->link;
		}
		printf("\n");
	}
}


void display3()
{
	struct node *temp3,*p;
	
	temp3=root3;
	p=root3;
	
	if(temp3==NULL)
	printf("empty list\n");
	else
	{
		while(temp3!=NULL)
		{	
		if(temp3->link==NULL)
		printf("%d", temp3->data);
		else printf("%d,", temp3->data);
		temp3=temp3->link;
		}
		printf("\n");
	}
}

