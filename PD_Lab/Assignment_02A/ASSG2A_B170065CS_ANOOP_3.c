#include <stdio.h>
int read (int mata[22][22], int m, int n);
int print (int mata[22][22], int m, int n);
int sum (int mata[22][22], int matb[22][22], int m, int n);
int subtract (int mata[22][22], int matb[22][22], int m, int n);
void main()

{
int a,m,n,mata[22][22],matb[22][22];
	
	printf("Matrix\n"); 
	printf("enter the rows of the matrix\n"); 
	scanf("%d",&m);
	printf("enter the columns of the matrix\n"); 
	scanf("%d",&n);
	
	printf("Input Matrix A\n"); 
	read (mata, m, n);
	printf("Input Matrix B\n"); 
	read (matb, m, n);
	
	printf("Print Matrix:\n\n\n\n\nOUTPUT:\n\n");
	printf("Matrix A \n");
	print (mata, m, n);
	printf("Matrix B \n");
	print (matb, m, n);
	
	printf("SUM - Matrix C:\n");
	sum (mata,matb,m,n);
	
	printf("Diffrence - Matrix D:\n");
	subtract (mata,matb,m,n);
}

int read (int mata[22][22], int m, int n)

{
	int i,j;
printf("Enter the elements of the matrix: \n");
for (i = 0; i < m; ++i)

    {

        for (j = 0; j < n; ++j)

        {
	    printf("Row %d: Element: %d\n",i+1,j+1);
            scanf("%d", &mata[i][j]);

        } 

    }
}

int print (int mata[22][22], int m, int n)

{
	int i,j;

    for (i = 0; i < m; ++i)

    {

        for (j = 0; j < n; ++j)

        {

            printf(" %d", mata[i][j]);

        }

        printf("\n");

    }
}

int sum (int mata[22][22], int matb[22][22], int m, int n)
{int add[22][22],i,j;
   for (i = 0; i < m; ++i)  
   	{
      		for (j = 0 ; j < n; ++j) 
		{
         	add[i][j] = mata[i][j] + matb[i][j];
        	printf("%d\t", add[i][j]);
     		}
      printf("\n");
   	}
}

int subtract (int mata[22][22], int matb[22][22], int m, int n)
{int sub[22][22],i,j;
   for (i = 0; i < m; ++i) 
   	{
      		for (j = 0 ; j < n; ++j) 
		{
         	sub[i][j] = mata[i][j] - matb[i][j];
        	printf("%d\t", sub[i][j]);
     		}
      printf("\n");
   	}
}



 
