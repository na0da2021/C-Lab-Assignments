#include <stdio.h>
#include <stdlib.h>

int main()
{
   float money_saved=0 , dollars_spent=0 ,dollars_saved=0 , rest=0 ;
   int year=0 ,age=22 ;
   printf("Please enter the amount of money (L.E) : ");
   scanf("%f",&money_saved);

   dollars_saved=(money_saved)/2;

   printf("Please enter the year, which he planned to live for ( remember he will reach there at 1700 ) : ");
   scanf("%d",&year);

   int i ;
   for(i=1700;i<year;i=i+2)
   {
       dollars_spent=dollars_spent+1000;
   }
    for(i=1701;i<year;i=i+2)
   {
       dollars_spent=dollars_spent+ 1000 + (50*age);
       age=age+2;
   }
   printf("dollars_saved : %0.2f $\n",dollars_saved);
   printf("dollars_spent (from Beginning of the year 1700 : the Beginning of the year %d ) is : %0.2f $\n\n",year,dollars_spent);
   rest=dollars_saved-dollars_spent;

   if (dollars_spent>dollars_saved)
   {
       printf("it will not be enough\n\n ");
   }
   else
   {
       printf("it will be enough and (%0.2f)$ remains\n\n ",rest);
   }


    return 0;
}
