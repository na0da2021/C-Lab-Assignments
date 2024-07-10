#include <stdio.h>
#include <stdlib.h>
struct months
{
    int day;
    int month ;
    int year;
};
struct months Get_date();
struct months add_45(struct months);

int main()
{
    struct months date;
    struct months add;
    date=Get_date();
    printf("%d / %d /%d \n",date.day,date.month,date.year);
    add=add_45(date);
    printf("The Result is : %d / %d /%d ",add.day,add.month,add.year);

    return 0;
}
struct months Get_date()
{
    struct months temp;
    printf("Enter the day :");
    scanf("%d",&temp.day);

    printf("Enter the month :");
    scanf("%d",&temp.month);

    printf("Enter the year :");
    scanf("%d",&temp.year);

   return temp;
};

struct months add_45(struct months date)
{
    struct months temp;


    if(date.month==1 && date.day<17)   //31day
    {
        temp.day=date.day+45-31;
        temp.month=2;
        temp.year=date.year;
    }

    if(date.month==1 && date.day>=17)   //31day
    {
        temp.day=date.day+45-31-28;
        temp.month=3;
        temp.year=date.year;
    }

    //-----------------------------------------------------------------------
    if((date.month==3 || date.month==5 || date.month==7 || date.month==8 || date.month==10)&& date.day<17)  //31day
    {
        temp.day=date.day+45-31;
        temp.month=date.month+1;
        temp.year=date.year;
    }
    if((date.month==3 || date.month==5  || date.month==8 || date.month==10)&& date.day>=17)  //31day
    {
        temp.day=date.day+45-31-30;
        temp.month=date.month+2;
        temp.year=date.year;
    }
    //---------------------------------------------------------
    if(date.month==12 && date.day<=17)   //31day
    {
        temp.day=date.day+45-31;
        temp.month=1;
        temp.year=date.year+1;
    }

    if(date.month==12 && date.day>17)   //31day
    {
        temp.day=date.day+45-31*2;
        temp.month=2;
        temp.year=date.year+1;
    }
    //-----------------------------------------------------------
    if(date.month==11 && date.day>16 )   //30day
    {
        temp.day=date.day+45-60;
        temp.month=1;
        temp.year=date.year+1;
    }
    if(date.month==11 && date.day<=16 )   //30day
    {
        temp.day=date.day+45-30;
        temp.month=12;
        temp.year=date.year;
    }
    //--------------------------------------------------------------

    if(date.month==4 || date.month==6 || date.month==9 )   //30day
    {
        temp.day=date.day+45-30;
        temp.month=date.month+1;
        temp.year=date.year;
    }
    //-------------------------------------------------------
    if(date.month==2 && date.day<=14)
    {
        temp.day=date.day+45-28;
        temp.month=3;
        temp.year=date.year;

    }
    if(date.month==2  && date.day>14)
    {
        temp.day=date.day+45-28-31;
        temp.month=4;
        temp.year=date.year;

    }
    //------------------------------------------------
    if(date.month==7 && date.day<=17)
    {
        temp.day=date.day+45-31;
        temp.month=8;
        temp.year=date.year;

    }
    if(date.month==7  && date.day>17)
    {
        temp.day=date.day+45-31*2;
        temp.month=9;
        temp.year=date.year;

    }

    return temp;
};


