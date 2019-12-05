#include<stdio.h>
int main()
{  int a[100],n,b[100]={0},last[50],max,min=-327001,start;
   printf("enter the number of entries\n");
   scanf("%d",&n);
   printf("start entering\n");
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(int i=0;i<n;i++)
   { max=min;
     for(int j=i;j<n;j++)
	{ b[i]+=a[j];
          if(max<=b[i])
          { max=b[i]; 
            last[i]=j;
           }
         }
      a[i]=max;
     }	   
   for(int i=0;i<n;i++)
   if(max<=a[i])
   { max=a[i];
     start=i;
    }
   printf("the largest sum is %d and the subset index begins at %d and ends at %d",max,start,last[start]);
   return 0;
}       
