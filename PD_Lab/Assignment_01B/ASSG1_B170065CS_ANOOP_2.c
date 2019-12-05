#include <stdio.h>
int main()
{
	int a[100],c,d,e,f;
	printf("DELETE AN ELEMENT FROM AN ARRAY AND REPRINT:\n");
	printf("Input: Size of the array: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array\n");
	for(e=0;e<d;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
	}
	printf("Which element would you like to see:");
	scanf("%d",&c);
	printf("Element %d = %d\n",c,a[c-1]);
	printf("Reprinted array without selected element:\n");

	for(e=0;e<d;e++)	
	{	
	if(a[e]==a[c-1])
	printf("element %d has been deleted\n",c);
	else printf("element %d = %d\n", e+1, a[e]);
	}
}
