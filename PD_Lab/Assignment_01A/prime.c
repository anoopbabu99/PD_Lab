#include<stdio.h>
void main ()

{
int l,u,a,b,c;
printf("Enter the lower bound: ");
scanf("%d",&l);
printf("Enter the upper bound: ");
scanf("%d",&u);
printf("List of prime numbers in the interval: [%d,%d] are \n\n",l,u);
for(a=l;a<=u;a++)
{c=0;
	for(b=2;b<=a/2;b++)
	{if(a%b==0)
	 {
	 c++;
	 break;
	 }
	}
	if(c==0&&a!=1)
	printf("%d\n",a);

}}
