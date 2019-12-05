#include <stdio.h>
int fib (int a);
int main()

{
int a;
	printf("Fibonacci numbers\n"); 
	printf("enter the number of terms you would like to view\n"); 
	scanf("%d",&a);
	if(a<=0)
		return 0;
	if(a==1)
	{
		printf("0 ");
		return 0;
	}
	printf("0 1 ");
	fib(a-2);
}

int fib (int a)
{
    static long int first = 0, second = 1, sum;
   
    if(a > 0)
    {
        sum = first + second;
	printf("%ld ", sum);
        first = second;
        second = sum;
        fib(a-1);    
    }
    else
    {
        printf("\n\n\n");
    }
}

	
