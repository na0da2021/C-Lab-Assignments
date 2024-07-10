#include <stdio.h>
#include <stdlib.h>
int sort(int array[],int size);
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int array[size];

    int i;
    for (i=0;i<size;i++)
    {
        printf("enter the element number %d : ",i+1);
        scanf("%d", & array[i]);
    }

    printf("The Entered array is : ");
    for (i=0 ; i<size ; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    sort(array,size);
    return 0;
}
int sort(int array[],int size)
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
        printf("%d ", array[i]);
    }
    printf("\n\n");

    return(array);
}
