#include <stdio.h>
int main()
{
	int a[100],c,d,e,f;
	printf("Append first 'n' elements to the end of the array\n");
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
		printf("Enter the element you would like to replace %d with:\n",c);
		scanf("%d",&f)
		a[e]==f;
		}
		else continue;
	}
	printf("Array with element replaced element %d to %d is: \n", c, f);
	for(e=0;e<d;e++)
	{
		
		printf("Array with element replaced element %d to %d is: \n" );
	}
	

	
