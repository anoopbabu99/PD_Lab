#include<stdio.h>
void main ()

{
int a,b=0,c=1,d,i;
printf("FIBONOCCI SERIES:\nEnter the number of terms \n");

scanf("%d",&a);
printf("\nList of first %d terms of the Fibonocci Series are:\n",a);
printf("%d\n%d\n",b,c);
for(i=0;i<a-2;i++)
{
	d=b+c;
	b=c;
	c=d;

printf("%d\n",d);
}
printf("\n");
}
