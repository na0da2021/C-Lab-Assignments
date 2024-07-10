#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max_Size  1000
struct work
{
    char name[Max_Size];
    int hours_work;
    float salary;

};
struct work Get_info();
void increasing_salary (int , struct work[]);

int main()
{
    int i,n;
    n=4;
    struct work store[n];
    for(i=1;i<=n;i++)
    {
        printf("Enter the information of user#[%d] : \n",i);
        store[i-1]=Get_info();
    }
    /*for(i=1;i<=n;i++)
    {
        printf("The Entered Information of user#[%d] :\n1)Name: %s2)Hours of work per day : %d \n3)Salary: %0.2f \n\n",i,store[i-1].name,store[i-1].hours_work,store[i-1].salary);

    }*/
    increasing_salary (n ,store);
    return 0;
}

struct work Get_info()
{
    struct work temp;
    printf("Enter Name : ");
    fgets(temp.name,Max_Size,stdin);

    printf("Enter salary : ");
    scanf("%f",&temp.salary);
    fgetc(stdin);

    printf("Enter hours of work per day : ");
    scanf("%d",&temp.hours_work);
    fgetc(stdin);

    return temp;
};

void increasing_salary(int n , struct work store[n])
{
    int i;
    for( i=0;i<n;i++)
    {
       if(store[i].hours_work==8)
    {
        store[i].salary=store[i].salary+50;
    }
    if(store[i].hours_work==10)
    {
        store[i].salary=store[i].salary+100;
    }
    if(store[i].hours_work>=12)
    {
        store[i].salary=store[i].salary+150;
    }

    }
    printf("After Increasing Salary : \n");
    for( i=0;i<n;i++)
    {
        printf("1)Name: %s2)Hours of work per day : %d \n3)Salary: %0.2f \n\n",store[i].name,store[i].hours_work,store[i].salary);
    }


};
