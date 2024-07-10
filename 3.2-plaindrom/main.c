#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,ones=0,tens=0,hundered=0,thousands=0,ten_thousands=0;

    printf("Enter a 5 Digit int : ");
    scanf("%d",&num);

    ones=num%10;
    num=num/10;
    //printf("%d\n",ones);
    //printf("%d\n",num);
    tens=num%10;
    num=num/10;
    //printf("%d\n",tens);
    //printf("%d\n",num);
    hundered=num%10;
    num=num/10;
    //printf("%d\n",hundered);
    //printf("%d\n",num);
    thousands=num%10;
    num=num/10;
    //printf("%d\n",thousands);
    //printf("%d\n",num);
    ten_thousands=num%10;
    num=num/10;
    //printf("%d\n",ten_thousands);
    //printf("%d\n",num);
    if(ones==ten_thousands)
    {
        if(tens==thousands)
        {
            printf(" the num is plaindrom\n");
            num=ones+tens*10+hundered*100+thousands*1000+ten_thousands*10000;

        }
        else
        {
            printf("not plaindrom\n");
            num=ones*10000+tens*1000+hundered*100+thousands*10+ten_thousands;
            //printf("%d",num);
        }
    }
    else
    {
            printf("not plaindrom\n");
            num=ones*10000+tens*1000+hundered*100+thousands*10+ten_thousands;
            //printf("%d",num);

    }
    //printf("%d",num);
    if (num%2==0)
    {
        printf("The num is Even");
    }
    else
    {
        printf("the num is odd");
    }

    return 0;
}
