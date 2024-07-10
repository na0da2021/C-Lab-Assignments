#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int comb;
    int num=0;int result=0;int rem=0;int c;c=num;
    printf("Enter the number of bits : ");
    scanf("%d",&n);
    comb= pow(2,n);
    int a[comb][n];
    int i,j;
    for(i=0;i<comb;i++)
    {
        for(j=n-1; j>=0  ;j--)
        {
          a[i][j]=c%2;
          c=c/2;
        }
        num++;
        c=num;

    }

     printf("The Array of Binary combinations : \n");
     for(i=0;i<comb;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }


    int new_a[comb][n];
    for(i=0;i<comb;i++)
    {
        for(j=0;j<n-1;j++)
        {
            new_a[i][j]=a[i][j];
        }
    }


    for(i=0;i<comb;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i][j+1]==a[i][j])
            {
               new_a[i][j+1]=0;
            }
            else
            {
                new_a[i][j+1]=1;
            }
        }
    }

        printf("The Array of GRAY combinations : \n");
     for(i=0;i<comb;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",new_a[i][j]);
        }
        printf("\n");
    }



    return 0;
}
