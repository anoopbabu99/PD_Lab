#include <stdio.h>

double square(int num) 
{
  double x1 = (num * 1.0) / 2;
  double x2= (x1 + (num / x1)) / 2;
if(x1>x2)
  {
  while((x1 - x2) >= 0.0000001) 
  {
    x1 = x2;
    x2 = (x1 + (num / x1)) / 2;
  }
  return x2;
  }
else 
  {
  while((x2 - x1) >= 0.0000001) 
  {
    x1 = x2;
    x2 = (x1 + (num / x1)) / 2;
  }
  return x2;
  }
}

void main()

{
int a,b,c,d;
float s1,s2;
	printf("Quadratic equation solution\n"); 
	printf("Form ax^2 + bx + c = 0 where a,b,c are constants\n");
	printf("Input coefficient preceding second degree variable:\n"); 
	scanf("%d",&a);
	printf("Input coefficient preceding first degree variable:\n"); 
	scanf("%d",&b);
	printf("Input constant\n"); 
	scanf("%d",&c);
	d=b*b-4*a*c;
	if(a==0&&b==0&&c==0)
	printf("Infintly many solutions\n");
	else if(a==0&&b==0&&c!=0)
	printf("No solution: a and b are both 0 and c is not 0\n");
	else if(a==0&&b!=0&&c!=0)
	{
	printf("Linear Equation:\nonly one real root exists:\n");
	printf("root=%d\n",-c/b);
	}
	else if(a==0&&b!=0&&c==0)
	{
	printf("Linear Equation:\nonly one real root exists:\n");
	printf("root=0\n");
	}
	else
	{
	printf("Roots exist:\n");
	if(d>0)
	{
	printf("roots are real and unique:\n");
	printf("%.3lf and %.3lf\n", (-b+square(d))/(2*a),(-b-square(d))/(2*a));
	}	
	else if(d<0)
	{
	printf("roots are complex:\n");
	if(-b/(2.0*a)<0)
printf("%.3lfi%.3f and %.3lfi%.3f\n", (square(-d))/(2*a),-b/2.0*a,(-square(-d))/(2*a),-b/2.0*a);
	else printf("%.3lfi+%.3f and %.3lfi+%.3f\n", (square(-d))/(2*a),-b/2.0*a,(-square(-d))/(2*a),-b/2.0*a);
	}
	else	
	{
	printf("roots are real and equal:\n");
	printf("Root= %d\n", (-b)/(2*a));
	}
	}
}
