#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rows_num=0;
   int i=0 , j=0 ,x=-1 ,k=0 , y=0 , mid=0 ,m=0;

   printf("please enter rows number  : ");
   scanf("%d",&rows_num);

   for( i=1 ; i<=rows_num ; i++ )
   {
       for((k=rows_num-y) ;k>=1 ; k=k-1)
       {
           printf(".");
       }
       printf("//");
       for(j=1 ;j<=((rows_num)*2)+(x)  ;j=j+1  )
       {
           printf("_");
       }
       printf("\\\\");
       for((k=rows_num-y) ;k>=1 ; k=k-1)
       {
           printf(".");
       }
       printf("\n");
       x=x+2;
       y=y+1;
   }
   mid=((rows_num*2)-3);
   printf("//");
   for(m=1;m<=mid;m++)
   {
       printf("_");
   }
   printf("LOVE!");
   for(m=1;m<=mid;m++)
   {
       printf("_");
   }
   printf("\\\\");
   printf("\n");

   i=0 , j=0 ,x=1 ,k=0 , y=0 , mid=0 ,m=0;

   for( i=1 ; i<=rows_num ; i++ )
   {
       for(k=rows_num ;(k>rows_num-y) ; k=k-1)
       {
           printf(".");
       }
       printf("\\\\");
       for(j=1 ;j<=((rows_num)*4)+-(x)  ;j=j+1  )
       {
           printf("_");
       }
       printf("//");
       for(k=rows_num ;(k>rows_num-y) ; k=k-1)
       {
           printf(".");
       }
       printf("\n");
       x=x+2;
       y=y+1;
   }




    return 0;
}
