#include <stdio.h>
int mult(int a,int b,int n);
int add (int a,int b, int c);
void main()

{
int a,b,c,p,n;
	printf("enter three numbers\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
if(a>0&&b>0&&c>0)
{
	if(a>b&&a>c)
		{
		n=a;
		mult(b,c,n);
		p= add(n,b,c);
		}
	else if (b>a&&b>c)
		{
		n=b;
		mult(a,c,n);
		p= add(n,a,c);
		}
	else    {
		n=c;
		mult(a,b,n);
		p= add(n,a,b);
		}
	printf("Total sum = %d\n", p);
}else printf("input only natural numbers"); 
}

int add (int n,int x, int y)
{ 
int a[10],b[10],c=0,d=0,e=0,f=0,s1,s2,s3,i;
for(i=0;x*i<n;i++)
	{
	a[i]=x*i;
	c=i;
	}
for(i=0;y*i<n;i++)
	{
	b[i]=y*i;
	d=i;
	}
for(i=0;i<=c;i++)
	{
	s1=a[i]+e;
	e=s1;
	}
for(i=0;i<=d;i++)
	{
	s2=b[i]+f;
	f=s2;
	}
s3=s1+s2;
return s3;
}

int mult(int a,int b,int n)
{ int p[20],c,i,x,q[i];
printf("Multiples of %d are: ",a);
for(i=1;a*i<n;i++)
	{
	p[i]=a*i;
	if(a*i<n-a)
	printf("%d,",p[i]);
	else printf("%d ",p[i]);
	}

printf("\nMultiples of %d are: ",b);
for(i=1;b*i<n;i++)
	{
	q[i]=b*i;
	if(b*i<n-b)
	printf("%d,",q[i]);
	else printf("%d",q[i]);
	}
printf("\n");
}

	
	



