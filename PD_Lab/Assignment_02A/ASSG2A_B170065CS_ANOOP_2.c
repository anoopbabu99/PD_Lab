#include <stdio.h>
#include <math.h>
int dec (int a);
void main()

{
int a;
	printf("Binary to Decimal\n"); 
	printf("Input Binary number: \n"); 
	scanf("%d",&a);
if(a<0) {printf("error: try again\n\n\n\n");}
else
	{printf("Decimal equivalent of Binary %d is", a);
	dec(a);}
}



int dec(int a)
{
	int r,b=1,d=0;
	


	while (a>0)
	{
	r=a%10;
			if(a%10!=1&&a%10!=0)
			{
				printf("\nerror: try again\n\n");
				break;
			}
	
	d=d+r*b;
	a=a/10;
	b=b*2;
	}
	printf(" %d\n",d);

}
