#include <stdio.h>

int main()
{
FILE *fp;
int i, n, key, A[100],c=0,j,temp;

fp=fopen("3.txt","r");

fscanf(fp, "%d", &n);

for(i=0;i<n;i++)
{
	fscanf(fp, "%d", &A[i]);
}

for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{ 
		if(A[j]>A[j+1])
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
	}
}

for(i=0;i<n;i++)
{
	printf("%d ", A[i]);
}


}
			




