#include <stdio.h>
#include <string.h>

struct employee
{ 
	char name[30];
	int salary;
	int work;
};


int main()

{
int ch,i=0,n=0,w; 
struct employee c[100];

printf("(1) Add an employee record. \n(2) Display the details of all the employees who did not get any increment in salary.\n(3) Display the details of all the employees with their final salary.\n(4) Display the details of all the employees, given work per day.\n(5) Exit\n");


do
	{
printf("\nEnter your choice:\t");
scanf("%d",&ch);

switch(ch)
{
case 1:
	{
	i=n;
	printf("Enter name:\t");
	scanf("%s", c[i].name);
	printf("Salary:\tRs.");
	scanf("%d", &c[i].salary);
	if(10000>c[i].salary) return 0;
	if(99999<c[i].salary) return 0;
	printf("Work per day (in hours):\t");
	scanf("%d", &c[i].work);
	if(c[i].work>=8&&c[i].work<10) c[i].salary=c[i].salary+50;
	else if(c[i].work>=10&&c[i].work<12) c[i].salary=c[i].salary+100;
	else if(c[i].work>=12) c[i].salary=c[i].salary+150;
	i++;
	n=i;
	continue;
	} 

case 2: 
	{
		for(i=0;i<n;i++)
		{
		if(c[i].work<8)
		{
		printf("Name:\t%s\n",c[i].name);
		printf("Final Salary\tRs.%d\n",c[i].salary);
		}
		}continue;
	} 

case 3: 
	{
		for(i=0;i<n;i++)
		{
		printf("Name:\t%s\n",c[i].name);
		printf("Final Salary:\tRs.%d\n",c[i].salary);
		}continue;
	} 

case 4: 
	{
		printf("Enter the work per day (in hours):\t");
		scanf("%d", &w);
		for(i=0;i<n;i++)
		{
		if(c[i].work==w)
		{
		printf("Name:\t%s\n",c[i].name);
		printf("Final Salary:\tRs.%d\n",c[i].salary);
		}
		}continue;
	} 
case 5:
	{
	return 0;
	} 
}

	}while(ch<=5);

}





