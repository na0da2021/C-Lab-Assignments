#include <stdio.h>
#include <stdlib.h>
float temp,res;
int thermistor(float);
int main()
{
   printf("Enter the resistance value in ohm : ");
   scanf("%f",&res);
   thermistor(res);
}


int thermistor(float res)
{
    if (res>10000 || res<973)
    {
        printf(" invalid range \n");
        return(0);
    }
    temp=(13009-res)/(120.36);
    printf("the corresponding temperature : %0.3f",temp);
    return(1);

}
