#include <stdio.h>

int main()
{
FILE *fp;
int i, n, A[100],j,temp,key;

fp=fopen("5.txt","r");

fscanf(fp, "%d", &n);

for(i=0;i<n;i++)
{
	fscanf(fp, "%d", &A[i]);
}

for(j=2;j<n;j++)
{
	key=A[j];
	i=j-1;
	while(i>=0&&A[i]>key)
	{
		A[i+1]=A[i];
		i=i-1;
	}
	A[i+1]=key;
}

for(i=0;i<n;i++)
{
	printf("%d ", A[i]);
}

}


