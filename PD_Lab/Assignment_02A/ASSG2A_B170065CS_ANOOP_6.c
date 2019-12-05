#include <stdio.h>

static int flag=0;

float bin (float x);
void main()

{
float x;
	printf("Positive decimal fraction to binary equivalent\n"); 
	printf("Enter a positive decimal fraction less than 1: \n"); 
	scanf("%f",&x);
	if(x<0||x>1)
		{
		printf("error: Entered number is not a positive decimal fraction less than 1:\n\n\n");
		main();
		}
	printf("0.");
	bin(x);
}



float bin(float x)
{
	static int i=0;
	int a[20];
	float b,c;
if(i<4)
{
c=x*2;
	if(c>=1)
	{
		a[i]=1;
		printf("%d",a[i]);
		b=c-1;
		++i;
		bin(b);
	}	
	else if(c<1&&c>0) 
	{
		a[i]=0;
		printf("%d",a[i]);
		b=c;
		++i;
		bin(b);
	}
	else if (c==0) printf("\n");
}
if(i==4&&!flag)
{ 
printf("...\n");
flag++;
}	
}
