#include<stdio.h>
int fact(int);
void main()
{
int i,n,c;
printf("PASCAL TRIANGLE:\n ");
printf("Enter rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(c=0;c<=(n-i-1);c++)
	printf(" ");
	for(c=0; c<=i;c++)
	printf("%d ",fact(i)/(fact(c)*fact(i-c)));
	printf("\n");
}}


int fact (int n)
{ int c;
int result=1;
for (c=1;c<=n;c++)
result=result*c;
return result;
}
