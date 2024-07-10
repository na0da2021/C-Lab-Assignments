#include <stdio.h>
#include <stdlib.h>

int main()
{
    double px,py,qx,qy,rx,ry;
    printf("Enter The point P (px,py) that you want to rotate by 180 degree :P = ");
    scanf("%lf%lf",&px,&py);
    //printf("the entered point p = (%lf,%lf)\n",px,py);


    printf("Enter The point Q (qx,qy) that you want to rotate point p around : Q = ");
    scanf("%lf%lf",&qx,&qy);
    // printf("the entered point Q = (%lf,%lf)\n",qx,qy);

    rx=qx+(qx-px);
    ry=qy+(qy-py);

    printf(" point reflection is R (%lf,%lf)\n\n\n",rx,ry);



    return 0;
}
