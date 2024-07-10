#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x1,y1,x2,y2,x_mid,y_mid;
    printf("Enter the x-coordinates of first point : ");
    scanf("%f",&x1);

    printf("Enter the y-coordinates of first point : ");
    scanf("%f",&y1);

    printf("Enter the x-coordinates of second point : ");
    scanf("%f",&x2);


    printf("Enter the y-coordinates of second point : ");
    scanf("%f",&y2);

    x_mid=(x1+x2)/2;
    y_mid=(y1+y2)/2;

    printf("The mid Point is : (%f,%f)",x_mid,y_mid);

    return 0;
}
