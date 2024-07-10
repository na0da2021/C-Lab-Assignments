#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float rad,cx,cy,px,py,length;

    printf("Enter the circle's radius : ");
    scanf("%f",&rad);

    printf("Enter the X_Coordinates of the center : ");
    scanf("%f",&cx);

    printf("Enter the Y_Coordinates of the center : ");
    scanf("%f",&cy);

    inputpass:
    printf("Enter the X_Coordinates of the Point : ");
    scanf("%f",&px);

    printf("Enter the Y_Coordinates of the Point : ");
    scanf("%f",&py);

    length=sqrt((pow(px-cx,2))+(pow(py-cy,2)));
    //printf("%0.2f",length);
    if (length<rad)
    {
        printf("Point lies within the circle\n\n");
    }
    else
    {
        printf("Point lies outside the circle \n\n");
        printf("input another point\n\n");
        goto inputpass;
    }
    return 0;
}
