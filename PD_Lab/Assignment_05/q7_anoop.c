#include<stdio.h>
#include<stdlib.h>
//Heapsort (linked list)
struct node
{
	int data;
	int key;
	struct node* link;
};
struct node* root=NULL;

int n=0;
int l=0;
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void append(int e,int key);
void display();
int maxheapify(int key);
int build_maxheap();
int heapsort();

int main()
{
int i,e;
    printf("enter size:\t");
    scanf("%d",&n);
printf("size is %d\n",n);
    for(i=0;i<n;i++)
    {    
	scanf("%d",&e);       
        append(e,i);
    }
	heapsort();
	display();
printf("\n");
}





int heapsort()
{
int i;
    build_maxheap();
    for(i=n-1;i>=1;i--)
    {
	struct node* temp=root;
	struct node* j=root;
	int k=0;
	while(k<i)
		{j=j->link;k++;}
        swap(&temp->data,&j->data);
        n=n-1;
        maxheapify(0);
    }
   
}


int build_maxheap()
{
int key;
    for(key=n/2-1;key>=0;key--)
    {
        maxheapify(key);
    }
}


int maxheapify(int key)
{
int left=2*key+1;
int right=2*key+2;
int largest;   
struct node* lg;
struct node *l,*r,*k;
k=root;l=root;r=root;lg=root;
while (k!=NULL)
	{
		if(k->key==key)
		break;
		else k=k->link;
	}
	
while (l!=NULL)
	{
		if(l->key==left)
		break;
		else l=l->link;
	}

while (r!=NULL)
	{
		if(r->key==right)
		break;
		else r=r->link;
	}
	
    if((left<n)&&(l->data>k->data))
        largest = left;
    else largest = k->key;

while (lg!=NULL)
	{
		if(lg->key==largest)
		break;
		else lg=lg->link;
	}

    if((right<n)&&(r->data>lg->data))
        largest = right;

while (lg!=NULL)
	{
		if(lg->key==largest)
		break;
		else lg=lg->link;
	}

    if(largest!=k->key)
	{
        swap(&k->data,&lg->data);
        maxheapify(largest);
	}
}

void append(int e,int key)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=e;
	temp->key=key;
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
		while(temp!=NULL)
		{	
		
		printf("%d ",temp->data);
		
		temp=temp->link;
		}
		printf("\n");
	}
}






