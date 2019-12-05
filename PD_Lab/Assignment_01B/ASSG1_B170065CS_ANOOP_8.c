#include <stdio.h>
int main()
{
	int a[100],b[100],c[100],d,p,e,f,g,j,k,i=0,l=0,u;
	printf("Merge 2 arrays\n");
	printf("Input: Size of the array - A: ");
	scanf("%d",&p);
	printf("Input: Size of the array - B: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array-A\n");
	for(e=0;e<p;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
	}
	printf("\nInput: Elements of array-B\n");
	for(f=0;f<d;f++)
	{
		printf("Element %d: ",f+1);
		scanf("%d",&b[f]);
	}
	for(i=0;i<p;i++)
		c[i]=a[i];
	for(i=0;i<d;i++)
		c[p+i]=b[i];
	u=p+d;
	for(i=0;i<u;i++)
	{	for(j=i+1;j<u;j++)
		{	if(c[i]==c[j])
			{for(k=j;k<u;k++)
				{c[k]=c[k+1];
				}u--;j--;
			}
		}
	}
for(i=0;i<u;i++)
printf("%d",c[i]);
}
	
	
	
