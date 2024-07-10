// Another Representation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
   int ones=0, tens=0, hundereds=0, thousands=0, ten_thousands=0 ;
   printf("Enter a five digit  number : ");
   scanf("%d",&num);

   ones = num%10;
   num = num-ones;

   tens = (num%100)/10;
   num = num-10*tens ;

   hundereds =(num%1000)/100;
   num = num-100*hundereds;

   thousands = (num%10000)/1000;
   num = num-1000*thousands;

   ten_thousands = (num%100000)/10000;
   num = num-10000*ten_thousands;

   printf("the reverse of digits is :%d%d%d%d%d",ones,tens,hundereds,thousands,ten_thousands);

    return 0;
}
