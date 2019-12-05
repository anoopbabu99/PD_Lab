#include<stdio.h>
#include<stdlib.h>

FILE* fp,*ft;

struct node
{
	int data;
	struct node* link;
};
struct node* root= NULL;
struct node* root2= NULL;
//function to swap
void swap(int *x, int *y) 
{ 	
int temp;
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void append(int* p);
void display();
void reverse(struct node *A, int len);
void display2();
int largest();
int maxdigit(int l);
void append2(int q);
void csort(int n);
int power(int a, int b);
int main()
{
	int n,c=0,i=0,arr[100],arr2[100],l=0,d=0,b,k=0,r,s;
	int*q;
	struct node* M;
	fp=fopen("radin.txt","r");
	while((fscanf(fp,"%d",&n))==1)
		{
		c++;
		}
	n=c;
	fclose(fp);

	fp=fopen("radin.txt","r");
	while(i<n)
	{
		fscanf(fp,"%d",&s);
		q=&s;
		append(q);
		i++;
	}
	fclose(fp);
	
	l=largest();
	d=maxdigit(l);
	struct node* temp;

		for(k=1;k<=d;k++)
		{temp=root;
			while(temp!=NULL)
			{
				b=(temp->data)%(power(10,k));
				r=b/(power(10,k-1));
				append2(r);
				temp=temp->link;
			}
			csort(n);
			root2=NULL;
			
		}
M=root;
reverse(M,n);
display();
}

void append(int *p)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=*p;
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

int largest()
{
int l;
struct node* temp= root;
	l=temp->data;
	while(temp!=NULL)
		{
		if(temp->data>l)
			{		
			l=temp->data;
			temp=temp->link;
			}	
		else temp=temp->link;		
		}
return l;
}

int maxdigit(int l)
{ int d;

	while(l!=0)
	{
	l=l/10;
	d++;
	}
return d;
}

int power(int a, int b)
{
int i,c;
if(b==0) return 1;

	else
	{
		while(b>0)
		{
			c=a;
			a=a*10;
			b--;
		} 
	}

return c;

}


void display()
{
	FILE* fl;
	fl=fopen("radout.txt","w");
	struct node *temp,*p;
	
	temp=root;
	p=root;
	
	if(temp==NULL)
	fprintf(ft,"empty list\n");
	else
	{
		while(temp!=NULL)
		{	
		if(temp->link==NULL)
		fprintf(fl,"%d", temp->data);
		else fprintf(fl,"%d,", temp->data);
		temp=temp->link;
		}
		fprintf(fl,"\n");
	}
	fclose(fl);
}

void append2(int q)
{
	struct node *temp2;
	temp2=(struct node*)malloc(sizeof(struct node));
	temp2->data=q;
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

void display2()
{

	struct node *temp,*p;
	
	temp=root2;
	p=root2;
	
	if(temp==NULL)
	printf("empty list\n");
	else
	{
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


//function to sort digits with bubble sort
void csort(int n)
{
	struct node* p, *q;
	int i, j; 
	for (i = 0; i < n-1; i++)        
	{	p=root2;
		q=root;
	for (j = 0; j < n-i-1; j++)  
		{
		if (p->data > p->link->data) 
			{
			swap(&q->data, &q->link->data); 
			swap(&p->data, &p->link->data); 
			}p=p->link;
			q=q->link;
		}
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

