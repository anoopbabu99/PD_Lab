#include <stdio.h>
int main()
{
	int a[100],b[100],s,d,e,f,sec;
	printf("Second largest and smallest element");
	printf("Input: Size of the array: ");
	scanf("%d",&d);
	
	printf("\nInput: Elements of array\n");
	for(e=0;e<d;e++)
	{
		printf("Element %d: ",e+1);
		scanf("%d",&a[e]);
	}

	s=a[0];
	for(e=0;e<d;e++)
	{
	if(s>a[e])
	s=a[e];
	}
	printf("smallest element in array is: %d\n",s);
	f=a[0];
	for(e=0;e<d;e++)
	{
	if(a[e]>f)
	{
	sec=f;
	f=a[e];
	}
	}
	printf("second largest= %d\n",sec);
	
}
