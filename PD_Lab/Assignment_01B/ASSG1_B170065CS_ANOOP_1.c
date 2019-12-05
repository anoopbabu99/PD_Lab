#include <stdio.h>
int main()
{
	int a[100],b[100],c,d,e,f;
	printf("\nFREQUENCY COUNTER\n");
	printf("Input: Size of the array: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array\n");
	for(e=0;e<d;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
		b[e]=-99;
	}
	

	for(e=0;e<d;e++)
	{
		c=1;
		for(f=e+1;f<d;f++)
	{
	if(a[e]==a[f])
        {
	c++;
        b[f]=0;
	}
	}
        if(b[e]!=0)
        {
	b[e]=c;
	}
	}
printf("\nFrequency of elements in the array are:\n");
for(e=0;e<d;e++)
{

if (b[e]!=0)
{
printf("Element: %d 	Frequency of element: %d\n",a[e],b[e]);
}
}
}

