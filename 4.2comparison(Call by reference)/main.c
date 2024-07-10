#include <stdio.h>
#include <stdlib.h>
float num1,num2;
float *num1pointer=&num1;
float *num2pointer=&num2;
int comparison (float*,float*);
int main()
{
    printf("Enter The first num(positive) : ");
    scanf("%f",&num1);
    printf("Enter The first num(positive) : ");
    scanf("%f",&num2);
    //printf("%0.2f     %0.2f",*num1pointer,*num2pointer);
    comparison(num1pointer,num2pointer);

}
int comparison (float *num1pointer , float *num2pointer)
{
    if(*num1pointer<0 || *num2pointer<0)
    {
        return(0);
    }

    if (*num1pointer==*num2pointer)
    {
        printf("they are equal \n");
        return (*num1pointer);

    }
    if(*num1pointer>*num2pointer)
    {
        printf("the greater is : %0.2f",num1);
        return(*num1pointer);
    }
    else
    {
        printf("the greater is : %0.2f",num2);
         return(*num2pointer);
    }

}
