#include <stdio.h>
#include <stdlib.h>
int freq(int element,int col,int rows,int array[][col]);
int main()


{
    int rows,col,element;
    printf("Enter the size of the array (rows&col) : ");
    scanf("%d %d",&rows,&col);


    printf("Enter the element you wanna get its frequency  : ");
    scanf("%d",&element);


    int array[rows][col];

    int i,j;
    for (i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("enter the element number of [%d][%d] : ",i,j);
             scanf("%d", & array[i][j]);
        }
    }

    printf("The Entered array is:\n");

    for (i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("%d  " ,array[i][j]);
        }
        printf("\n");
    }
    freq(element,col,rows,array);

    return 0;
}
int freq(int element,int col,int rows,int (*array)[col])
{

    int i,j,count;
    count=0;
    for (i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(array[i][j]==element)
            {
                count++;
            }
        }
    }




    printf("number of occurrence of that element in the array : %d",count);
    printf("\n\n");
    return(count);
}
