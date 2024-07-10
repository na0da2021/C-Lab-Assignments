#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e;

    printf("make sure that your equation is ; a x^4 + b x^3 + c x^2 + d x + e=0 \n");


    printf("enter the cooficient of X^4 : ");
    scanf("%f",&a);

    printf("enter the cooficient of X^3 : ");
    scanf("%f",&b);

    printf("enter the cooficient of X^2 : ");
    scanf("%f",&c);

    printf("enter the cooficient of X : ");
    scanf("%f",&d);

    printf("enter the abs cofficient : ");
    scanf("%f",&e);

    printf("The Differential equation is %0.2f x^3 + %0.2f x^2 + %0.2f x + %0.2f = 0 ",a*4,b*3,c*2,d);

    return 0;
}
