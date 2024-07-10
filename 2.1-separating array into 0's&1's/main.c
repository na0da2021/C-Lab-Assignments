#include <stdio.h>
#include <stdlib.h>
int array_zeros[];
int array_ones[];
void separation(int array[],int size);
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int array[size];

    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter the element number %d :",i+1);
        scanf("%d",&array[i]);
    }

    printf("The entered array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d  ",array[i]);

    }
    printf("\n");

    separation(array,size);

    return 0;
}


void separation(int array[],int size)
{
    int j;
    j=0;
    int temp,i;



for(i=0;i<size;i++)
   {
        if(array[i]== 0)
        {
            temp=array[i];
            array_zeros[j]=temp;
            j++;
        }

   }
   int x=j;

    printf("the array of zeros : ");
    for(j=1;j<=x;j++)
    {
        printf("%d  ",array_zeros[j]);

    }
    printf("\n");


   int k=0;
  for(i=0;i<size;i++)
   {
        if(array[i]==1)
        {
            temp=array[i];
            array_zeros[k]=temp;
            k++;
        }

   }
   int y=k;
    printf("the array of ones : ");
    for(k=1;k<=y;k++)
    {
        printf("%d  ",array_ones[k]);

    }
  return ;
}



