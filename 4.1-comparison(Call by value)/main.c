#include <stdio.h>
#include <stdlib.h>
int comparison (float  , float );
int main()
{
    float num1,num2;

    printf("Enter The first num(positive) : ");
    scanf("%f",&num1);
    printf("Enter The first num(positive) : ");
    scanf("%f",&num2);
    comparison(num1,num2);
}
int comparison (float num1 , float num2)
{
    if(num1<0 || num2<0)
    {
        return(0);
    }
    if (num1==num2)
    {
        printf("they are equal \n");
        return (num1);
    }
    if(num1>num2)
    {
        printf("the greater is : %0.2f",num1);
         return (num1);
    }
    else
    {
        printf("the greater is : %0.2f",num2);
         return (num2);
    }

}
