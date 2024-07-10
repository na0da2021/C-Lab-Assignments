#include <stdio.h>
#include <stdlib.h>

int main()
{
   float r,h,v,A1,A2;

    printf("Enter the radius of the base : ");
    scanf("%f",&r);

     printf("Enter the height  of the cylinder : ");
    scanf("%f",&h);

    v=3.14 *r*r*h;
    A1=2*3.14*r*h+2*3.14*r*r;
    A2=2*3.14*r*h+3.14*r*r;

    printf("The vol of cylinder = %0.2f m^3\n",v);
    printf("The Total surface area of cylinder = %0.2f m^2\n",A1);
    printf("The Total surface area of cylinder in the absence of one of two bases = %0.2f m^2\n",A2);



    return 0;
}
