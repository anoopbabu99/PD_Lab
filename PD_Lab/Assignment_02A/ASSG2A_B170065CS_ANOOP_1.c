#include <stdio.h>
int gcd(int a,int b);
int main()

{
int a, b, GCD;
	printf("GCD of two numbers:\n");
	scanf("%d\n%d", &a, &b);
	printf("The GCD of %d and %d is %d.\n", a, b, gcd(a,b));
return 0;
}



int gcd(int a, int b)
{
if(a<0)
a=-a;
if(b<0)
b=-b;
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}

