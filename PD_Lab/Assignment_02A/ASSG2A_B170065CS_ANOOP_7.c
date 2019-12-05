#include <stdio.h>
int sum(int a[],int b);
void main()

{
int a[20],b,i;
printf("enter number of elements\n");
scanf("%d",&b);
printf("\nenter the elements:\n");	
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a,b);
}

int sum(int a[],int b)
{
int c[20],sum=0,i;

	for(i=0;i<b;i++)
	{
	if((a[i]>=1000&&a[i]<=9999)||(a[i]<=-1000&&a[i]>=-9999))
		{
		if(a[i]%2==0)
		c[i]=a[i];
		else c[i]=0;
		}
	else c[i]=0;
	}
for(i=0;i<b;i++)
	sum = sum+c[i];
printf("\nsum of even 4 digit numbers in provided array is: %d\n",sum);
}
	
	





