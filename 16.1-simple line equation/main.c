#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,y1,x2,y2,m,c;
    printf("Enter the x-coordinates of first point : ");
    scanf("%f",&x1);

    printf("Enter the y-coordinates of first point : ");
    scanf("%f",&y1);

    printf("Enter the x-coordinates of second point : ");
    scanf("%f",&x2);


    printf("Enter the y-coordinates of second point : ");
    scanf("%f",&y2);

    m=(y2-y1)/(x2-x1);
    c=y1-m*x1;

    printf("The equation of the line is : Y = %f X + %f ",m,c);

    return 0;
}
