#include <stdio.h>
int BinarySearch(int a[], int start, int end, int x); 
int main()
{
FILE *fp;
int i, n, key, A[100],c=0,s,e,mid;

fp=fopen("1.txt","r");


printf("The number of elements in the array is: \t");
fscanf(fp, "%d", &n);
printf("%d\n",n);

printf("The array elements are: \t");
for(i=0;i<n;i++)
{
	fscanf(fp, "%d", &A[i]);
}
for(i=0;i<n;i++)
{
	printf("%d ", A[i]);
} 

fscanf(fp, "%d", &key);
s=0;
e=n-1;

for(i=0;i<n;i++)
{
	if(A[i]>A[i+1])
			{
			printf("\narray is not sorted\n");
			return 0;
			}
}


mid=BinarySearch(A, s, e, key);

if(mid==-1) {printf("\nNOT FOUND\n"); return 0;}

printf("\nThe key is found in the position:\t%d\n",  mid);

}






int BinarySearch(int a[], int start, int end, int x)
{
   if (end >= start)
   {
        int mid = start + (end - start)/2;
 
      
        if (a[mid] == x)  return mid;
 
       
        if (a[mid] > x) return BinarySearch(a, start, mid-1, x);
 
        
        return BinarySearch(a, mid+1, end, x);
   }
   return -1;
}











