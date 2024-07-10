#include <stdio.h>
#include <stdlib.h>

void power(float num ,int pow);
int main()
{
    power(21,3);    //TEST
    power(21,0);    //TEST
    power(21,-3);   //TEST
    power(-21,2);   //TEST
    power(-21,0);   //TEST
    power(-21,3);   //TEST
    power(-21,-3);  //TEST

    return 0;
}
void power(float num ,int pow)
{
    if (pow>0)
    {float num_2=num;
    int i;
    for(i=1;i<pow;i++)
    {
        num_2=num_2*num;
    }
    printf("The Res is : %0.2f\n",num_2);
    }

    if (pow==0)
    {
    printf("The Res is : 1 \n");
    }

    if (pow<0)
    {float num_2=num;
    int i;
    for(i=1;i<(pow*(-1));i++)
    {
        num_2=num_2*num;
    }
    printf("The Res is :(1/%0.2f)(as a fraction) \n & (%f)\n",num_2,(1/num_2));
    }

}

