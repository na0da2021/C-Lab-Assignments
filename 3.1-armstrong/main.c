#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int armstrong(int);
int main()
{
    int b;
    b=0;
    printf("Enter a number to test armstrong or not : ");
    scanf("%d",&b);
    armstrong(b);

}
int armstrong(int original_num)
{
    int count,num1;
    count=0;
    num1=original_num;
    while(num1 != 0)
    {
        count++;
        num1=num1/10;
    }
   // printf("%d\n",count);
    int num2,rem,sum;
    num2=original_num;
    rem=0;
    sum=0;
   while(num2!= 0)
   {
       rem=num2%10;
       sum=sum+pow(rem,count);
       num2=num2/10;
   }

   //printf("%d\n",sum);
   //printf("%d",original_num);

   if (sum==original_num)
      {
          printf("num is ARMSTRONG\n");
          return 1;
      }
   return 0 ;
}
