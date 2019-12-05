#include <stdio.h>

 
void main()

{

static int array[10][10];

int i, j, m, n;

printf("Transpose of Matrix: \n \n");
printf("Enter the value of m: \n");
scanf("%d", &m);
printf("Enter the value of n: \n");
scanf("%d", &n);

printf("Enter the elements of the matrix: \n");
for (i = 0; i < m; ++i)

    {

        for (j = 0; j < n; ++j)

        {
	    printf("Row %d: Element: %d\n",i+1,j+1);
            scanf("%d", &array[i][j]);

        } 

    }

    printf("The matrix inputted is: \n");

    for (i = 0; i < m; ++i)

    {

        for (j = 0; j < n; ++j)

        {

            printf(" %d", array[i][j]);

        }

        printf("\n");

    }

    printf("Transpose of matrix is \n");

    for (j = 0; j < n; ++j)

    {

        for (i = 0; i < m; ++i)

        {

            printf(" %d", array[i][j]);

        }

        printf("\n");

    }

}
