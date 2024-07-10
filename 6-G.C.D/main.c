#include <stdio.h>
#include <stdlib.h>
int GCD(int,int);
int i;
i=10;
int main()
{
    int num1,num2;
    printf("Enter the first num : ");
    scanf("%d",&num1);
    printf("Enter the second num : ");
    scanf("%d",&num2);
    GCD(num1,num2);

}

int GCD(int num1,int num2)
{
    if(num1%i==0 && num2%i==0 )
    {
        return(i);
    }
    else
    {
        i--;
        return (GCD(num1,num2));
    }
}
