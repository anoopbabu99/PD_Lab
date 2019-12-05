#include <stdio.h>
int main()
{
	int a[100],c,d,e,f;
	printf("Replace an element in the array\n");
	printf("Input: Size of the array: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array\n");
	for(e=0;e<d;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
	}
	printf("Which element would you like to replace: ");
	scanf("%d",&c);
	for(e=0;e<d;e++)
	{
		if(a[e]==c)
		{
		printf("Replace: element %d=%d with:	",e+1,c);
		scanf("%d",&f);
		a[e]=f;
		}
		else continue;
	}
	printf("Replaced element %d=%d to %d \n", e+1, c, f);
	
	for(e=0;e<d;e++)
	{
		printf("element %d is = %d \n", e+1,a[e] );
	}
}
	

	
