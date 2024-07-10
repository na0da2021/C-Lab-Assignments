#include <stdio.h>
#include <stdlib.h>

int main()
{
     int rows ,col ;
    printf("Enter the size of the array_1 (rows&col) : ");
    scanf("%d %d",&rows,&col);

    int array_1[rows][col];

    int l,k;
    for(l=0;l<rows;l++)
    {
        for(k=0;k<col;k++)
        {
           printf("Enter the element number [%d][%d] :",l+1,k+1);
        scanf("%d",&array_1[l][k]);
        }

    }

    printf("The entered array_1 is:\n");
    for(l=0;l<rows;l++)
    {
        for(k=0;k<col;k++)
        {
           printf("%d ",array_1[l][k]);

        }
        printf("\n");
    }
    printf("\n");




    int rows2 ,col2 ;
    printf("Enter the size of the array_2 (rows&col) : ");
    scanf("%d %d",&rows2,&col2);

    int array_2[rows2][col2];

    int j,i;
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<col2;j++)
        {
           printf("Enter the element number [%d][%d] :",i+1,j+1);
        scanf("%d",&array_2[i][j]);
        }

    }

    printf("The entered array_2 is:\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<col2;j++)
        {
           printf("%d ",array_2[i][j]);

        }
        printf("\n");
    }
    printf("\n");


	    if (col != rows2)
    {
        printf("Matrix multiplication not possible. Number of columns in array_1 must equal number of rows in array_2.\n");
        return -1;
    }

	// Resultant matrix
    int array_mul[rows][col2];
    int rm, c1m, c2m;
    for (rm = 0; rm < rows; rm++)
    {
        for (c2m = 0; c2m < col2; c2m++)
        {
            array_mul[rm][c2m] = 0;
            for (c1m = 0; c1m < col; c1m++)
            {
                array_mul[rm][c2m] += array_1[rm][c1m] * array_2[c1m][c2m];
            }
        }
    }

    // Display the resultant matrix
    printf("array_mul is:\n");
    int r, c;
    for(r=0;r<rows;r++)
    {
        for(c=0;c<col2;c++)
        {
           printf("%d ",array_mul[r][c]);

        }
        printf("\n");
    }
    return 0;
}
