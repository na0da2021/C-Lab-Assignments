#include <stdio.h>
#include <stdlib.h>
struct distance
{
    int m;
    int cm;
};

struct distance Add_TwoDistances(struct distance,struct distance);
struct distance Get_Distance();
int main()
{
    struct distance d1,d2,sum_d;
    d1=Get_Distance();
    d2=Get_Distance();
    sum_d=Add_TwoDistances(d1,d2);
    printf("%d,%d\n",d1.m,d1.cm);
    printf("%d,%d\n",d2.m,d2.cm);
    printf("%d,%d",sum_d.m,sum_d.cm);

    return 0;
}

struct distance Get_Distance()
{
    struct distance  temp;
    printf("Enter the meter : ");
    scanf("%d",&temp.m);
    printf("Enter the cm : ");
    scanf("%d",&temp.cm);
    return temp;
}

struct distance Add_TwoDistances(struct distance d1 ,struct distance d2)
{
    struct distance sum;
    sum.m=d1.m+d2.m;
    if((d1.cm+d2.cm)>=100)
    {
        sum.m=sum.m+(d1.cm+d2.cm)/100;
        sum.cm=(d1.cm+d2.cm)-((d1.cm+d2.cm)/100)*100;
    }
    else
    {
        sum.cm=d1.cm+d2.cm;
    }
    return sum;
};
