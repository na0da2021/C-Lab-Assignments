#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
   int ones=0, tens=0, hundereds=0, thousands=0, ten_thousands=0, sum=0 ;
   printf("Enter a five digit  number : ");
   scanf("%d",&num);  //12345
   ones = num%10;       //ones=5
   printf("ones %d\n",ones);
   num = num-ones;  // num =12340
   tens = (num%100)/10;     //tens=4
   printf("tens %d\n",tens);
   num = num-10*tens ;  //num = 12300
   hundereds =(num%1000)/100; // hundereds= 3
   printf("hundereds %d\n",hundereds);
   num = num-100*hundereds; //num=12000
   thousands = (num%10000)/1000;   // thousands=2
   printf("thousands %d\n",thousands);
   num = num-1000*thousands; // num=10000
   ten_thousands = (num%100000)/10000; // ten_thousands=1
   printf("ten_thousands %d\n",ten_thousands);
   num = num-10000*ten_thousands; //num=0
   sum = ones + tens + hundereds + thousands +ten_thousands;
   printf("sum of digits = %d",sum);

   return 0;
    return 0;
}
