#include<stdio.h>
void main ()
{
int a,b=1;
printf("FACTORIAL CALCULATOR:\nInput number:\n");
scanf("%d",&a);
printf("Factorial of %d is:\n",a);
while(a>1)
{
b=b*a;
a=a-1;
}
printf("%d\n",b);
}

