#include<stdio.h>
void main ()
{
float s=1,i;
int n;
printf("Sum of Harmonic Series upto specified term:\nInput number of terms:\n");
scanf("%d",&n);
printf("\nSum of %d terms of the Harmonic Series is:\n",n);
for(i=2;i<=n;i++)
{ s=s+1/i;
}
printf("%f\n",s);
}

