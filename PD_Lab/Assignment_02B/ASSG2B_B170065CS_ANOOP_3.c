#include <stdio.h>
#include <string.h>

struct customer
{ 
	char name[30];
	int account_number;
	int balance;
};


int main()

{
int ch,i=0,n=0; 
struct customer c[100];

printf("(1) Add a customer record\n(2) Display the name of customers having balance less than 200.\n(3) Display the details of the customers whose balance amount got incremented.\n(4) Display the details of all the customers.\n(5) Exit\n");


do
	{
printf("\nEnter your choice:\t");
scanf("%d",&ch);

switch(ch)
{
case 1:
	{
	i=n;
	printf("Name:\t");
	scanf("%s", c[i].name);
	printf("Account Number:\t");
	scanf("%d", &c[i].account_number);
	if(10000>c[i].account_number) return 0;
	if(99999<c[i].account_number) return 0;
	printf("Balance:\t");
	scanf("%d", &c[i].balance);
	if(10>c[i].balance) return 0;
	if(1000<c[i].balance) c[i].balance=c[i].balance+100;
	i++;
	n=i;
	continue;
	} 

case 2: 
	{
		for(i=0;i<n;i++)
		{
		if(c[i].balance<200)
		printf("Name:\t%s\n",c[i].name);
		}continue;
	} 

case 3: 
	{
		for(i=0;i<n;i++)
		{
		if(c[i].balance>1000)
		{
		printf("Name:\t%s\n",c[i].name);
		printf("Account Number:\t%d\n",c[i].account_number);
		printf("Balance:\t%d\n\n",c[i].balance);
		}
		}
		continue;
		
	} 

case 4: 
	{
		for(i=0;i<n;i++)
		{
		printf("Name:\t%s\n",c[i].name);
		printf("Account Number:\t%d\n",c[i].account_number);
		printf("Balance:\t%d\n\n",c[i].balance);
		}continue;
	} 
case 5:
	{
	return 0;
	} 
}

	}while(ch<=5);

}





