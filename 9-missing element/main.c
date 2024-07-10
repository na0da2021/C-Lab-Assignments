#include <stdio.h>
#include <stdlib.h>
int sorting(int array[],int size);

int main()
{
    int size , N;
    printf("Please enter N   : ");
    scanf("%d",&N);
    size=N-1;

    int array[size];
    int i;
    for(i=0;i<size;i++)
    {
        printf("Please enter the element number %d (in the range of 1 to N): ", i+1);
        scanf("%d",&array[i]);
        if ( array[i] > N || array[i]<1)
        {
            printf("________ERROR_______");
            printf("\n\n\n");
            return (0);
        }
    }


    printf("The Entered Array is : " );
    for(i=0;i<size;i++)
    {
        printf("%d  ", array[i]);
    }
     printf("\n\n");

     sorting(array,size);
     printf("\n\n");

     for (i=1;i<=N;i++)
     {
            if(array[i-1]!=i)
            {
                printf("The lost number is : %d\n",i);
                break;
            }
     }


    return 0;
}

int sorting(int array[],int size)
{
    int j,i,temp ;
     for(i=0;i<size;i++)
      {
          for(j=0;j<size;j++)
          {
              if(array[i]<array[j])
              {
                  temp=array[j];
                  array[j]=array[i];
                  array[i]=temp;
              }
          }
      }

      printf("the sorted array is : ");
      for (i=0 ; i<size ; i++)
    {
        printf("%d  ", array[i]);
    }
    return (array);

}
