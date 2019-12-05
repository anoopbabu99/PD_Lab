#include <stdio.h>
void main()
{
	int a[100],b[100],s,d,e,f,sec;
	printf("Cyclic Permutation\n");
	printf("Input: Size of the array: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array\n");
	for(e=0;e<d;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
	}
	for(e=d-1;e<d;e++)
	{
		printf("Element: %d\n",a[e]);
	}
	for(e=0;e<d-1;e++)
	{
		printf("Element %d\n",a[e]);
	}
}
