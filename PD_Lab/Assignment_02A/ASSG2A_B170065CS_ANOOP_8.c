#include <stdio.h>
void perf (int a);
void main()

{
int a;
	printf("Perfect number\n"); 
	scanf("%d",&a);
	perf(a);
}

void perf (int a)
{
int b[100],sum=0,i;
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		b[i]=i;
		else b[i]=0;
	}
	
	for(i=1;i<=a/2;i++)
	{
		sum=sum+b[i];
	}
if (a==sum)
printf("%d is a perfect number\n",a);
else 
printf("%d is not a perfect number\n",a);
}
	
	
	
