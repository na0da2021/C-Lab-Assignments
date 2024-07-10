#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Bakar_age=0  ;
    float suits_cost=0 , House_cost=0 , money=0 ,birth_money=0 ;
    printf("Enter the age of Bakar : ");
    scanf("%d",&Bakar_age);
    printf("Enter the cost of the suits Bakar will sell each Even birthday : ");
    scanf("%f",&suits_cost);
    printf("Enter the cost of the House Bakar will build for his goat Rashida : ");
    scanf("%f",&House_cost);
    birth_money=50;
    int i;
    for(i=1 ; i<=Bakar_age ; i=i+2)
    {
        money = money+birth_money ;
        money = money-((0.05)*money) ;
        birth_money=birth_money+50;
    }
     //printf("The  Money saved from odd birthday : %0.2f L.E",money);
    int j ;
    for (j=2 ; j<=Bakar_age ; j=j+2)
    {
        money=money+suits_cost;
    }
    printf("The Total Money saved : %0.2f L.E\n",money);
    if(money>=House_cost)
    {
        printf("Money is enough to build the house for Rashida \n");
    }
    else
    {
        printf("Money is not enough\n");
    }



    return 0;
}
