#include <stdio.h>
#include <stdlib.h>
int sigma ,rem;
sigma=0;
int sum(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    sum(num);


}
int sum(int num )
{
    rem=num%10;
    sigma=sigma+rem;
    if(num==0)
    {
        return (sigma);
    }
    else
    {
       return (sum(num/10));

    }
}
