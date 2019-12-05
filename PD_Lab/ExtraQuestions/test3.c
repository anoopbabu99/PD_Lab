#include<stdio.h>
#include<stdlib.h>
int balanced(int s);

int enqueue(char ch,int s);
// storing data in a set of queues
char pop(int s);

char popq(int s);

int balance(int s);

FILE* fp, *ft;
int tail=0,nos;
int head=0;
//declaring set of queues as a GLOBAL variable.
char arr[100][100];
int a[100];

//a[s] is the pointing to the tail of the queue. 


int  main(int argc, char* argv[])
{
int i,s=0;
char ch;

fp=fopen(argv[1],"r");
if((fscanf(fp,"%d",&nos))!=1)
printf("EMPTY INPUT");
fclose(fp);

fp=fopen(argv[1],"r");
fscanf(fp,"%d",&nos);
ch=getc(fp);

        for(s=0;s<nos;s++)
        {i=0;
                while(1)
                {
			ch=getc(fp);
			if(ch=='\n'||ch==EOF) break;
                        enqueue(ch,s);
			a[s]=tail;
                }
		tail=0;
        }

fclose(fp);



ft=fopen(argv[2],"w");

//printing data on the terminal. (NOT a part of the question)


printf("\nDATA------------\n");

int lp=0,rp=0;

for(s=0;s<nos;s++)
{lp=0,rp=0;
	for(i=0;i<=a[s];i++)
	{
		printf("%c",arr[i][s]);
		if(arr[i][s]=='(')
		lp++;
		if(arr[i][s]==')')
		rp++;
		if(rp>lp) rp=1000;
	}
	if(lp==rp){ printf("\tYes"); fprintf(ft,"Yes\n");}
	else  {printf("\tNo"); fprintf(ft,"No\n");}
	printf("\n");
	
}


printf("--------------------\n");

fclose(ft);

ft=fopen(argv[2],"w");

//STACK/QUEUE LOGIC

int c=-1;

	for(s=0;s<nos;s++)
	{ head=0;
		c=balanced(s);
		if(c==1)
		{	printf("YES\n"); fprintf(ft,"Yes\n");}
		else{ printf("NO\n"); fprintf(ft,"No\n");}
	}
fclose(ft);

}
//STACK
// enqueueing using the Queue principle.

int enqueue(char ch,int s)
{

arr[tail][s]=ch;
tail=tail+1;

}


// function to check whether string has balanced parenthesis
int balanced(int s)
{
int i;
char p;
int n=a[s];
int lp=0, rp=0;
	for(i=0;i<=n;i++)
	{	
		p=pop(s);
		if(p==')')
		rp++;
		if(p=='(')
		lp++;
		if(lp>rp) lp=1000;
	}
if(lp==rp)return 1;
else return 0;
}

// popping using standard definition of STACK-LIF0
char pop(int s)
{
int p; 
p=arr[a[s]][s];
a[s]=a[s]-1;
return p;
}

// popping using FIF0 i.e.: A queue principle.
char popq(int s)
{
int p;

p=arr[head][s];
head=head+1;
return p;
}


