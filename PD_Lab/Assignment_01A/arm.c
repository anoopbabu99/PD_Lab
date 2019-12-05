#include<stdio.h>
void main ()
{
int n,n2,temp=0,d;
printf("Armstrong Number Checker:\nInput number:\n");
scanf("%d",&n);
n2=n;
while(n>0)
{d=n%10;
temp=temp+d*d*d;
n=n/10;
}
if(temp==n2)
printf("Armstrong Number\n");
else printf("NOT Armstrong Number\n");
}
