#include <stdio.h>

int main()
{
FILE *fp;
int i, n, key, A[100],c=0;

fp=fopen("2.txt","r");

fscanf(fp, "%d", &key);

fscanf(fp, "%d", &n);

for(i=0;i<n;i++)
{
	fscanf(fp, "%d", &A[i]);
}

for(i=0;i<n;i++)
{
	if(A[i]==key)
	{
		printf("%d\n",i);
		c--;
		break;
	}
} 

if(c==0)
	{
		printf("NOT FOUND\n");
	}

}


