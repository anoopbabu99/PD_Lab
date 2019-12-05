#include <stdio.h>
int main()
{
	int a[100],l,d,e;
	printf("Largest odd integer\n");
	printf("Input: Size of the array: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array\n");
	for(e=0;e<d;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
	}
	l=a[0];
	for(e=0;e<d;e++)	
	{	
	if(a[e]%2==0)
	continue;
	else
	{
	for(e=1;e<d;e++)
	{
	if(l<a[e])
	l=a[e];
	}
	}
	}
	printf("Largest odd integer is= %d\n",l);
}

