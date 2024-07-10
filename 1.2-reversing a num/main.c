#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void reverse(int);
int main()
{
    int x;
    x=0;
    printf("Enter a num : ");
    scanf("%d",&x);
    reverse(x);
    return(0);
}
void reverse(int num )
{

    int count,num1;
    count=0;
    num1=num;
    while(num1 != 0)
    {
        count++;
        num1=num1/10;
    }
    //printf("%d",count);

    int rem,sum;
    sum=0;
    while(num != 0 )
    {
        rem=num%10;
        sum=sum+rem*pow(10,(count-1));
        num=num/10;
        count--;
    }
    printf("The reversed num is : %d",sum);
    return ;
}
