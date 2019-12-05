#include <stdio.h>

int main()
{
FILE *fp;
int i, n, p, A[100],c=0,j,temp,k;

fp=fopen("4.txt","r");

fscanf(fp, "%d", &n);

for(i=0;i<n;i++)
{
	fscanf(fp, "%d", &A[i]);
}

for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      p = i;
 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( A[p] > A[j] )
            p = j;
      }
      if ( p != i )
      {
         temp = A[i];
         A[i] = A[p];
         A[p] = temp;
      }
   }
 
   printf("Sorted list is:\t");
 
   for ( i = 0 ; i < n ; i++ )
      printf("%d ", A[i]);

fclose(fp);

//part2:

fp=fopen("4.txt","r");

fscanf(fp, "%d", &n);
printf("\n");
for(i=0;i<n;i++)
{
	fscanf(fp, "%d", &A[i]);
}

for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      p = i;
 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( A[p] > A[j] )
            p = j;
      }
      if ( p != i )
      {
         temp = A[i];
         A[i] = A[p];
         A[p] = temp;
      } k=i;
	printf("Iteration %d:\t",i+1);
	for ( i = 0 ; i < n ; i++)
      printf("%d ", A[i]);
	printf("\n");
	i=k;
   }
 fclose(fp);

}

